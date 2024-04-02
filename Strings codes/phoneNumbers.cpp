#include <iostream>
#include <string>
using namespace std;

int main ()
{
string phone_num;

cout<<"Enter your Phone number: ";
getline(cin,phone_num);


if(phone_num.at(2)=='0'){
cout<<"Mobilink"<<endl;
}

else if (phone_num.at(2)=='3'){
cout<<"Ufone"<<endl;
}
else if (phone_num.at(2)=='1'){
cout<<"Zong"<<endl;
}
else if (phone_num.at(2)=='4'){
cout<<"Telenor"<<endl;
}

return 0;
}
