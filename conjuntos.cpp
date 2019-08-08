#include <iostream>
#include <set>

using namespace std;

int main() {
//	set <int> myset;
/*	set <int>::iterator it;
	
	for (unsigned int i = 1; i <= 5; i++) myset.insert(i * 10);
	
	cout << "myset contains: ";
	for (it = myset.begin(); it != myset.end(); it++)
		cout << ' ' << *it;
	cout << '\n';
*/

/*	for (unsigned int i = 0; i < 10; i++)
		myset.insert(i*3);
		
	for (unsigned int i = 0; i < 10; i++){
		cout << i;
		if (myset.count(i) != 0)
			cout << " is an element of myset. \n";
		else
			cout << " is not an element of myset. \n";
		
	}
*/
	set <char> signos = {'.', ',', ':', ';', '?', '!'};
	string mystr;
	
	cout << "Ingrese una frase: ";
	getline (cin, mystr);
	
	for (unsigned int i = 0; i <= mystr.size(); i++){
		if (signos.count(mystr.at(i)) != 0){
			cout << mystr.at(i);
			cout << " es un signo de puntuacion que se encuentra en tu frase.\n"; 
		}
	
	
	}
	return 0;
}
