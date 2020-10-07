#include <iostream>
#include<string.h>

using namespace std;

#define NOTAS 21

float mediaVVetor(int vet[],int tam){
	float soma=0;
	for(int i=0; i<NOTAS; i++){
		soma+=vet[i];
	}
	return soma/tam;
}

int main(){
	int vet[NOTAS], acima=0;
	float media;
	for(int i=0;i<NOTAS;i++){
		cout<<"Digite a nota do aluno"<<i+1<<" :"<<endl;
		cin>>vet[i];
	}
	media= mediaVVetor(vet,NOTAS);
	cout<<"Média: "<<media<<endl;
	for( int i=0; i<NOTAS; i++){
		if (vet[i]>media){
			acima++;
			
		}
	}
	cout<<"Quantidade de alunos acima da media:"<<acima<<endl;
	cout<<"Quantidade de alunos abaixo da media:"<<NOTAS-acima<<endl;
}