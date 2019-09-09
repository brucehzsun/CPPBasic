#include <stdio.h>
#include <stdlib.h>

#include <iostream> // std::cout
#include <thread>   // std::thread

void thread_task() {
    for (int i = 0; i < 100; i++) {
        std::cout << "hello thread = " << i << std::endl;
    }
}

/*
 * ===  FUNCTION  =========================================================
 *         Name:  main
 *  Description:  program entry routine.
 * ========================================================================
 */
int main(int argc, const char *argv[]) {
    std::thread t(thread_task);
    std::cout << "main thread start" << std::endl;
    t.join();
    std::cout << "main thread join" << std::endl;

    return EXIT_SUCCESS;
}  /* ----------  end of function main  ---------- */