#ifndef __vector_hpp
#define __vector_hpp

class Vector2D{
private: // no se puede acceder directamente, ej: p.x -> NO se puede
  double x;
  double y;

public: //si permite acceder directamente
  Vector2D(); // sin ~ -> constructor
  ~Vector2D(); // con ~ -> destructor

  double norm();

  void set_x(double v){
    x=v;
  }

  void set_y(double n){
    y=n;
  }

  double get_x();
  double get_y();
};

#endif
