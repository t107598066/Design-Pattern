#include"barbecuer.h"

class Command{
    protected:
        Barbecuer* _receiver;
    public:
        void command(Barbecuer* receiver){
            this->_receiver = receiver;
        }
        virtual void executeCommand() = 0;
};

class BakeMuttonCommand: public Command{
    protected:
        Barbecuer* _receiver;
    public:
        BakeMuttonCommand(Barbecuer* receiver):_receiver(receiver){}
        void executeCommand(){
            _receiver->bakeMutton();
        }
};

class ChickenWingCommand: public Command{
    protected:
        Barbecuer* _receiver;
    public:
        ChickenWingCommand(Barbecuer* receiver):_receiver(receiver){}
        void executeCommand(){
            _receiver->bakeChickenWing();
        }
};