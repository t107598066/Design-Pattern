#include "simple_factory.h"
using namespace std;
int main(){
    Operation *oper = NULL;
    Simple_factory sf;
   

    oper = sf.create('+');
    oper->setA(2);
    oper->setB(2); 
    double result = oper->getResult();
    cout << "+ : " << result << endl;

    oper = sf.create('-');
    oper->setA(2);
    oper->setB(2); 
    result = oper->getResult();
    cout << "- : " <<result << endl;

    oper = sf.create('*');
    oper->setA(2);
    oper->setB(2); 
    result = oper->getResult();
    cout << "* : " << result << endl;

    oper = sf.create('/');
    oper->setA(2);
    oper->setB(2); 
    result = oper->getResult();
    cout <<"/ : " << result << endl;
    
    return 0;
}