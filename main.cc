#include "ThreadPool.hpp"
#include "tasks.hpp"

using namespace ThreadPoolModule;

int main()
{
    // ThreadPool<task_t> thread_pool;
    ThreadPool<task_t>::getInstance()->startThreads();

    // thread_pool.startThreads();

    int count = 10;
    while (count--)
    {
        ThreadPool<task_t>::getInstance()->pushTasks(check);
        sleep(1);
    }

    ThreadPool<task_t>::getInstance()->stopThreads();

    ThreadPool<task_t>::getInstance()->waitThreads();

    return 0;
}