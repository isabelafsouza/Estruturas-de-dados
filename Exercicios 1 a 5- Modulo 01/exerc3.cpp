#include <iostream>

using namespace std;
main(){
	float hrt, slmin, slr,vhrt,slbt,imp;
	cout<<"Digite as horas trabalhadas: ";
	cin>>hrt;
	cout<<"Digite o valor do salario minimo: ";
	cin>>slmin;
	
	vhrt= slmin/2;
	slbt= hrt*vhrt;
	imp= (slbt*3)/100;
	slr= slbt-imp;
	
	cout<<"Salario a receber: "<<slr;
}
