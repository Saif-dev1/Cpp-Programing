#include <iostream>
#include <string>
using namespace std;
void stat(string sent)
{  
   int count=1;
cout<<"Enter the string statement: ";
getline(cin,sent);

for(int i=0; i<sent.length(); i++){
	if (sent[i]==32)
		count++;
	
}
	cout<<"The number of words are= "<<count;
}

int main ()
{
string sentence;



stat(sentence);

return 0;
}
