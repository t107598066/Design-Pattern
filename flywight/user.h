#ifndef _USER_H_
#define _USER_H_
#include<iostream>
using namespace std;
class User
{
public:
	User(string str):_name(str){

    }
	string getName() const
	{
		return this->_name;
	}
private:
	string _name;
};
#endif