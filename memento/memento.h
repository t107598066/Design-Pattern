#ifndef _MEMENTO_H_
#define _MEMENTO_H_
#include<iostream>

class RoleStateMemento{
    private:
        int _vit, _atk, _def;
    public:
        RoleStateMemento(int vit,int atk,int def){
            this->_vit = vit;
            this->_atk = atk;
            this->_def = def;
        }
        void setVit(int vit){
            this->_vit = vit;
        }
        int getVit(){
            return _vit;
        }
        void setAtk(int atk){
            this->_atk = atk;
        }
        int getAtk(){
            return _atk;
        }
        void setDef(int def){
            this->_def = def;
        }
        int getDef(){
            return _def;
        }
};

#endif