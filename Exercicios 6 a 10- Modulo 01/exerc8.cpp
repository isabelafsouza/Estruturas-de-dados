#include <iostream>
using namespace std;

int main(){
	int votos=0, contad=0, cana=0, canb=0,cannul=0, canbr=0,op=0,perca=0, percb=0, percnulo=0, percbr=0, i=0;
	 
	
 	while (i!=6){
		 cout<<"Escolha a opção: 1-Votar"<<endl;
		 cout<<"2- percentual de votos de cada candidato"<<endl;
		 cout<<"3- percentual de votos nulos"<<endl;
		 cout<<"4- percentual de votos brancos"<<endl;
		 cout<<"5- Sair"<<endl;
		 cin>>op;
		 
		 switch(op)
		 {
		 case 1:
		 		cout<<"Digite o seu voto: "<<endl<<"1-Candidato 1"<<endl<<"2- Candidato 2"<<endl<<"3- Voto nulo"<<endl<<"4- Voto em branco";
				cin>>votos;
		switch(votos){
		case 1:
			cana+=1;
			contad++;
			break;
		case 2:
			canb+=1;
			contad++;
			break;
		case 3:
			cannul+=1;
			contad++;
			break;
		case 4:
			canbr+=1;
			contad++;
			break;
	}	
		 	
			 break;
		 case 2:
		 	perca= (cana*100)/contad;
		 	cout<<"Porcentagem do candidato 1: "<<perca<<"%"<<endl;
		 	percb=(canb*100)/contad;
		 	cout<<"Porcentagem do candidato 2: "<<percb<<"%"<<endl;
			 break;
		 case 3:
		 	percnulo= (cannul*100)/contad;
		 	cout<<"Porcentagem de votos nulos: "<<percnulo<<"%"<<endl;
		 	break;
		 case 4:
		 	percbr= (canbr*100)/100;
		 	cout<<"Porcentagem de votos brancos: "<<percbr<<"%"<<endl;
		 	break;
		 case 5:
		 	i=6;
		 	break;
		 }
	 }

}