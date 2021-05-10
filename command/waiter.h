#include"command.h"
#include<vector>
class Waiter{
    private:
        Command* _command;
        vector<Command *> *_v;
        vector<Command *>::iterator it;

    public:
        Waiter(){
            _v = new vector<Command *>;
        }
        void setOrder(Command* command){
            this->_command = command;            
            _v->push_back(_command);
        }
        void notify(){            
            for (it=_v->begin(); it != _v->end();it++){                
                (*it)->executeCommand();
            }                
        }
};