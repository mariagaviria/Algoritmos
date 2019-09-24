#ifndef __dynarray_hpp_
#define __dynarray_hpp_

class DynArray{
private:
  int *array;
  int size;

public:
  DynArray (int s);
  ~DynArray();

  void set(int pos, int val);
  int get(int pos);
  int getsize();
  bool operator== (DynArray &a); // sobrecargando el operador '=='

};

#endif //__dynarray_hpp_
