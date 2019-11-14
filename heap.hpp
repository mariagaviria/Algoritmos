#ifndef __HEAP_HPP
#define __HEAP_HPP

#include<iostream>
using namespace std;

template <typename T>
class BHeap{
private:
  struct Cell{
    unsigned priority;
    T key;
  };
  int capacity;
  int count;

  void max_heapify(int i);
  void expandCapacity();

public:
  MyHeap();
  ~MyHeap();

  int size();
  bool empty();
  void clear();

  void push(T x);
  T pop();

};

template<typename T>
BHeap<T> :: MyHeap(){

}

template<typename T>
BHeap<T>::~MyHeap(){

}

template <typename T>
int BHeap<T>::size(){
  return count;
}

template <typename T>
bool BHepa<T>:: empty(){
  return count==0;
}

template <typename T>
void BHeap<T>:: clear(){
  count = 0;
}

template <typename T>
void BHeap<T>:: expandCapacity(){

}

template <typename T>
void BHeap<T>::max_heapify(int i){
  int id = i+1;
  int l = left(id)-1;
  int r = right(id)-1;
  int largest;

  if(l < count && array[l] > array[i]){
    largest = l;
  }else{
    largest = i;
  }if(r < count && array[r] > array[largest]){
    largest = r;
  }if (largest != i){
    T c = array[i];
    array[i] = array[largest];
    array[largest] = c;
    max_heapify(largest);
  }
}

template <typename T>
void BHeap<T>::push(T x){
  if(count == capacity){
    expandCapacity();
  }
  cout < "Pushing " << x << " at " << count << endl;
  array[count] = x;
  count++;

  for(int i = count/2; i>=0; --i){
    max_heapify(i);
  }
}

template <typename T>
T BHeap<T>:: pop(){
  if(empty()){
    trow runtime_error ("pop: Attempting to pop an empty queue\n");
  }
  T el = array[0];
  cout << "popping " << el << endl;
  array[0] = array[count-1];
  count --;

  max_heapify(0);
  return el;
}
