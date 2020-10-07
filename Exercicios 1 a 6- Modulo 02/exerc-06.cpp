#include <iostream>
#include<string.h>

using namespace std;
#define VET 10

int main(){
	float vet[VET], max, min, media, soma;
	int f=0;
	for(int i=0; i<VET; i++){
		cout<<"Digite a temperatura do dia "<<i+1<<" :"<<endl;
		cin>>vet[i];
	}	
		min = vet[0];
		max = vet[0];

	for(int i = 0; i < VET; i++)
	{
		soma += vet[i];
		media = soma / VET;

		if (vet[i] > max){
			max = vet[i];
		}
		if (vet[i] <min){
			min = vet[i];
		}
	}
	for(int i = 0; i < VET; i++){
		if (vet[i] < media){
			f++;
		}
	}

	cout << "Menor temperatura do ano: " << min << endl;
	cout << "Maior temperatura do ano: " << max << endl;
	cout << "Média das temperaturas: " << media << endl;
	cout << "Quantidade de dias com a temperatura abaixo da media: " << f << endl;
	}
