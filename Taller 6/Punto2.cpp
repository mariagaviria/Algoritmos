#include<iostream>

using namespace std;

int kpot(int n, int k){
  if (k==0){
    return 1;
  }else{
    return n*kpot(n, k-1);
  }
}

int main() {
  cout << "Ingrese un numero: ";
  int base;
  cin >> base;

  cout << "Que potencia de " << base << " quiere?: ";
  int pot;
  cin >> pot;

  int x=kpot(base, pot);

  cout << base << " a la " << pot << " es: "<< x << endl;

  return 0;
}
