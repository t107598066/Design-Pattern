#include<iostream>
#include<string>
using namespace std;
class WorkExperience
{
public:
	protected:        
        string _company;
        string _workTime;
    public:
        WorkExperience(){}
 
        WorkExperience(const string company,const string workTime)
        {
            _company = company;
            _workTime = workTime;
        }
    
        ~WorkExperience()
        {
            cout << "WorkExperience delete" << endl;
            this->display();
        }
    
        void setCompany(const string company)
        {
            _company = company;
        }
    
        const string getCompany() const
        {
            return _company;
        }
    
        void setWorkTime(const string workTime)
        {
            _workTime = workTime;
        }
    
        const string getWorkTime() const
        {
            return _workTime;
        }
    
        void display()
        {
            cout << "Company: " << _company << endl;
            cout << "WorkTime: " << _workTime << endl;
        }
    
    
};
