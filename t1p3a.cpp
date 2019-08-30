#include<iostream>
#include<vector>

using namespace std; 

void printf(vector<char> &s){
	for (unsigned int i=0; i<s.size(); i++){
		cout << s[i]<< ' '; 
	}
	cout << '\n'; 
	
}

void printb(vector<char> &w){
	for (unsigned int i=w.size(); i+1>0; i--){
		cout << w[i] << ' ';
	}
	cout << '\n';
}

int main(){
	vector<char> abc;
	for (char i='a'; i<='z'; i++){
		abc.push_back(i);
	}
	printf(abc);
	printb(abc);
	return 0;
}

