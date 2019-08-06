#include<iostream>
#include<vector>

using namespace std;

int main(){
/*	const int size = 10;
	int myarray[size];

	for (int i = 0; i < size; i++)
		myarray[i] = 10-i;

	int *it = nullptr;

	for (it = myarray; it != myarray+size; it++)
		cout << *it << " ";
	cout << '\n';
	
	cout << myarray << '\n';	
	cout << myarray + 1 << '\n';
*/
/*	const int size = 4;
	vector<int> v(size, 1);
	vector<int>::iterator it;

	cout << "Without iterators = ";
	for (int i = 0; i < size; i++)
		cout << v[i] << " ";

	cout << "\nWith iterators = ";
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << " ";

	cout << "\nRemoving element ...";
	v.pop_back();

	cout << "\nWithout iterators = ";
	for (int i = 0; i < size; i++)
		cout << v[i] << " ";
	
	cout << "\nWith iterators = ";
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << " "; 
	cout <<'\n';
*/
	vector<int> v = {1,2,3};
	vector<int>::iterator it;
	
	for(it = v.begin(); it != v.end(); it++){
		if(it == v.begin()+1){
			it = v.insert(it, 5);
		}
	}
	
	for(unsigned int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << '\n';
	return 0;
}
