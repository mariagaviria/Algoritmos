template <typename VT>
HashMap<VT>::HashMap(VT def){
  def = notfound;
  tableSize = TABLE_SIZE;
  table = new KeyValueNode*[tableSize];
  count = 0;
  for ( int i = 0; i < tableSize; i++){
    table[i]=nullptr;
  }
}

template <typename VT>
HashMap>VT>::~HashMap(){
  tableSize = TABLE_SIZE;
  for (int i = 0; i < tableSize; i++){
    KeyValueNode *recent = table[i];
    while(recent != nullptr){
      remove(recent->key);
  }
  delete[] table;
  cout << "Instance deleted." << endl;
}

template <typename VT>
KeyValueNode<VT>* HashMap<VT>::search_bucket(int index, string key){
  KeyValueNode *recent = table[index];
  while (recent != nullptr){
    if (recent->key == key){
      return recent;
    }
    recent = recent->next;
  }
  return recent;
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
  int index = hash(key);
  KeyValueNode *search = search_bucket(index, key)
  if (search == nullptr){
    return notfound;
  }else{
    return search->value;
  }
}

template <typename VT>
bool HashMap<VT>::search(string key){
  KeyValueNode* find = search_bucket(hash(key), key);
  return find != nullptr;
}

template <typename VT>
bool HashMap<VT>::insert(string key, VT value){
  bool find = search(key);
  if (find == false){
    int index = hash(key)
    KeyValueNode* indexpointer = table[index];
    if(indexpointer == nullptr){
      KeyValueNode* newbox = new KeyValueNode;
      indexpointer = newbox;
      newbox->key = key;
      newbox->value = value;
      newbox->next = nullptr;
    }else{
      KeyValueNode* oldbox = indexpointer;
      KeyValueNode* newbox = new KeyValueNode;
      indexpointer = newbox;
      newbox->key = key;
      newbox->value = value;
      newbox->next = oldbox;
    }
    count++;
    return true;
  }else{
    KeyValueNode* search = search_bucket(hash(key), key);
    search->value = value;
    return false;
  }
}

void HashMap<VT>::remove(string key){
  int pos;
  pos = hash(key);
  KeyValueNode<VT> *nw;
  nw =search_bucket(pos, key);

  //KeyValueNode<VT> *copy;
  //copy = nw;
  if (search(key)==false){
    throw runtime_error("remove: the key is not in table.\n");
  }else{
    if(search(key) == true){
      KeyValueNode<VT> *copy;
      if(nw->key== key){
        copy = nw;
        copy->key = nw->key;
        cout<<"Valor de nw antes de borrar : "<< nw->key<<endl;
        copy-> next = nw ->next;
        delete nw;
        count--;
      }
    }
  }
}

template <typename VT>
void HashMap<VT>::distribution(const string &filename){

}
