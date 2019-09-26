#include<iostream>
using namespace std;
#include "charstacknew.hpp"

int main(){
  CharStack myStack;

  for (int i = 65; i < 78; ++i)
    myStack.push(char(i));
  cout << myStack.top() << endl;

  int mx = myStack.size();
  for (int i = 0; i < mx; ++i)
    cout << myStack.pop() << " ";
  cout << endl;

  if (myStack.empty())
    cout << "Stack is empty\n";

  return 0;
}
