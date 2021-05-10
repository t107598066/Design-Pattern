#ifndef _MEDIATOR_H_
#define _MEDIATOR_H_
#include<string>
#include"country.h"
using namespace std;

class Country;
class Mediator{
    public:
        virtual void declare(string message, Country* colleague) = 0;
};
#endif
