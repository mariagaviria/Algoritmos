#ifndef __arbol_hpp_
#define __arbol_hpp_
#include<iostream>
using namespace std;

template <typename T>
class BST {
private:
  struct BSTNode{
    T key;
    BSTNode *left;
    BSTNode *right;
    BSTNode *parent;
  };
  BSTNode *root;
  void insertNode(BSTNode *&t, BSTNode *p, T k);
  void destroyRecursive(BSTNode *t);
  void displayNode(BSTNode *t, int count);
  BSTNode* findNode(BSTNode *t, T k);
  BSTNode* minimum(BSTNode *t);
  BSTNode* maximum(BSTNode *t);
  BSTNode* predecesor(BSTNode *t);
  BSTNode* sucesor(BSTNode *t);


public:
  BST() {root = nullptr;}
  ~BST();
  void insertNode(T k);
  void clearTree();
  void display();
  void find(T k);
  T maximo();
  T minimo();


};
template <typename T>
BST<T>::~BST(){
  cout << "The tree has been destroyed" << endl;
  clearTree();
}

template < typename T>
void BST<T> :: insertNode(BSTNode *&t, BSTNode *p, T k){ //Estoy usando flechas porque t es un apuntador
  if (t == nullptr){
    t = new BSTNode;
    t -> key=k;
    t -> left = t -> right = nullptr;
    t -> parent = nullptr;
  }else{
    if (k != t -> key){
      if (k < t -> key){
        insertNode(t-> left, t , k);

      }else{
        insertNode (t-> right, t , k);

      }
    }
  }
}
template <typename T>
void BST<T> :: insertNode(T k){
  cout << "I'm inserting " << k << endl;
  insertNode(root,nullptr, k);
}

template <typename T>
void BST<T> :: destroyRecursive(BSTNode *t){
  if (t != nullptr){
    destroyRecursive(t-> left);
    destroyRecursive(t-> right);
    delete t;
  }
}

template <typename T>
void BST<T> :: clearTree(){
  destroyRecursive(root);
}

template <typename T>
void BST<T> :: displayNode(BSTNode *t, int count){
  if (t!=nullptr){
    count++;
    displayNode(t-> left, count);
    cout << "(" << count-1 << ")" << t-> key << " ";
    displayNode(t-> right, count);
  }
}

template <typename T>
void BST<T> :: display(){
  displayNode(root, 0);
}

template <typename T>
typename BST<T>::BSTNode * BST<T>::findNode(BSTNode *t, T k){
  if (t==nullptr) return nullptr;
  if (k==t->key) return t;
  if (k < t->key){
    return findNode(t->left, k);
  }else{
    return findNode(t->right, k);
  }
}

template<typename T>
void BST<T>::find(T k){
  cout << k << " is in " << findNode(root, k);
}

template<typename T>
typename BST<T>::BSTNode * BST<T>::minimum(BSTNode *t){
  while( t->left != nullptr)
    t = t->left;
  return t;
}

template<typename T>
T BST<T>::minimo(){
  return (minimum(root)->key);
}

template<typename T>
typename BST<T>::BSTNode * BST<T>::maximum(BSTNode *t){
  while( t->right != nullptr)
    t = t->right;
  return t;
}

template<typename T>
T BST<T>::maximo(){
  return (maximum(root)->key);
}

template<typename T>
typename BST<T>::BSTNode * BST<T>::precesor(BSTNode *t){
  if (t->parent==nullptr){
    maximum(t->left);
  }else if(t->left==nullptr){
    
  }

}

template<typename T>
typename BST<T>::BSTNode * BST<T>::sucesor(BSTNode *t){
  if (t->parent==nullptr){
    minimum(t->right);
  }

}

#endif
