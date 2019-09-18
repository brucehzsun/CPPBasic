#include "RunLoop.h"
#include "Utils/AutoLock.hpp"

//namespace asr {

RunLoop::RunLoop(std::string name) {
	pthread_mutex_init(&mutex_, NULL);
	pthread_cond_init(&wait_cond_, NULL);

	name_ = name;
	alive_ = false;
	is_shut_down_ = true;
}

RunLoop::~RunLoop() {
	pthread_mutex_destroy(&mutex_);
	pthread_cond_destroy(&wait_cond_);
}

void* StartMainLoopImp(void* param) {
	RunLoop* detector = (RunLoop*) param;
	detector->DoMainLoop();
	return 0;
}

void RunLoop::StartMainLoop() {
	alive_ = true;
	is_shut_down_ = false;

	pthread_attr_init(&main_loop_attr_);
	pthread_attr_setscope(&main_loop_attr_, PTHREAD_SCOPE_PROCESS);
	pthread_attr_setdetachstate(&main_loop_attr_, PTHREAD_CREATE_DETACHED);
	pthread_create(&main_loop_pid_, &main_loop_attr_, StartMainLoopImp, this);
}

void RunLoop::ShutDownLoop() {
	alive_ = false;
	{
//		AutoLock lock(&mutex_);
		pthread_cond_signal(&wait_cond_);
	}
	while (is_shut_down_ == false) {
		// SLEEP_MS(50);
	}
	pthread_attr_destroy(&main_loop_attr_);

	// LOG(INFO) << name_ << " Loop ShutDownLoop over ";
}

//}
