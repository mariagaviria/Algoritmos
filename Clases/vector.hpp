#ifndef __vector_hpp_
#define __vector_hpp_

class Vector2D{
private: // no se puede acceder directamente, ej: p.x -> NO se puede
  double x;
  double y;

public: //si permite acceder directamente
  Vector2D(); // sin ~ -> constructor
  ~Vector2D(); // con ~ -> destructor

  double norm();

  void set_x(double v);

  void set_y(double n);

  double get_x();
  double get_y();

  void operator=(Vector2D a); //sobrecargando el operador '='
  //Vector2D operator+(Vector2D a); // sobrecargando el operador '+'
};

Vector2D operator+(Vector2D &a, Vector2D &b);
double operator*(Vector2D &a, Vector2D &b); // sobrecargando el operador '*' como producto punto
Vector2D operator*(Vector2D &a, double x); // sobrecargando el operador '*' como producto escalar
Vector2D operator*(double x, Vector2D &a);
#endif //__vector_hpp_
