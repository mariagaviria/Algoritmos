#include "arbol.hpp"
#include <iostream>
using namespace std;

int main(){
  BST<string> tree;
  tree.insertNode("Grumpey");
  tree.insertNode("Dopey");
  tree.insertNode("Doc");
  tree.insertNode("Bashful");
  tree.insertNode("Happy");
  tree.insertNode("Sleepy");
  tree.insertNode("Sneezy");
  tree.display();
  cout << endl;
  return 0;
}
