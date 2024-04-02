#include<iostream>
#include<string>
using namespace std ;

int main ()
{
string date="DD/MM/YYYY";
cout<<"Enter the date: "<<endl;
getline(cin,date);

cout<<"date= "<<date.substr(0,2)<<endl;
cout<<"month= "<<date.substr(3,2)<<endl;
cout<<"year= "<<date.substr(6,10)<<endl;

 return 0 ;
 }
