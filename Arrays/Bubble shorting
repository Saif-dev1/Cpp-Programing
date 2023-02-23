#include<iostream>
using namespace std;
void bubble_short(int*);

int main(){
int arry[5]={2,5,1,3,7};
int* p;
p=arry;
cout<<"Values of arry Unshorted: ";
for(int i=0; i<5; i++){
	cout<<arry[i]<<" ";
}
cout<<endl;
bubble_short(arry);
cout<<"Value of arry after shorting: ";
for(int i=0; i<5; i++){
	cout<<arry[i]<<" ";
}


return 0;
}
void bubble_short(int* p){
	int i,j,temp;
	for(i=0; i<5; i++){
		for(j=0; j<4; j++){
			if(p[j]>p[j+1]){
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
}
