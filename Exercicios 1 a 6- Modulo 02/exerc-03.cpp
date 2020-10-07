#include <iostream>
#include<string.h>

using namespace std;

#define VETOR 11


int main(){
	int veta[VETOR],vetm[VETOR], x=0;
	
	for(int i=0; i<VETOR; i++){
		cout<<"Digite o "<< i+1<<" valor:"<<endl;
		cin>>veta[i];

	}
	cout<<"Digite o valor para a multiplicação: "<< endl;
	cin>>x;
	for (int i=0;i<VETOR;i++){
		vetm[i]=(veta[i]*x);
		
	}
	for(int x=0; x<VETOR;x++){
		cout<<"Vetor M valor novo nº"<<x+1<<" : "<<vetm[x]<<endl;
	}
}