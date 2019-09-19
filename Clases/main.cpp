#include<iostream>
using namespace std;
#include"vector.hpp"
int main(){
  Vector2D myVec; //vector en particular
  myVec.set_x(3);
  myVec.set_y(4);
  cout << myVec.norm() << endl;
  cout << myVec.get_x() << endl;
  cout << myVec.get_y() << endl;
  return 0;
}
