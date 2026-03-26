#include <iostream>
using namespace std;
class Student {   
private:

    int num;              
    int score; 
public:    

    void setdata();
    void display();

};    
void Student::setdata()
{
    cin>>num;

    cin>>score; 
    
}
void Student::display()

    {cout<<num<<endl;     

     cout<<score<<endl; }   

int main()
{
    Student stud;
    stud.setdata();
    stud.display();
    return 0;
}