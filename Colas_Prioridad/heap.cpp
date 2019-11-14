template<typename T>
BHeap<T> :: MyHeap(){
  count = 0;
  capacity = INITIAL_CAPACITY
  array = new Cell[capacity]
}

template<typename T>
BHeap<T>::~MyHeap(){

}

template <typename T>
int BHeap<T>::size(){
  return count;
}

template <typename T>
bool BHepa<T>:: empty(){
  return count==0;
}

template <typename T>
void BHeap<T>:: clear(){
  delete array[];

  count = 0;
}

template <typename T>
void BHeap<T>:: expandCapacity(){
  Cell *oldarray = array;
  int oc = capacity;
  capacity *=2;

  array = new Cell[capacity];
  for (int i = 0; i < oc ; i++){
    array[i]=oldarray[i];
  }
  delete oldarray;
}

template <typename T>
void BHeap<T>::max_heapify(int i){
  int id = i+1;
  int l = left(id)-1;
  int r = right(id)-1;
  int largest;

  if(l < count && array[l].priority > array[i].priority){
    largest = l;
  }else{
    largest = i;
  }if(r < count && array[r].priority > array[largest].priority){
    largest = r;
  }if (largest != i){
    T c = array[i].priority;
    array[i] = array[largest];
    array[largest].priority = c;
    array[largest].key = x
    max_heapify(largest);
  }
}

template<typename T>
int BHeap<T>::left(){

}

template <typename T>
void BHeap<T>::push(T x, unsigned y){
  if(count == capacity){
    expandCapacity();
  }
  cout < "Pushing " << x << " at " << count << endl;
  array[count].key = x;
  array[count].priority = y;
  count++;

  for(int i = count/2; i>=0; --i){
    max_heapify(i);
  }
}

template <typename T>
T BHeap<T>:: pop(){
  if(empty()){
    trow runtime_error ("pop: Attempting to pop an empty queue\n");
  }
  T el = array[0];
  cout << "popping " << el << endl;
  array[0] = array[count-1];
  count --;

  max_heapify(0);
  return el;
}
