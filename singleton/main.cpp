// #include"singleton.h"
#include"singleton_lock.h"
int main()
{
    /*
	Singleton* s1 = Singleton::getInstance();
	Singleton* s2 = Singleton::getInstance();
	if (s1 == s2)  //比較兩次實例化後對象的結果是實例相同
	{
		cout << "is same" << endl;
	}
	return 0;
    */

    //雙重鎖定
    //初始化臨界區
	InitializeCriticalSection(Singleton_lock::getlock());	
	Singleton_lock* s1 = Singleton_lock::getInstance();
	Singleton_lock* s2 = Singleton_lock::getInstance();

	//刪除臨界區
	DeleteCriticalSection(Singleton_lock::getlock());

	if (s1 == s2)  
	{
		cout << "is same" << endl;
	}
	return 0;
}