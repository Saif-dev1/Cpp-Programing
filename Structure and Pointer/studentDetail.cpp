#include <iostream>
#include <string>
using namespace std;
struct student{
	int Id;
	string name;
	string department;
	string email;
	string phone_number;
};
int main ()
{
student std[5];
for(int i=0; i<5; i++){
	cout<<"Enter the ID of "<<i+1<<" student: ";
	cin>>std[i].Id;
	cout<<"Enter the name of "<<i+1<<" student: ";
	cin>>std[i].name;
	cout<<"Enter the Department of "<<i+1<<" student: ";
	cin>>std[i].department;
	cout<<"Enter the E-mail of "<<i+1<<" student: ";
	cin>>std[i].email;
	cout<<"Enter the Phone number of "<<i+1<<" student: ";
	cin>>std[i].phone_number;
	
}
cout<<"======================================="<<endl;
cout<<"Id  Name  Department  E-mail     Contact# "<<endl;
for (int j=0; j<5; j++){
	cout<<std[j].Id<<"  "<<std[j].name<<"  "<<std[j].department<<"  "<<std[j].email<<"  "<<std[j].phone_number<<"  "<<endl;
}
cout<<endl;

return 0;
}
