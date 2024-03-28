#include <iostream>
using namespace std;
double add(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int  mul(int a, int b)
{
	return a*b;	
}
double div(int a, int b)
{
	return a/b;
}
int main ()
{
 char again='Y',opt;
 int num_1,num_2;
for(int i=0; again=='Y'||again=='y'; i++)
{
	cout<<"Welcome to Calculator Program "<<endl;
	cout<<"Enter first number : ";
	cin>>num_1;
	cout<<"Enter Second number : ";
	cin>>num_2;
	cout<<"Which operation will you use (Enter number) : "<<endl;
	cout<<"1. Addition"<<endl;
	cout<<"2. Subtraction"<<endl;
	cout<<"3. Multiplication"<<endl;
	cout<<"4. Division"<<endl;
	cin>>opt;
	if(opt=='1')
	{
		cout<<"Addition is : "<<add(num_1,num_2)<<endl;
	}
	else if(opt=='2')
	{
		cout<<"Subraction is : "<<sub(num_1,num_2)<<endl;
	}
	else if(opt=='3')
	{
		cout<<"Multiplication is : "<<mul(num_1,num_2)<<endl;
	}
	else if(opt=='4')
	{
		cout<<"Division is : "<<div(num_1,num_2)<<endl;
	}
	cout<<"Do you want to continue calculation again or not(Y/N) : ";
	cin>>again;
}
return 0;
}
