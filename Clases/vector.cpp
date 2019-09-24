#include "vector.hpp"
#include<cmath>
Vector2D::Vector2D(){
  x=0;
  y=0;
}

Vector2D::~Vector2D(){}

double Vector2D::norm(){
  return sqrt(x*x + y*y);
}
void Vector2D::set_x(double v){
  x=v;
}
void Vector2D::set_y(double n){
  y=n;
}
double Vector2D::get_x(){
  return x;
}
double Vector2D::get_y(){
  return y;
}
void Vector2D::operator=(Vector2D a){
  x=a.get_x();
  y=a.get_y();
}
/*Vector2D Vector2D::operator+(Vector2D a){
  Vector2D n;
  x+= a.get_x();
  y+= a.get_y();
  return n;
}*/
Vector2D operator+(Vector2D &a, Vector2D &b){
  Vector2D m;
  m.set_x(a.get_x() + b.get_x());
  m.set_y(a.get_y() + b.get_y());
  return m;
}
double operator*(Vector2D &a, Vector2D &b){
  double m;
  m=(a.get_x()*b.get_x())+(a.get_y()*b.get_y());
  return m;
}
Vector2D operator*(Vector2D &a, double x){
  Vector2D m;
  m.set_x(a.get_x()*x);
  m.set_y(a.get_y()*x);
  return m;
}
Vector2D operator*(double x, Vector2D &a){
  Vector2D m;
  m.set_x(x*a.get_x());
  m.set_y(x*a.get_y());
  return m;
}
