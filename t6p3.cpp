#include<iostream>

using namespace std;

string inverso(string str){
  if (str.size()==1){
    return str;
  }else{
    return str.back() + inverso(str.substr(0,str.size()-1));
  }
}

int main(){
  cout << "Ingrese una palabra: ";
  string pal;
  cin >> pal;

  string tot=inverso(pal);
  cout << "La palabra " << pal <<" invertida es " << tot << endl;
  return 0;
}
