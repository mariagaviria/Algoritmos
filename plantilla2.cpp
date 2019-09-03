#include <iostream>
#include <iomanip>
#include <map>
using namespace std;


map<int,int> collatz(int n) {
  map<int,int> s;
  int valor=n;
  int i=1;

  while(valor!=1){
      if (valor>1){
        s[i]=valor;
        i=i+1;
        if(valor%2==0){
          valor=valor/2;
        }else{
          valor=(valor*3)+1;
        }
      }
  }
  if (valor==1){
    s[i]=1;
  }
  return s;
}


int main() {
  cout << "Ingrese un entero positivo: ";
  int n;
  cin >> n;

  map<int,int> collatz_seq = collatz(n);

  cout << "Keys:   ";
  for(unsigned int i = 1; i < collatz_seq.size()+1; i++)
    cout << setw(3) << i << " ";
  cout << "\nValues: ";
  for(unsigned int i = 1; i < collatz_seq.size()+1; i++)
    cout << setw(3) << collatz_seq[i] << " ";
  cout << endl;

  return 0;
}
