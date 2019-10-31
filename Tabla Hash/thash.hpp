#ifndef __thash_hpp_
#define __thash_hpp_

#include <iostream>
#include <stdexcept>
using namespace std;

const int INITIAL_CAPACITY = 10;

template <typename KT, typename VT>
class MyMap {
private:
  struct KeyValuePair{
    KT key;
    VT value;
  };

  KeyValuePair *array;
  int capacity;
  int count;

  void expandCapacity();
  int findKey(KT key);

public:
  MyMap();
  ~MyMap();

  int size();
  bool empty();
  void clear();
  void insert(KT key, VT value);
  VT get(KT key);
  bool containsKey(KT key);
  void remove(KT key);
  void display();
};

#include "thash.cpp"
#endif //_thash_hpp_
