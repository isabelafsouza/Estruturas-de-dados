#include <iostream>
#include<string.h>
using namespace std;
#define vet 10
int main(int argc, char** argv)
{
	int array[]={1,2,3,4,5,6,7,8,9,10};
	int *pArray= &array[0];
	
	
	for(int i=0; i<10; i++){
		cout<<*pArray<<endl;
		pArray++;
		
	}
		cout<<"INVERSO"<<endl;	
	for(int i=10;i>=0;i--)  {
		cout<<*pArray<<endl;
		pArray--;
	}
}
