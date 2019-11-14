#ifndef __heap_hpp_
#define __heap_hpp_

#include<iostream>
using namespace std;

const int INITIAL_CAPACITY = 10;

template <typename T>
class BHeap{
private:
  struct Cell{
    unsigned priority;
    T key;
  };

  Cell *array;
  int capacity;
  int count;

  int left();
  int right();

  void max_heapify(int i);
  void expandCapacity();

  int left();
  int right();

public:
  MyHeap();
  ~MyHeap();

  int size();
  bool empty();
  void clear();

  void push(T x);
  T pop();

  void display();

};

#include "heap.cpp"
#endif //_thash_hpp_
