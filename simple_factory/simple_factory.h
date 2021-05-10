#ifndef _SIMPLE_FACTORY_H_
#define _SIMPLE_FACTORY_H_
#include "operator.h"

class Simple_factory{
    public:
        Operation* create(char ch){
            Operation* oper = NULL;            
            switch(ch){
                case '+': 
                    oper = new OperationAdd();break;                    
                case '-': 
                    oper = new OperationSub();break;
                case '*':
                    oper = new OperationMul();break;
                case '/':
                    oper = new OperationDiv();break;

            }
            return oper;
        }
};

#endif