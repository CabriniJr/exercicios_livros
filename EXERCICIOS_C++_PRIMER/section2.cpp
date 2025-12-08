#include <iostream>

using namespace std;

//Exercícios sessão 2.3.2
int main()
{
	cout << "Definindo int var" << endl;
	int var = 0, *p_var = &var, &ref_var = var;
	cout << " Valor de var = " << *p_var << endl;
	char b;
	cout << "Deseja trocar? (s/n)" << endl;
	cin >> b;
	if(b == 's')
	{
		cout << "Novo Valor: ";
		cin >> *p_var;
	}
	else
	{
		cout << "Vai tomar no seu cu então seu merda!!" << endl;
	}

	cout << "Valor de var = " << ref_var << endl; 
}


