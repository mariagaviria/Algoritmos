#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void print(vector<int> &s){
	for (unsigned int i=0; i<s.size(); i++){
		cout << ' ' << s[i]; 
	}
	cout << '\n'; 
}

vector<int> menor(vector<int> &w){
	for (unsigned int i=w.size(); i>1; i--){
		if (w[i] >=100){
			w.pop_back();
		}
	}
	return w;
}

int main(){
	vector<int> vec;
	for (unsigned int i=0; i<11; i++){
		vec.push_back(pow(3, i));
	}
	print(vec);
	vector<int> x=menor(vec);
	print(x);
	return 0;
}
