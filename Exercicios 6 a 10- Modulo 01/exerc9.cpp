#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int al,nmal,nmmal;
	float alt=0,m=0, mn=99;
	
	for (int i=0;i<11;i++)
	cout<<"Digite o n�mero do aluno: "<<endl;
	cin>>al;
	cout<<"Agora digite a altura desse aluno: "<<endl;
	cin>>alt;
	
	if(alt>m){
		m=alt;
		nmal=al;
	}
	if(al<mn){
		mn=alt;
		nmmal=al;
	}
	
cout<<"O maior aluno �: "<<nmal<<" com "<<m<<" de altuta"<<endl;
cout<<"O menor aluno �: "<<nmmal<<" com "<<mn<<" de altura"<<endl;
}