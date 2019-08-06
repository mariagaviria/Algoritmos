#include <iostream>
#include <list>

using namespace std;

int main (){
/*	int myints[] = {16, 2, 77, 29};
	list<int> fourth(myints, myints + sizeof(myints) / sizeof(int));
*/

/*	list<int> mylist;
	mylist.push_back(77);
	mylist.push_back(22);
	
	cout << mylist.front() << '\n';
	cout << mylist.back() << '\n';

	mylist.front() -= mylist.back();
	cout << "My list.front() is now " << mylist.front() << '\n';
*/
	list<int> mylist;
	int sum(0);

	for (int i=1; i <= 10; i++)
		mylist.push_back(i);

	while (!mylist.empty()) {
		sum += mylist.front();
		mylist.pop_front();
	}
	cout << "total: " << sum << '\n';

	return 0;
}
