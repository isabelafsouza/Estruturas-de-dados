#include <iostream>

using namespace std;
main()
{
	float pe, desc, vl;
	int cp;
	cout << "Digite a forma que deseja realizar o pagamento" << endl;
	cout << "1- a vista em dinheiro ou cheque" << endl;
	cout << "2- a vista com cartao de credito" << endl;
	cout << "3- em ate 2 vezes" << endl;
	cout << "4- em ate 3 vezes com juros" << endl;
	cin>>cp;


	switch(cp)
	{
	case 1:
		desc = (pe * 10) / 100;
		vl = pe - desc;
		cout << "Valor a pagar com desconto: R$" << vl;
		break;
	case 2:
		desc = (pe * 5) / 100;
		vl = pe - desc;
		cout << "Valor a pagar com desconto: R$" << vl;
		break;
	case 3:
		vl = pe / 2;
		cout << "Valor a pagar parcelado em 2 vezes sem juros: R$" << vl;
		break;
	case 4:
		desc = (pe * 10) / 100;
		vl = (pe / 3) + desc;
		cout << "Valor a pagar com acrescimo de juros, parcelado em 3 vezes: R$ " << vl;
		break;

	}

}
