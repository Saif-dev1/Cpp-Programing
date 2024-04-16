#include <iostream>
#include <string>
using namespace std;
struct data{
	string name_book;
	string name_author;
	int publish_year;
	int price_book;
};



int main ()
{
data book[5];
for(int i=0; i<5; i++){
	cout<<"Enter the name of "<<i+1<<" book: ";
	cin>>book[i].name_book;

    cout<<"Enter the name of author of "<<i+1<<" book: ";
	cin>>book[i].name_author;

    cout<<"Enter the publish year of "<<i+1<<" book: ";
	cin>>book[i].publish_year;
	
	cout<<"Enter the price of "<<i+1<<" book: ";
	cin>>book[i].price_book;
}
cout<<endl;
cout<<"Detail of book "<<endl;
for(int j=0; j<5; j++){
	cout<<"Name of book is: "<<book[j].name_book<<endl;
	cout<<"Author name: "<<book[j].name_author<<endl;
	cout<<"Publish Year: "<<book[j].publish_year<<endl;
	cout<<"Price is: "<<book[j].price_book<<endl;
}


return 0;
}
