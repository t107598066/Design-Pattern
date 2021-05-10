#include<iostream>
#include "memento.h"
using namespace std;

class GameRole
{
public:
	GameRole()
	{

	}

	void stateDisplay() const
	{
		cout << "current state:" << endl;
		cout << "vit: " << this->_vit << endl;
		cout << "atk: " << this->_def << endl;
		cout << "def: " << this->_atk << endl;
	}	
	void getInitState()
	{
		this->_atk = 100;
		this->_def = 100;
		this->_vit = 100;
	}

	void fight()
	{
		this->_atk = 0;
		this->_def = 0;
		this->_vit = 0;
	}

	RoleStateMemento* saveState()
	{
		RoleStateMemento* statememento = new RoleStateMemento(this->_vit,this->_atk,this->_def);
		return statememento;
	}
	void recoveryState(RoleStateMemento* memento)
	{
		this->_vit = memento->getVit();
		this->_atk = memento->getAtk();
		this->_def = memento->getDef();	
	}
private:
	int _vit;
	int _atk;
	int _def;
};