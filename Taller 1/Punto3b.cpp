#include<iostream>
#include<vector>

using namespace std;
/*void swap(int i, int j, vector<int>& v){
  int temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}*/

void print(vector<string> &s){
	for (unsigned int i=0; i<s.size(); i++){
		cout << s[i] << ' '; 
	}
	cout << '\n'; 	
}

void ordenar(vector<string> &w, int n){
	int i, j;
	for(i = 0; i < n-1; i++){
		for(j = 0; j < n-i-1; j++){
			if(w[j] > w[j+1]){
				swap(w[j], w[j+1]);
			}
		}
	}
}

int main(){
	vector<string>lista;
	string fruta;
	cout << "¿Que elemento desea agregar a la lista?: ";
	while (fruta!="end"){
		cin >> fruta;
		if (fruta!="end"){
			lista.push_back(fruta);
		}
	}
	print(lista);
	ordenar(lista, lista.size());
	print(lista);

	return 0;
}
