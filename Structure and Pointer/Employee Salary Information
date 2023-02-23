#include <iostream>
#include <string>
using namespace std;

void emp_salary();
void display();
struct employee {
	int emp_number;
	string emp_name;
	int basic_salary,HouseAllowance,MedicalAllowance, Tax, GrossPay,NetSalary;
}d;

int main ()
{
 
cout<<"Enter the Empolyee number: ";
cin>>d.emp_number;
cout<<"Enter the Empolyee name: ";
cin>>d.emp_name;
cout<<"Enter the Basic Salary: ";
cin>>d.basic_salary;

cout<<"**************************************"<<endl;
cout<<"     Emplyoee salary Detail      \n";
cout<<"**************************************"<<endl;

 emp_salary();
 display();




return 0;
}
void emp_salary(){

	d.HouseAllowance=(10*d.basic_salary)/100;
	d.MedicalAllowance=(5*d.basic_salary)/100;
	d.GrossPay=(d.basic_salary+d.HouseAllowance+d.MedicalAllowance);
	d.Tax=(4*d.basic_salary)/100;
	d.NetSalary=d.GrossPay-d.Tax;
}
void display(){
	
cout<<"Employee Number: "<<d.emp_number<<endl;	
cout<<"Employee Name: "<<d.emp_name<<endl;
cout<<"Basic Salary: "<<d.basic_salary<<endl;
cout<<"House Allowance: "<<d.HouseAllowance<<endl;
cout<<"Medical Allowance: "<<d.MedicalAllowance<<endl;
cout<<"Gross Salary: "<<d.GrossPay<<endl;
cout<<"Tex Deduction: "<<d.Tax<<endl;
cout<<"Net Salary: "<<d.NetSalary<<endl;
}





