#include <iostream>

using namespace std;
main()
{
	float peso, altura,IMC;
	cout << "Digite seu peso: ";
	cin >> peso;
	
	cout << "Digite sua altura: ";
	cin >> altura;
	IMC = peso / (altura * altura);

	if(IMC < 20)
	{
		cout << "Abaixo do peso";

	}
	if(IMC >= 20 && IMC < 25)
	{
		cout << "Peso ideal";
	}
	if(IMC>25)
	{
		cout << "Acima do peso";
	}
}
