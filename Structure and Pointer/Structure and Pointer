#include <string>
#include <iostream>
using namespace std;
struct Student {
 string name;
 int id;
 int *mark= new int;
};
void inputStudent(Student* p1,int n);
void display(Student *p2,int n);
int main () {
    int x;
     Student stu;
    cout<<"how many mark you want to store: ";
    cin>>x;
    stu.mark= new int [x];
 inputStudent(&stu,x);
 display(&stu,x);

 return 0;
} 
void inputStudent(Student* p1,int n)
{    
    cout<<"Enter student name:  ";
    cin>>p1->name;
    cout<<"Enter student id:  ";
    cin>>p1->id;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter marks: ";
       cin>>p1->mark[i];
    }
    
}
void display(Student *p2,int n)
{
    cout<<"\n values store in structer is \n";
    cout<<"Name is "<<p2->name<<endl;
     cout<<"Id is "<<p2->id<<endl;
      for(int i=0;i<n;i++)
    {
        cout<<" Marks is: ";
       cout<<p2->mark[i]<<endl;
    }
}
