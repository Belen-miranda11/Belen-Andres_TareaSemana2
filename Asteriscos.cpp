#include <iostream>

using namespace std;

int asteriscos(int num) //se crea una función asteriscos que recibe num que es el tamaño
{
	int cont2; // se crea la variable cont2

	cont2 = 0; // se define con datos

	cout << endl; // se salta de linea
	while (cont2 < num) // mientras la variable cont2 sea menor al tamaño va a escribir asteriscos
	{
		cont2++; // se incrementa el contador
		cout << "*";
	}

	return 0;
}

int main()
{
	int num, cont1, cont2; //se crean las variables

	cout << "Bienvenido al ejercicio 2 " << endl;

	cout << "Ingrese el tamaño del cuadrado de asteriscos." << endl;
	cin >> num; // se obtiene el tamaño del cuadro de asteriscos

	cont1 = 0; // se define la variable cont1
	
	while (cont1 < num) //mientras cont1 sea menor a num se va a llamar a la función asteriscos
	{
		asteriscos(num);
		cont1++; //se incrementa el contador

	}

	return 0;
}

