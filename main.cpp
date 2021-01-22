#include <iostream>
#include <iomanip>
#include <math.h>
using std::cout;
using std::cin;
using std::endl;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int opcion=1;
	while(opcion != 3) {
		cout << "Menu" << endl
		     << "1. Sumatoria" << endl
		     << "2. Funcion Sigmoide" << endl
		     << "3. Salir"<< endl;
		cout << "Ingrese una opcion: " << endl;
		cin>>opcion;
		switch(opcion) {
			case 1: {
				//sumatoria
				cout << "Ingrese n: ";
				int numero=0;
				cin >> numero;
				while(numero < 0) {
					cout << "¡ Porfavor ingrese un numero positivo !";
					cin>> numero;
				}
				int acumulador = 0;
				for(int i = 0; i <= numero; i++) {
					acumulador+= i*pow(i+1,2);
				}
				cout << "La respuesta es: " << acumulador << endl;
				break;
			}
			case 2: {
				//funcion Sigmoide
				double resultado;
				cout << "Ingrese x: ";
				int numero;
				cin>> numero;

				resultado += 1/(1+exp(numero));
				cout << "adad" << resultado << endl;

				cout << std::fixed;
				cout << std::setprecision(6);
				cout << "El resultado es: " << resultado << endl;

				break;
			}
			case 3: {
				cout << "Gracias por usar el programa :)" << endl;
				break;
			}
		}
	}
	return 0;
}
