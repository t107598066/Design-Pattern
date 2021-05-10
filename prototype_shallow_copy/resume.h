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
        WorkExperience* _experience; //與 deep copy 不同點 淺複製主要是透過指標 而 深複製透過傳值

    public:
        Resume(){}
        Resume(string name){
            this->_name = name;
            _experience = new WorkExperience;//初始就建立共享 WorkExperience 而不是 clone 時再建立
        }

        void setPersonalInfo(string sex,string age){
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