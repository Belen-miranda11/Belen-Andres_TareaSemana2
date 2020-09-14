#include <iostream>

using namespace std;

int main(){
	int num1, num2, num3; //define las variables

	cout << "Bienvenido al ejercicio 1" << endl;

	cout << "Ingrese la medida del lado1 del triangulo" << endl;
	cin >> num1; //obtiene el numero del lado1 agregado por el usuario

	cout << "Ingrese la medida del lado2 del triangulo" << endl;
	cin >> num2;

	cout << "Ingrese la medida del lado3 del triangulo" << endl;
	cin >> num3;

	if (num1 == num2) //Compara si son el lado1 y el lado2 son iguales
	{
		if (num1 == num3) //Compara si son el lado1 y el lado3 son iguales
		{
			cout << "El triangulo es equilatero" << endl;
		}
		else {
			cout << "El triangulo es isosceles" << endl;
		}
	}
	else if (num3 == num2) //Compara si son el lado3 y el lado2 son iguales
	{
		cout << "El triangulo es isosceles" << endl;
	}

	else if (num3 == num1) //Compara si son el lado3 y el lado1 son iguales
	{
		cout << "El triangulo es isosceles" << endl;
	}
	
	else {
		cout << "El triangulo es escaleno" << endl;
	}
	return 0;
}

