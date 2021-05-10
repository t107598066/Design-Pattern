#include<iostream>
class Operation{
    protected:
        double _A = 0,_B = 0;

    public:
        
        void setA(double A){
            this->_A = A;
        }
        void setB(double B){
            this->_B= B;
        }
        virtual double getResult() = 0;
};