#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
char x;
cout<<"Student Record"<<endl<<endl;
string Student_ID,phone_no;
string name,email_adrress,department;
ofstream record("student.txt");
do{
cout<<"Enter name: ";
getline(cin, name);
cout<<"Enter ID no#: ";
getline(cin, Student_ID);
cout<<"Enter E-mail adrress: ";
getline(cin, email_adrress);
cout<<"Enter department: ";
getline(cin, department);
cout<<"Enter Phone number: ";
getline(cin, phone_no);
cout<<"Do you want to Enter new record? Y/N: "<<endl;
record<<name<<" ";
record<<Student_ID<<" ";
record<<email_adrress<<" ";
record<<department<<" ";
record<<phone_no<<" ";
record<<endl;
cin>>x;
cin.ignore();
} while(x=='y' || x=='Y');
record.close();
ifstream noice("student.txt");
string str;
while(getline(noice, str)){
cout<<str;
cout<<endl;
}
cout<<endl;
return 0;
}
