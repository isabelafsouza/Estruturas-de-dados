#include <iostream>
#include <string>

using namespace std;

struct pessoa
{
	string nome;
	string ender;
	string cpf;
	int idade;
};

int main()
{
	pessoa p[5];

	for(int x=0; x < 5; x++)
	{  
		cout << "Digite o nome da " << x + 1 << " pessoa : "<<endl;
		getline(cin, p[x].nome);
		
		cout << "Digite o CPF da " << x + 1 << " pessoa : "<<endl;
		getline(cin, p[x].cpf);

		cout << "Digite o endereco da " << x + 1 << " pessoa : "<<endl;
		getline(cin, p[x].ender);
		
		cout << "Idade da " << x + 1 << " pessoa : ";
		cin >>  p[x].idade;
		
		
		cin.ignore();

	}
	
	cout << "Dados aceitos"<<endl;
	
	
	for(int x = 0; x < 5; x++)
	{
		cout << "Nome da " << x+1 << "pessoa : " << p[x].nome << endl;
		cout << "Idade da " << x+1 << "pessoa : " << p[x].idade << endl;
		cout << "CPF da " << x+1 << "pessoa : " << p[x].cpf << endl;
		cout << "Endereco da " << x+1 << "pessoa : " << p[x].ender << endl;
	}

	return 0;
}
