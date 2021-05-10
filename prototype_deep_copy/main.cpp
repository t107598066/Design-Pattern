#include"resume.h"

int main(){
    Resume* a = new Resume("big");
    
    a->setPersonalInfo("boy", "29");
    a->setWorkExperience("Google", "2006.01 - 2010.01");

    Resume* b = a->clone();    
    b->setPersonalInfo( "Female", "30");
    b->setWorkExperience("asd", "dsa.01 - 2010.01");
    

    Resume* c = a->clone();    
    c->setPersonalInfo( "asd", "sd");
    c->setWorkExperience("aa", "cc.01 - dd.01");
    
        
    a->display();
    b->display();
    c->display();


    return 0;
}