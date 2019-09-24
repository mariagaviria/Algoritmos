#include<iostream>
using namespace std;
#include"dynarray.hpp"

int main(){
  int N = 10;
  DynArray myArray(N);
  DynArray array2(N);

  for (int i = 0; i < N; ++i){
    myArray.set(i, 10*i);
    array2.set(i, 20*i);
  }

  for (int i = 0; i < N; ++i)
    cout << myArray.get(i) << " ";

  cout << "\n";
  bool s=myArray == array2;
  cout << s << endl;

  return 0;
}
