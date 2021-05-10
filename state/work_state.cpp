#include"work_state.h"
#include <iostream>
extern "C"{}
Work::Work(){
    this->_current = new ForenoonState();
}
void Work::setHour(int t){
    this->_hour = t;
}
int Work::getHour(){
    return _hour;
}
bool Work::work_finish(bool finish){
    _finish = finish;
    return _finish;
}
void Work::setState(State* state){
    this->_current = state;
}
void Work::writeProgram(){
    this->_current->writeProgram(this);
}

void ForenoonState::writeProgram(Work* w){
    if(w->getHour()<12)
        cout << "current time: " << w->getHour() << endl;
    else{
        w->setState(new NoonState());
        w->writeProgram();
    }

}

void NoonState::writeProgram(Work* w){
    if(w->getHour()<13)
        cout << "current time: " << w->getHour() << endl;
    else{
        w->setState(new AfternoonState());
        w->writeProgram();
    }
}

void AfternoonState::writeProgram(Work* w){
    if(w->getHour()<17)
        cout << "current time: " << w->getHour() << endl;
    else{
        w->setState(new EveningState());
        w->writeProgram();
    }
}

void EveningState::writeProgram(Work* w){
    if(w->getHour()<21)
        cout << "current time: " << w->getHour() << endl;
    else{
        w->setState(new RestState());
        w->writeProgram();
    }
}

void RestState::writeProgram(Work* w){            
    cout << "current time: " << w->getHour() << endl;
}

void SleepState::writeProgram(Work* w){            
    cout << "current time: " << w->getHour() << endl;
}



