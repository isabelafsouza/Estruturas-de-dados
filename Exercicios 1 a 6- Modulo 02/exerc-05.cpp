#include <iostream>
#include<string.h>

using namespace std;

int main(){
	int N;
	int A[N],B[N], S[N]; 
	cout<<"Digite o tamanho do vetor A: "<<endl;
	cin>>N;

	for (int i=0; i<N;i++){
		cout<<"Digite o "<<i+1<<" valor do vetor A: "<<endl;
		cin>>A[i];
	}
	
	for (int i=0; i<N;i++){
		cout<<"Digite o "<<i+1<<" valor do vetor B: "<<endl;
		cin>>B[i];
	}
		for (int i=0; i<N;i++){
		S[i]= A[i]+B[i];
		
	}
	cout<<"Vetor resultado da soma dos vetores A e B:"<<endl;
	for (int i=0; i<N;i++){
		cout<<A[i]<<"+"<<B[i]<<"="<<S[i]<<endl;
	}
}