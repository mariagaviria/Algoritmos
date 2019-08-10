#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<char> abc;
	
	for (char i = 'a'; i <= 'z'; ++i)
		abc.push_back(i);
	
	for(unsigned int i=0; i<abc.size();i++)
		cout<< ' '<<abc[i];
	cout <<'\n';
	
	for(unsigned int i=abc.size();0<i+1; i--)
		cout<<abc[i]<<' ';
	cout <<'\n';
	
	return 0;
	


}

