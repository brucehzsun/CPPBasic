#ifndef _TAOBAO_AR_RUN_LOOP_BOBSHENHUI_H333__
#define _TAOBAO_AR_RUN_LOOP_BOBSHENHUI_H333__

#include <pthread.h>
#include <string>

//namespace asr{

class RunLoop{

public:
	RunLoop(std::string name);

	virtual ~RunLoop();

	virtual void DoMainLoop() = 0;

	void StartMainLoop();

	void ShutDownLoop();

protected:

	pthread_mutex_t mutex_;
	pthread_t main_loop_pid_;
	pthread_attr_t main_loop_attr_;
	pthread_cond_t wait_cond_;

	bool alive_;
	bool is_shut_down_;
	std::string name_;
};

//}

#endif
