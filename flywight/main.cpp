#include"webSite_factory.h"
#include"webSite.h"

int main(){
    WebSiteFactory* f = new WebSiteFactory();

	WebSite* fx = f->getWebSiteCategory("a");
	fx->Use(User("andysu"));

	WebSite* fy = f->getWebSiteCategory("a");
	fy->Use(User("tom"));

	WebSite* fz = f->getWebSiteCategory("a");
	fz->Use(User("joseph"));


	WebSite* fl = f->getWebSiteCategory("b");
	fl->Use(User("sellina"));

	WebSite* fm = f->getWebSiteCategory("b");
	fm->Use(User("candy"));

	WebSite* fn = f->getWebSiteCategory("b");
	fn->Use(User("kobe"));

	cout << "website class count: " << f->getWebSiteCount() << endl;

	return 0;
}