#include <iostream>
#include <list>
using namespace std;

int howMany(list<int> L, int k) {
  int cantidad = 0;
  
  while (!L.empty()){
  	if (L.front() == k){
  		cantidad += 1;
  
  	}
  	L.pop_front();
  
  }
  
  
  return cantidad;
}


int main() {
  int array[12] = {5,3,4,3,7,5,3,2,7,7,1,7};
  list<int> mylist(array,array+12);

  cout << "Ingrese el número a buscar: ";
  int n;
  cin >> n;

  cout << n << " está " << howMany(mylist, n)
       << " veces.\n";

  return 0;
}
