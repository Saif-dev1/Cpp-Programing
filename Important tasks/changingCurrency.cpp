#include <iostream>
using namespace std;

int main ()
{
int rupees,pound,a,amount;
cout<<"Which currency do you want to convert??"<<endl;
cout<<"1.Rupees to Pound"<<endl;
cout<<"2.Pound to Rupees"<<endl;
cin>>a;
cout<<"Enter the Amount= ";
cin>>amount;
if (a==1){

	rupees=amount*254;
	cout<<"Amount in Rupees is= "<<rupees;
}
else if (a==2){
	pound=amount/254;
	cout<<"Amount in Pound is= "<<pound;
}

return 0;	
}
