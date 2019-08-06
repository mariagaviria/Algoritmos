#include <iostream>
#include <queue>

using namespace std;

int main(){
/*	queue<int> first;

	cout << "Size of first: " << first.size() << '\n';
*/
	queue<int> myqueue;
/*	int myint;
	
	cout << "Enter some integers (0 to end): \n";
	do{
		cin >> myint;
		myqueue.push(myint);
	}while (myint);

	cout << "myqueue contains: ";
	while (!myqueue.empty()) {
		cout << ' ' << myqueue.front();
		myqueue.pop();
	}
	cout << '\n';
*/
/*	myqueue.push(77);
	myqueue.push(16);

	myqueue.front() -= myqueue.back();

	cout << "myqueue.front() is now " << myqueue.front() << '\n';
*/
	myqueue.push(12);
	myqueue.push(75);
	
	myqueue.back() -= myqueue.front();

	cout << "myqueue.back() is now " << myqueue.back() << '\n';
	return 0;
}
