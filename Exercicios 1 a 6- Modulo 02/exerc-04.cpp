#include <iostream>
#include<string.h>

using namespace std;

#define VETOR 20

int main(){
	int vet[VETOR];
	
	for(int i=0; i<VETOR; i++){
		cout<<"Digite o "<< i+1<<" valor:"<<endl;
		cin>>vet[i];

	}
	for (int i=VETOR-1; i>=0;i--){
		cout<<"Valor n�"<<i+1<<" : "<<vet[i]<<endl;
	}
}
