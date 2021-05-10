#include <iostream>
#include <WinSock2.h>
using namespace std;

class Singleton_lock
{
    private:
        static Singleton_lock* instance;
        //臨界區，防止多線程產生多個實例
        static CRITICAL_SECTION m_Sec;

        Singleton_lock()  
        {

        }
    public:
        static CRITICAL_SECTION* getlock()
        {
            return &m_Sec;
        }
        static Singleton_lock* getInstance()  //此方法是獲得本類實例的唯一全局訪問節點
        {
            //雙重鎖定
            if (instance == NULL)
            {
                EnterCriticalSection(&m_Sec);
                if (instance == NULL)
                {
                    instance = new Singleton_lock();
                }
                LeaveCriticalSection(&m_Sec);
            }
            return instance;
        }
};

Singleton_lock* Singleton_lock::instance = NULL;
CRITICAL_SECTION Singleton_lock::m_Sec = CRITICAL_SECTION();

