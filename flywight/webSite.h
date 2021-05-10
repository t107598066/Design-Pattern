#ifndef _WEBSITE_H_
#define _WEBSITE_H_
#include"user.h"
class WebSite
{
public:
	virtual void Use(User user) = 0;
};


class ConcreteWebSite : public WebSite
{
public:
	ConcreteWebSite(string webname)
	{
		this->name = webname;
	}
	void Use(User user) override
	{
		cout << "web class" << this->name << "user: " << user.getName() << endl;
	}
private:
	string name;
};
#endif