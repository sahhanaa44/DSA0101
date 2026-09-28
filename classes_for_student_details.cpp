#include <iostream>
using namespace std;
class student{
    public:
    string student_details;
    void display(){
        cout<< "student details: "<<student_details;
    }
};
int main(){
    student student1;
    student1.student_details="sahhanaa t\t 192511283\t\n";  
    student1.display();
    student student2;
    student2.student_details="kaviya t\t 192511282\t";  
    student2.display();
    return 0;    
}
