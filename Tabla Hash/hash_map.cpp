template <typename VT>
HashMap<VT>::HashMap(VT def){
  def = notfound;
  tableSize = TABLE_SIZE;
  table = new KeyValueNode[tableSize];
  count = 0;
}

template <typename VT>
HashMap>VT>::~HashMap(){
  clear();
  delete[] table;
  cout << "Instance deleted." << endl;
}

template <typename VT>
KeyValueNode<VT>* HashMap<VT>::search_bucket(int index, string key){

}

template <typename VT>
int HashMap<VT>::size(){
  return count;
}

template <typename VT>
bool HashMap<VT>::empty(){
  return count == 0;
}

template <typename VT>
void HashMap<VT>::clear(){
  count = 0;
}

template <typename VT>
VT HashMap<VT>::get(string key){

}

template <typename VT>
bool HashMap<VT>::search(string key){

}

template <typename VT>
bool HashMap<VT>::insert(string key, VT value){

}

template <typename VT>
void HashMap<VT>::remove(string key){

}

template <typename VT>
void HashMap<VT>::distribution(const string &filename){

}
