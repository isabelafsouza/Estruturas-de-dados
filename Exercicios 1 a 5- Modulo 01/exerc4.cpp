#include <iostream>

using namespace std;
main()
{
	float slr, reaj, slrn;
	cout << "Digite o valor do salario : ";
	cin >> slr;
	if (slr < 1000)
	{
		reaj = (slr * 15) / 100;
		slrn = slr + reaj;
		cout << "Valor do salario com reajuste: " << slrn;
	}
	if(slr >= 1000 && slr<=1500)
	{
		reaj = (slr * 10) / 100;
		slrn = slr + reaj;
		cout << "Valor do salario com reajuste: " << slrn;
	}
	else
	{
		reaj = (slr * 5) / 100;
		slrn = slr + reaj;
		cout << "Valor do salario com reajuste: " << slrn;
	}
}
