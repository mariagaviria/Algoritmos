#include<iostream>
using namespace std;
#include "mylist.hpp"

int main(){
  MyList<char> cell1;
  cout << cell1.empty() << endl;
  cell1.push_back('s');
  cell1.pop_back();
  return 0;
}
