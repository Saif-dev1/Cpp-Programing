#include <iostream>
using namespace std;
void dob()
{
	int year[2],month[2],date[2];
	cout<<"Enter your date of birth : DD / MM / YYYY \n";
	cin>>year[0]>>month[0]>>date[0];
	cout<<"Enter present date : DD / MM / YYYY \n";
	cin>>year[1]>>month[1]>>date[1];
	cout<<"Your age is : "<<date[1]-date[0]<<" Days "<<month[1]-month[0]<<" Months "<<year[1]-year[0]<<" Years ";
	
	
}
int main ()
{
dob();

return 0;
}
