#include "strategy.h"
using namespace std;
class ConcreteStrategyA: public Strategy{
    void algorithm(){
        cout << "algorithm A";
    }
};

class ConcreteStrategyB: public Strategy{
    void algorithm(){
        cout << "algorithm B";
    }
};

class ConcreteStrategyC: public Strategy{
    void algorithm(){
        cout << "algorithm C";
    }
};

class ConcreteStrategyD: public Strategy{
    void algorithm(){
        cout << "algorithm D";
    }
};