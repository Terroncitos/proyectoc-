#include<iostream>
using namespace std;
int main()

{
	char letra;
	
	cout<<"\t\t\t\t\tMENU\n";
	cout<<"\t\tP=Primavera\n";
	cout<<"\t\tV=Verano\n";
	cout<<"\t\tO=Otono\n";
	cout<<"\t\tI=Invierno\n";
	
	cout<<"\t\t\tIngrese su opcion: ";
	cin>>letra;
	
	switch (letra){
		case 'P':{
			cout<<"\t\tLos meses que conforma la primavera son:\n"<<endl;
			cout<<"\t\t\tMarzo\n";
			cout<<"\t\t\tAbril\n";
			cout<<"\t\t\tMayo\n";
			cout<<"\t\t\tJunio\n";
			break;
		}
		case 'V' :{
			cout<<"\t\tLos meses que conforma el verano son:\n"<<endl;
			cout<<"\t\t\tJunio\n";
			cout<<"\t\t\tJulio\n";
			cout<<"\t\t\tAgosto\n";
			cout<<"\t\t\tSeptiembre\n";
			break;
		}
		case 'O' :{
			cout<<"\t\tLos meses que conforma el otono son:\n"<<endl;
			cout<<"\t\t\tSeptiembre\n";
			cout<<"\t\t\tOctubre\n";
			cout<<"\t\t\tNoviembre\n";
			cout<<"\t\t\tDiciembre\n";
			break;
		}
		case 'I':{
			cout<<"\t\tLos meses que conforma el invierno son:\n"<<endl;
			cout<<"\t\t\tDiciembre\n";
			cout<<"\t\t\tEnero\n";
			cout<<"\t\t\tFebrero\n";
			cout<<"\t\t\tMarzo\n";
			break;
		}
		default :{
			cout<<"Seleccion no valida";
			break;
		}
	}
	return 0;
}