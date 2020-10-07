#include <iostream>
#include<string.h>

using namespace std;

#define VET 11

void Teste(string vet[VET], string nomes){
	for(int i=0;i<VET;i++){
		if(vet[i]==nomes){
			cout<<"ACHEI"<<endl;
			
		}else{
			cout<<"NÃO ACHEI"<<endl;
			
		}
	}
}

int main(){
	string nmbusca;
	string nome[VET];
	for(int x=0;x<VET;x++){
		cout<<"Digite o "<<x+1<<" nome: "<<endl;
		cin>>nome[x];
	}
	cout<<"Digite o nome que quer buscar:"<<endl;
	cin>>nmbusca;
	Teste(nome,nmbusca);
	return 0;
}