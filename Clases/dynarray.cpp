#include "dynarray.hpp"
#include<iostream>
using namespace std;
DynArray::DynArray(int s){
  size = s;
  array = new int[s];
  for(int i = 0; i < size; ++i)
    array[i] = 0;
  cout << "DynArray instance created\n";
}

DynArray::~DynArray (){
  delete[] array;
  cout << "DynArray instance destroyed\n";
}

void DynArray::set(int pos, int val){
  array[pos] = val; // no bounds checking!
}

int DynArray::get(int pos){
  return array[pos]; //no bounds checking!
}

int DynArray::getsize(){
  return size;
}

bool DynArray::operator== (DynArray &a){
  if(size == a.getsize()){
    for(int i = 0; i < size; ++i){
      if(array[i] != a.get(i))
        return false;
    }
  }else{
    return false;
  }
  return true;
}
