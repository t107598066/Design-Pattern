#include"resume.h"

int main(){
    WorkExperience* pWorkExperience = new WorkExperience("MS", "2001.11 - 2005.11");
    Resume a(pWorkExperience);
    a.setPersonalInfo("andy","boy", "29");


    Resume* b = a.clone();    
    b->setPersonalInfo("Marry", "Female", "30");
    b->setWorkExperience("Google", "2006.01 - 2010.01");
    

    Resume* c = a.clone();    
    b->setPersonalInfo("Marry", "Female", "30");
    c->setWorkExperience("aa", "cc.01 - dd.01");
    
        
    a.display();
    b->display();
    c->display();


    return 0;
}