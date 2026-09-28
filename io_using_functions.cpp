#include <iostream>
using namespace std;
class student{
    public:
    string name;
    string dept;
    string course_name;
    long long phno;
    int age;
    void get()
    {
        cin>>name;
        cin>>age;
        cin>>course_name;
        cin>>phno;
        cin>>dept; 
    }    
    void display(){
        cout<<"name:"<<name;
        cout<<"\nage: "<<age;
        cout<<"\ncourse_name: "<<course_name;
        cout<<"\ndepartment: "<<dept;
        cout<<"\nphone_number: "<<phno;
    }
};
int main(){
    student s;
    s.get();
    s.display();
    student r;
    r.get();
    r.display();
    return 0;
}
