#include <iostream>
using namespace std;

int main()
{
	int id=0, op=0, qtd=0, i=0, op1=0,op2=0,op3=0,op4=0;
	float med=0, porc1=0, porc2=0, porc3=0, porc4=0, ctm=0;

	while(i != 2)
	{
		cout << "1-Votar" << endl;
		cout << "2-Sair" << endl;
		cin >> i;

		switch(i)
		{
		case 1:
			cout << "Digite sua idade: " << endl;
			cin >> id;
			cout << "Digite a sua opnião em relação ao filme: " << endl;
			cout << "1- Otimo" << endl;
			cout << "2- Bom" << endl;
			cout << "3- Regular" << endl;
			cout << "4- Ruim" << endl;
			cin >> op;
			switch(op)
			{
			case 1:
				op1=op1+1;
				qtd=qtd+1;
				break;
			case 2:
				op2=op2+1;
				qtd=qtd+1;
				break;
			case 3:
				op3=op3+1;
				qtd=qtd+1;
				break;
			case 4:
				op4=op4+1;
				qtd=qtd+1;
				break;
			}
			if (id < 0)
			{
				cout << "Idade inexistente" << endl;
				cout << "Digite novamente" << endl;
				cin >> id;
			}
			ctm=ctm+id;
			porc1=(op1*100)/qtd;
			porc2=(op2*100)/qtd;
			porc3=(op3*100)/qtd;
			porc4=(op4*100)/qtd;
			
			med= (ctm/qtd);
			break;
		case 2:
			cout<<"Total de pessoas que responderam as questoes: "<<qtd<<endl;
			cout<<"Media de idade dessas pessoas: "<<med<<endl;
			cout<<"Porcentagem de resposta como Otimo: "<<porc1<<endl;
			cout<<"Porcentagem de resposta como Bom: "<<porc2<<endl;
			cout<<"Porcentagem de resposta como Regular: "<<porc3<<endl;
			cout<<"Porcentagem de resposta como Ruim: "<<porc4<<endl;
			break;
		}
	}
	

}
