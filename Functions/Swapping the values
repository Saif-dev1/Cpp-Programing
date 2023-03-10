#include <iostream>
using namespace std;
void swap(int a, int b, int c)
{
	int d;
	for(int i=1; i<=3; i++)
	{
		for(int i=1;i<=3; i++)
		{
			if(a<b && b<c)
			{
				d=c;
				c=a;
				a=d;
			}
			else if(a<b && a<c)
			{
				d=b;
				b=c;
				a=d;
			}
		
		else if (a>b && a<c)
		{		
			d=c;
			c=b;
			b=a;
			a=d;
			
			
		}
			
			else if(a>b && b<c)
			{
				d=b;
				b=c;
				c=d;
			}
		
		}
		   
	}
	cout<<"Values after swapping : ";
	cout<<a<<" "<<b<<" "<<c<<endl;
}
int main ()
{

int num_1,num_2,num_3;
cout<<"Enter 3 numbers : ";
cin>>num_1>>num_2>>num_3;
cout<<"Before swapping Values are : "<<num_1<<" "<<num_2<<" "<<num_3<<endl;
swap(num_1,num_2,num_3);

return 0;	
}

