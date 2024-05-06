#include <iostream>
using namespace std;
struct inform
{
    string name;
    int id;
};
int main() {
    
    inform student;
    inform *ptr;
    ptr=&student;
    
    cout<<"enter name of student"<<endl;
    cin>>student.name;
    
    cout<<"your id"<<endl;
    cin>>student.id;
    
    cout<<ptr->name<<endl;
    cout<<ptr->id;
    

    return 0;
}
