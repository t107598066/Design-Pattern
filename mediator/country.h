#ifndef _COUNTRY_H_
#define _COUNTRY_H_

#include"mediator.h"
#include<iostream>
#include<string>
using namespace std;

class Country{
    protected:
        Mediator* _mediator;

    public:
        Country(){}
        Country(Mediator* mediator){
            this->_mediator = mediator;
        }
};

class USA: public Country{
    protected:
        Mediator* _mediator;
    public:              
        USA(Mediator* mediator):_mediator(mediator){

        }
        void declare(string message){
            this->_mediator->declare(message, this);
        }
        void getMessage(string message){
            cout << message << endl;
        }
};

class Taiwan: public Country{
    protected:
        Mediator* _mediator;
    public:        
        Taiwan(Mediator* mediator):_mediator(mediator){
            
        }
        void declare(string message){
            this->_mediator->declare(message, this);            
        }
        void getMessage(string message){
            cout << message << endl;
        }
};

class UN: public Mediator{
    protected:
        USA* _colleague1;
        Taiwan* _colleague2;
    public:

        void setUSAColleague(USA* colleague1)
        {
            this->_colleague1 = colleague1;
        }

        void setIraqColleague(Taiwan* colleague2)
        {
            this->_colleague2 = colleague2;
        }

        void declare(string message, Country* colleague){
            if (colleague == this->_colleague1)            
                this->_colleague2->getMessage(message);            
            else            
                this->_colleague1->getMessage(message);            
        }
};

#endif