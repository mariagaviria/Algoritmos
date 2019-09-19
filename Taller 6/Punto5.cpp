#include<iostream>

using namespace std;

int combinatoria(int n, int k){
  if (k==0 or n==k){
    return 1;
  }else{
    return combinatoria(n-1,k-1)+combinatoria(n-1,k);
  }
}

int main(){
  cout << "Ingrese un numero: ";
  int uno;
  cin >> uno;

  cout << "Ingrese otro numero: ";
  int dos;
  cin >> dos;
  int x=combinatoria(uno, dos);
  cout << uno << " combinado " << dos << " es " << x << endl;
  return 0;
}
