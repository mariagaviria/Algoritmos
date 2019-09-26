#include "charstacknew.hpp"
const int INITIAL_CAPACITY=10;
CharStack::CharStack(){
  capacity=INITIAL_CAPACITY;
  elements=new char[capacity];
  count=0;
}
CharStack::~CharStack(){
  delete[] elements;
}

int CharStack::size(){
  return count;
}
void CharStack::clear(){
  count=0;
}
bool CharStack::empty(){
  if (count==0)
    return true;
  return false;
}
char CharStack::top(){
  if(empty())
    throw runtime_error("Top: Attempting to get top from empty stack.\n");
  return elements[count-1];
}
void CharStack::expandCapacity(){
  char *oldElements=elements;
  capacity*=2;

  elements = new char[capacity];
  for (int i = 0; i < count; ++i)
    elements[i]=oldElements[i];
  delete oldElements;
}
void CharStack::push(char c){
  if (count==capacity)
    expandCapacity();
  elements[count]=c;
  count++;
}
char CharStack::pop(){
  if(empty())
    throw runtime_error("Top: Attempting to get top from empty stack.\n");

  else{
    char c=elements[count];
    count--;
    return c;
  }
}
