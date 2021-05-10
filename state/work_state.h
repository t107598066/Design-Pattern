#include<iostream>
using namespace std;
extern "C"
class Work;
class State{    
    public:
        virtual void writeProgram(Work* w){};
};

class Work
{
public:
	Work();
	void setHour(int hour);
	int getHour();
	bool work_finish(bool finish);	
	void setState(State* s);
	void writeProgram();
private:
	bool _finish=0;
	int _hour=0;
	State* _current;
};

class ForenoonState: public State
{
    public:
        void writeProgram(Work* w);
};

class NoonState: public State
{
    public:
        void writeProgram(Work* w);
};

class AfternoonState: public State
{
    public:
        void writeProgram(Work* w);
};

class EveningState: public State
{
    public:
        void writeProgram(Work* w);
};

class RestState: public State
{
    public:
        void writeProgram(Work* w);
};

class SleepState: public State
{
    public:
        void writeProgram(Work* w);
};
