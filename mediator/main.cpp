#include"country.h"

int main(){
    UN* _UN = new UN();
	USA* c1 = new USA(_UN);
	Taiwan* c2 = new Taiwan(_UN);

	_UN->setUSAColleague(c1);
	_UN->setIraqColleague(c2);

	c1->declare("hello");
	c2->declare("world!");

	return 0;
}