#include <iostream>

using namespace std;
main()
{
	int idade;
	cout << "Digite a idade do nadador: ";
	cin >> idade;
	if(idade>=5 && idade < 7)
	{
		cout << "inafantil A";

	}
	if(idade>=8 && idade < 10)
	{
		cout << "Infantil B";

	}

	if(idade>=11 && idade < 13)
	{
		cout << "Juvenil A";
	}
	if(idade>=13 && idade < 17)
	{
		cout << "Juvenil B";

	}
	if(idade > 17)
	{
		cout << "Senior";
	}
}







