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
		cout<<"Valor nº"<<i+1<<" : "<<vet[i]<<endl;
	}
}
