#ifndef _OPERATOR_H_
#define _OPERATOR_H_
#include<iostream>
#include "interface.h"

class OperationAdd: public Operation{
    public:
        double getResult(){
            double result = 0;
            result = _A + _B;            
            return result;
        }
        
};

class OperationSub: public Operation{
    public:
        double getResult(){
            double result = 0;
            result = _A - _B;
            return result;
        }
        
};

class OperationMul: public Operation{
    public:
        double getResult(){
            double result = 0;
            result = _A * _B;
            return result;
        }
        
};

class OperationDiv: public Operation{
    public:
        double getResult(){
            if(_A == 0)
                throw "Can't div with 0";
            double result = 0;
            result = _A / _B;
            return result;
        }
        
};
#endif