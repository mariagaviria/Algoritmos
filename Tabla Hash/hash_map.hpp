#ifndef __hash_map_hpp_
#define __hash_map_hpp_

#include <iostream>
#include <stdexcept>
#include <cstdint>
#include <limits>
using namespace std;

const int TABLE_SIZE = 10; //prime number

template<typename VT>
class HashMap{
private:
  struct KeyValueNode{
    string key;
    VT value;
    KeyValueNode *next;
  };

  //pointer to pointers to buckets
  KeyValueNode **table;

  int tableSize; //size of the pointer table
  int count;    //number of the elements in table

  //default value to return when search fails
  VT notfound;

  //search for the "key" inside the bucket at index
  //"index" of the table
  //return the elements if found, or nullptr otherwise
  KeyValueNode* search_bucket(int index, string key);

  //hash function
  unsigned int hash(string key){
    unsigned int hashVal = 0;
    for (char ch : key){
      hashVal += ch;
    }
    return hashVal % tableSize;
  }

public:
  HashMap(VT def);
  ~HashMap();

  int size();
  bool empty();
  void clear();

  //chained hash search: search for element with key = key
  VT get(string key);
  //return true if the key is in table
  bool search(string key);
  //chained hash insert: insert at the head of bucket
  bool insert(string key, VT value);
  // chained hash remove: remove element with key = key
  void remove(string key);

  //prit number of elements in each bucket to a file filename
  void distribution(const string &filename);

};

#include "hash_map.cpp"
#endif //_hash_map_hpp_
