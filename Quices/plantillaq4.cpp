#include<iostream>
using namespace std;

int sumatoria(int n) {
  if (n==0){
    return 0;
  }else{
    return n + sumatoria(n-1);
  }
}

int main() {
  cout << "Ingrese un entero: ";
  int n;
  cin >> n;

  int sum = sumatoria(n);

  cout << "La sumatoria de 1 a " << n << " es "
       << sum << endl;

  return 0;
}
