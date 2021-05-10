#include<iostream>
#include"waiter.h"
#include"barbecuer.h"
int main(){
    Barbecuer* boy = new Barbecuer();
    Command *bakeMuttonCommand1 = new BakeMuttonCommand(boy);
    Command* bakeMuttonCommand2 = new BakeMuttonCommand(boy);
    Command* bakeChickenWingCommand1 = new ChickenWingCommand(boy);

    Waiter *girl = new Waiter();
    girl->setOrder(bakeMuttonCommand1);
    girl->setOrder(bakeMuttonCommand2);
    girl->setOrder(bakeChickenWingCommand1);

    girl->notify();
}