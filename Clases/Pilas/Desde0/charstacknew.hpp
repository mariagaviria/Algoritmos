#ifndef __charstacknew_hpp_
#define __charstacknew_hpp_

#include<iostream>
#include <stdexcept>
using namespace std;

class CharStack {
private:
  char *elements; //array
  int capacity; //Allocated size
  int count; //Current No. of elements

public:
  CharStack();
  ~CharStack();

  int size();
  void clear();
  bool empty();
  char top();
  void expandCapacity();
  void push(char c);
  char pop();
};
#endif // __charstack_hpp_
