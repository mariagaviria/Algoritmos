#include<iostream>

using namespace std;

bool isPalindrome(string str){
  if (str.size()<=1) return true;
  else{
    if (str.at(0)==str.at(str.size() - 1)){
      return isPalindrome(str.substr(1, str.size() - 2));
    }else{
      return false;
    }
  }
}

int main(){
  cout << isPalindrome("rottor") << endl;
  return 0;
}
