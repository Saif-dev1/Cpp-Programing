#include<iostream>
#include<fstream>
using namespace std;
int main(){
float sum=0;
char str;
cout<<"==============================================="<<endl;
cout<<"\tWelcome to Marhaba Resturant:"<<endl;
cout<<"==============================================="<<endl;
cout<<"\t\t Menu"<<endl;
ofstream bill("Bill.txt");
bill<<"\t\tbill"<<endl<<endl;
do{
cout<<"1. Omelet $1.45\n2. French Omelet $2.45\n3. Muffin $0.99\n4. French Toast $1.99\n5. Fruit Basket $2.4\n6. Cereal $0.69\n7. Coffee $0.75\n8. Tea $0.50 ";
cout<<endl;
cout<<"Type Q to Exit Or Enter Item Number: ";
cin>>str;
switch(str){
case '1':
bill<<"Omelet $1.45"<<endl;
sum+=1.45;
break;
case '2':
bill<<"French Omelet $2.45"<<endl;
sum+=2.45;
break;
case '3':
bill<<"Muffin $0.99"<<endl;
sum+=0.99;
break;
case '4':	
bill<<"French Toast $1.99"<<endl;
sum+=1.99;
break;
case '5':
bill<<"Fruit Basket $2.4"<<endl;
sum+=2.4;
break;
case '6':
bill<<"Cereal $0.69"<<endl;
sum+=0.69;
break;
case '7':
bill<<"Coffee $0.75"<<endl;
sum+=0.75;
break;
case '8':
bill<<"Tea $0.80"<<endl;
sum+=0.80;
break;
}
}while(str!='Q'&&str!='q');
bill<<"Your total bill is: $"<<sum<<endl;	
bill.close();
return 0;
}
