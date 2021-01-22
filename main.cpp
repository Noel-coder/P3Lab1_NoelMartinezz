#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int opcion=1;
	while(opcion != 3){
		cout << "Menu" << endl
		<< "1. Sumatoria" << endl
		<< "2. Funcion Sigmoide" << endl
		<< "Salir"<< endl;
		cout << "Ingrese una opcion: " << endl;
		cin>>opcion;
		switch(opcion){
			case 1:{
				//sumatoria
				
				break;
			}
			case 2:{
				//funcion Sigmoide
				
				break;
			}
		}
	}
	return 0;
}
