#include <iostream>
#include <vector>

using namespace std; 

int main (){
/*	vector<int> first;
	vector<int> second(4, 100);
	vector<int> third(second);

	int myints[] = {16, 2, 77, 29};
	vector<int> fourth(myints, myints + sizeof(myints) / sizeof(int));
	cout << "The contents of fourth are:";
	for (unsigned int i=0; i < fourth.size(); ++i)
		cout << ' ' << fourth[i];
	cout << '\n'; 
*/

	vector<int> myvector;
	int sum(0);

	myvector.push_back(100);
	myvector.push_back(200);
	myvector.push_back(300);

	while (!myvector.empty()) {
		sum += myvector.back();
		myvector.pop_back();
	}
	cout <<"The elements of myvector add up to is " << sum << '\n';
	return 0;
}
