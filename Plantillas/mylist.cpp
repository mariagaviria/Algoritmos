#ifndef __mylist_hpp_
#define __mylist_hpp_

#include<iostream>
using namespace std;

template<typename T>
class MyList {
private:
  struct Cell{
    T ch;
    Cell *next;
  };

  Cell *back;

public:
  MyList() : back(nullptr){}
  ~MyList();

  bool empty();
  void push_back(T c);
  void pop_back();
  void clear();
};

template <typename T>
MyList<T> :: ~MyList(){
  clear();
}
template <typename T>
bool MyList<T> :: empty(){
  return back==nullptr;
}

template <typename T>
void MyList<T> :: push_back(T c){
  Cell *newCell = new Cell;
  newCell->ch = c;
  if (empty()){
    newCell->next = nullptr;
  }else{
    newCell->next = back;
  }
  back = newCell;
  cout << "pushing " << back->ch << endl;
}

template <typename T>
void MyList<T>::pop_back(){
  Cell *cursor;
  if(!empty()){
    cursor = back->next;
    cout << "popping " << back->ch << endl;
    delete back;
    back = cursor;
  }
}

template <typename T>
void MyList<T> :: clear(){
  while(!empty()){
    pop_back();
  }
}
#endif
