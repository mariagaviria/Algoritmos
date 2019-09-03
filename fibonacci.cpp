#include<iostream>
#include<sys/time.h>
using namespace std;
int fib(int n){
  if (n<2){
    return n;
  }else{
    return fib(n-1)+fib(n-2);
  }
}

double gettime(){
  struct timeval tp;
  gettimeofday(&tp, NULL);
  return tp.tv_sec + tp.tv_usec/(double)1.0e6;
}

int main(){
  int times = 20;
  double tot_time=0;
  for(int i=0; i != times; ++i){
    double tstart=gettime();
    cout << fib(i) << endl;
    double tstop=gettime();
    tot_time+=tstop-tstart;
  }
  cout << "El tiempo tomado es: " << tot_time/times << endl;
  return 0;
}
