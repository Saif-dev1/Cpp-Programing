#include <iostream>
#include <string>
using namespace std;

int main ()
{
string stat;
int x;
cout<<"Enter the string statement: ";
getline(cin,stat);

x=stat.length();
char arry[x];
bool result;
for (int i=0; i<x; i++){
  arry[i]=stat[i];
}
cout<<arry<<endl;
for (int j=0,k=x-1; j<x,k>=0; j++,k--){
 if (arry[j]==stat[k]){
 	result=true;
 }
 else{
 	result=false;
 }
}
if (result==true){
	cout<<"Word is Palindrome";
}
else{
	cout<<"Word is not Palindrome";
}
return 0;
}
