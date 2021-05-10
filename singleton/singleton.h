#include <iostream>
using namespace std;

class Singleton
{
private:
	static Singleton* instance;

	Singleton()  //建構造方法讓他為 private,這就堵死了外界利用new創建此類實例的可能
	{

	}
public:
	static Singleton* getInstance()  //此函式是獲得本類實例的唯一全局訪問節點
	{
		if (instance == NULL)
		{
			instance = new Singleton();
		}
		return instance;
	}
};
Singleton* Singleton::instance = NULL; //static 宣告後必須在外面給值