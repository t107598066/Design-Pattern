#include"work_state.h"

int main(){
    Work *work = new Work();    
    work->setHour(9);
    work->writeProgram();
    work->setHour(10);
    work->writeProgram();
    work->setHour(12);
    work->writeProgram();
    work->setHour(13);
    work->writeProgram();
    work->setHour(14);
    work->writeProgram();
    work->setHour(17);
    work->work_finish(0);
    work->writeProgram();
    work->setHour(19);
    work->writeProgram();
    work->setHour(20);
}