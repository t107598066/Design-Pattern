#include<string>
#include<map>
#include"webSite.h"
using namespace std;
class WebSiteFactory
{
public:
	~WebSiteFactory()
	{
		map<string, WebSite*>::iterator it;
		for (it = flyweights.begin(); it != flyweights.end(); ++it)
		{
			delete (*it).second;
		}
	}
	WebSite* getWebSiteCategory(string key)
	{
		map<string, WebSite*>::iterator it;

		for(it = flyweights.begin(); it != flyweights.end(); it++)
		{
			if ((*it).first == key)
			{
				return (*it).second;
			}
		}
		WebSite* website = new ConcreteWebSite(key);
		flyweights[key]=website;
		return website;
	}
	int getWebSiteCount()
	{
		return flyweights.size();
	}
private:
	map<string, WebSite*> flyweights;
};

