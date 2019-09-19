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
void Vector2D:: set_x(double v){
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
