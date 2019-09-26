#ifndef __charstack_hpp_
#define __charstack_hpp_

#include<iostream>
#include <vector>
#include <stdexcept>
using namespace std;

class CharStack{
private:
  vector<char> elements;

public:
  CharStack() {}
  ~CharStack() {}

  int size();
  void clear();
  bool empty();
  char top();
  void push(char c);
  char pop();
};
#endif // __charstack_hpp_
