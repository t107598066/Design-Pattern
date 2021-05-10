#include<iostream>
#include<string>
#include"work_experience.h"
using namespace std;

template<class T>
class ICloneable
{
public:
	virtual T* clone() = 0;
};


class Resume: public ICloneable<Resume>{
    private:
        string _name,_sex,_age,_workDate,_company;
        WorkExperience* _experience;

    public:
        Resume(WorkExperience* WorkExperience){
            _experience = WorkExperience;
        }

        void setPersonalInfo(string name,string sex,string age){
            this->_name = name;
            this->_sex = sex;
            this->_age = age;
        }
        void setWorkExperience(const string& company, const string& workTime){
            _experience->setCompany(company);
            _experience->setWorkTime(workTime);
        }
        void display(){
            cout << _name << " " << _sex << " " << _age <<endl;
            _experience->display();
            cout << endl;
        }
        ~Resume()
        {
            cout << "Resume delete " << _name << endl;
        }


        Resume* clone(){
            Resume* resume = new Resume(*this);
		    return resume;
        }

};