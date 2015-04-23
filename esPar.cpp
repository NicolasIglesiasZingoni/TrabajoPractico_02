#include <iostream>

using namespace std;

int main() 
{
	int a, b;
	cout << "Ingrese un numero: ";
	cin >> a;
	b = a%2;
	
	if(b!=0)
	{
		cout << "El numero es impar" << endl;
	}
	else
	{
		cout << "El numero par" << endl;
	}


	return 0;
}