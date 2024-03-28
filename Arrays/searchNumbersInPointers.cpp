#include <iostream>
using namespace std;

int main ()
{
int arry[10];
int* ptr;
int search;
ptr=arry;
for(int i=0; i<10; i++){
	cout<<"Enter the value of "<<i+1<<" arry: ";
	cin>>ptr[i];
}
cout<<endl;
cout<<"Values are: ";
for(int i=0; i<10; i++){
	cout<<ptr[i]<<" ";
}
cout<<endl;
cout<<"Which number would you want to search: ";
cin>>search;
//cout<<ptr[10]search(ptr[0],ptr[10]);
for (int i=0; i<10; i++){
	if(ptr[i]==search){
		
    cout<<"The number is: "<<search; 
	 break;
}
	
}

return 0;
}
