#include "charstack.hpp"

int CharStack::size(){
  return elements.size();
}
void CharStack::clear(){
  elements.clear();
}
bool CharStack::empty(){
  return elements.empty();
}
char CharStack::top(){
  if(empty())
    throw runtime_error("Top: Attempting to get top from empty stack.\n");
  return elements[elements.size()-1];
}
void CharStack::push(char c){
  elements.push_back(c);
}
char CharStack::pop(){
  if(empty())
    throw runtime_error("Pop: Attempting to pop an empty stack.\n");
  char c = elements[elements.size()-1];
  elements.pop_back();
  return c;
}
