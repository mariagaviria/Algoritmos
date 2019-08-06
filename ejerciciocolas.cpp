#include <iostream>
#include <queue>

using namespace std;

int main(){
	queue<string> clientes;
	string nombre;

	cout << "Ingrese los nombres de los clientes: \n";
	while (nombre!="end"){
		cin >> nombre;
		clientes.push(nombre);

	}

	while (!clientes.empty()) {
		cout << "Atendiendo a " << clientes.front() << '\n';
		clientes.pop();
	}

	return 0;
}
