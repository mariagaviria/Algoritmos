#include "simple_vector.hpp"

/*
 * CLASS BidirIterator METHODS ---------------------------------------------
 */
BidirIterator :: BidirIterator(double *beg){
  ptr = beg;
}

//---------------------DAVID----------------------
//igual al mio
//------------------------------------------------

BidirIterator :: BidirIterator(const BidirIterator &it){
  ptr = it.ptr;
  //this->ptr=it.ptr;
}

//double BidirIterator:: &operator*(){
//}
//http://www.it.uc3m.es/pbasanta/asng/course_notes/pointers_to_pointers_es.html

//---------------------DAVID----------------------
//double & operator++(){
//  return *ptr;
//}
//------------------------------------------------

//Sobrecargar operadores -> https://docs.microsoft.com/es-es/cpp/cpp/increment-and-decrement-operator-overloading-cpp?view=vs-2019

// BidirIterator BidirIterator:: &operator++(){
//   ptr
// }

//---------------------DAVID----------------------
//BidirIterator & operator++(){
//  ptr++;
//  return *this;
//}
//------------------------------------------------

//BidirIterator BidirIterator:: operator++(int){
//}

//---------------------DAVID----------------------
//BidirIterator operator++(int x){
//  BidirIterator oldCopy=*this;
//  ptr++;
//  return oldCopy;
//}
//------------------------------------------------

//BidirIterator BidirIterator:: &operator--(){
//}

//---------------------DAVID----------------------
//BidirIterator & operator--(){
//  ptr--;
//  return *this;
//}
//------------------------------------------------

//BidirIterator BidirIterator:: operator--(int){
//}

//---------------------DAVID----------------------
//BidirIterator operator--(int x){
//  BidirIterator oldCopy=*this;
//  ptr--;
//  return oldCopy;
//}
//------------------------------------------------

void BidirIterator::operator =(const BidirIterator it){
  ptr = it.ptr;
}

bool BidirIterator::operator ==(const BidirIterator it){
  return (ptr==it.ptr);
}

bool BidirIterator::operator !=(const BidirIterator it){
  return (ptr!=it.ptr);
}


/*
 * CLASS SimpleVec METHODS -------------------------------------------------
 */

// Iterator-related methods
BidirIterator::iterator SimpleVec:: begin(){
  ptr = array;
}

//---------------------DAVID----------------------
//iterator begin(){
//  return BidirIterator(array);
//}
//------------------------------------------------

//BidirIterator::iterator SimpleVec::end(){
//}

//---------------------DAVID----------------------
//iterator end(){
//  return BidirIterator(array+length);
//}
//------------------------------------------------

// Constructors
SimpleVec::SimpleVec() : capacity(INITIAL_CAPACITY), length(0) {
    array = new double[capacity];
}

SimpleVec::SimpleVec(const SimpleVec& rhs) {
    capacity = rhs.capacity;
    length = rhs.length;
    array = new double[capacity];
    for(int i = 0; i < length; ++i)
        array[i] = rhs.array[i];
}

// Destructor
SimpleVec::~SimpleVec() {
    delete[] array;
}

// Assignment operator
SimpleVec & SimpleVec::operator=(const SimpleVec& rhs) {
    delete[] array;
    capacity = rhs.capacity;
    length = rhs.length;
    array = new double[capacity];
    for(int i = 0; i < length; ++i)
        array[i] = rhs.array[i];
}


// Other SimpleVec methods
void SimpleVec::push(double value) {
    if(length == capacity) expandCapacity();
    array[length++] = value;
}

void SimpleVec::erase(int index) {
    for(int i = index; i < length-1; ++i)
        array[i] = array[i+1];
    length--;
}

void SimpleVec::insert(int index, double value) {
    if(length == capacity) expandCapacity();
    for(int i = length-1; i > index; --i)
        array[i] = array[i-1];
    array[index] = value;
    length++;
}

void SimpleVec::modify(int index, double value) {
    array[index] = value;
}

double SimpleVec::retrieve(int index) {
    return array[index];
}

void SimpleVec::expandCapacity() {
    double *oldArray = array;
    capacity *= 2;
    array = new double[capacity];
    for(int i = 0; i < length; ++i)
        array[i] = oldArray[i];
    delete[] oldArray;
}

void SimpleVec::clear() {
    length = 0;
}

bool SimpleVec::empty() {
    return length == 0;
}

int SimpleVec::size() {
    return length;
}
