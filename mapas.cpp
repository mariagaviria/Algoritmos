#include <iostream>
#include <map>

using namespace std;

int main(){
/*	map<char,int> first;
	
	first['a'] = 10;
	first['b'] = 30; 
	first['c'] = 50;
	first['d'] = 70;
	
	cout << "The value of element with key 'b' is " << first['b'] << "\n";
*/

	map<char,int> mymap;
//	map<char,int>::iterator it;
	
	mymap['a'] = 10;	
	mymap['b'] = 20;	
	mymap['c'] = 30;	
	mymap['d'] = 40;
	
/*	if (mymap.count('c'))
		cout << "Element with key 'c' exists.\n";
	it = mymap.find('c');
	cout << "Element " << it->first << " is " << it->second << "\n";
*/

	for(char c = 'a'; c < 'e'; c++)
		cout << mymap[c] << "\n";
	
	return 0;
}
