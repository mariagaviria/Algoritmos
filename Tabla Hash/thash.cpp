template<typename KT, typename VT>
MyMap<KT,VT>::MyMap(){
  capacity=INITIAL_CAPACITY;
  array=new KeyValuePair[capacity];
  count=0;
}

template<typename KT, typename VT>
MyMap<KT,VT>::~MyMap(){
  delete[] array;
  cout << "Instance deleted." << endl;
}

template <typename KT, typename VT>
int MyMap<KT,VT>::findKey(KT key){
  for (int i=0; i < count; i++){
    if (array[i].key == key){
      return i;
    }
  }
  return -1;
}

template<typename KT, typename VT>
void MyMap<KT,VT>::expandCapacity(){
  KeyValuePair *oldarray = array;
  int oc = capacity;
  capacity *= 2,

  array = new KeyValuePair[capacity];
  for (int i = 0; i < oc; i++){
    array[i]=oldarray[i];
  }
  delete oldarray;
}

template<typename KT, typename VT>
int MyMap<KT,VT>::size(){
  return count;
}

template<typename KT, typename VT>
bool MyMap<KT,VT>::empty(){
  return count==0;
}

template<typename KT, typename VT>
void MyMap<KT,VT>::clear(){
  count=0;
}

template<typename KT, typename VT>
void MyMap<KT,VT>::insert(KT key, VT value){
  int index = findKey(key);
  if (index == -1){
    if (count == capacity){
      expandCapacity();
    }
    index = count++;
    array[index].key = key;
  }
  array[index].value = value;
}

template<typename KT, typename VT>
VT MyMap<KT,VT>::get(KT key){
  int index = findKey(key);
  if (index == -1){
    throw runtime_error ("Remove: Attempting to remove value of non-existent key.\n");
  }else{
    return array[index].value;
  }
}

template<typename KT, typename VT>
bool MyMap<KT,VT>::containsKey(KT key){
  for (int i=0; i < count; i++){
    if (array[i].key == key){
      return true;
    }
  }
  return false;
}

template<typename KT, typename VT>
void MyMap<KT,VT>::remove(KT key){
  int index = findKey(key);
  if(index == -1){
    throw runtime_error ("Remove: Attempting to remove value of non-existent key.\n");
  }for (int i = index; i < count-1; i++){
    array[i].key = array[i+1].key;
    array[i].value = array[i+1].value;
  }
  count--;
}

template<typename KT, typename VT>
void MyMap<KT,VT>::display(){
  
}
