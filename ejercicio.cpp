#include <iostream>
#include <stack>

using namespace std;

bool is_parenthesis(char c);
bool is_pair(char c1, char c2);

int main() {
	string code = "if((a[3]=={2,4,1}) and has_element (b))";
	stack<char> p; //Pila vacia

	for (int i = 0; i < code.lenght(); i++) { //Se va a recorrer la cadena caracter por caracter
		char c = code.at(i); // Asigna el caracter i de la cadena en la variable c
		if (is_parenthesis(c)) { //Si es un parentesis
			if (!p.empty() && is_pair(p.top(),c)){ //Si p no esta vacia y cumple la funcion de is_pair
				p.pop();//Se elimina el elemento
			}
			else{
				if (c == '(' || c == '{'){ // Si c es igual al caracter '(' o '{' se agrega a la pila p
					p.push(c);
				}
				else{
					cout << "Closing unopened parenthesis\n";
					return -1;
				}
			}
		}
	}
	if (!p.empty()){
		cout << "Ok" << endl;
	return 0;
		
}
