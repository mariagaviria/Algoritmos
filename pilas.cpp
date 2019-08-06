#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
/*	stack<int> mystack;

	for (int i=0; i<5; i++) mystack.push(i);
	cout << "Popping elements...";

	while (!mystack.empty()) {
		cout << ' ' << mystack.top();
		mystack.pop();
	}
	cout << '\n';
*/

	stack<int> mystack;
	
	mystack.push(10);
	mystack.push(20);

	mystack.top() -=5;

	cout << "mystack.top() is now " << mystack.top() << '\n';

	return 0;
}



