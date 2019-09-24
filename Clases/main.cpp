#include<iostream>
using namespace std;
#include"vector.hpp"
int main(){
  Vector2D vec1; //vector en particular
  vec1.set_x(3);
  vec1.set_y(4);


  cout << vec1.norm() << endl;
  cout << vec1.get_x() << " , " << vec1.get_y() << endl;

  Vector2D vec2;
  vec2=vec1;
  cout << vec2.get_x() << " , " << vec2.get_y() << endl;

  vec2+vec1;
  cout << vec2.get_x() << " , " << vec2.get_y() << endl;

  Vector2D vec3;
  vec3.set_x(5);
  vec3.set_y(11);
  cout << vec3.get_x() << " , " << vec3.get_y() << endl;

  Vector2D vec4;
  vec4=vec3+vec1;
  cout << vec4.get_x() << " , " << vec4.get_y() << endl;

  double p;
  p=vec3*vec1;
  cout << p << endl;

  Vector2D vec5;
  vec5=vec3*5;
  cout << vec5.get_x() << " , " << vec5.get_y() << endl;

  Vector2D vec6;
  vec6=3*vec3;
  cout << vec6.get_x() << " , " << vec6.get_y() << endl;

  return 0;
}

