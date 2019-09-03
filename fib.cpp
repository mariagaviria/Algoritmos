#include<iostream>
#include<sys/time.h>
using namespace std;

int additiveSeq (int f0, int f1, int n){
  if (n==0) return f0;
  else if (n==1) return f1;
  else{
    return additiveSeq(f1, f0+f1, n-1);
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
    cout << additiveSeq(0,1,i) << endl;
    double tstop=gettime();
    tot_time+=tstop-tstart;
  }
  cout << "El tiempo tomado es: " << tot_time/times << endl;
  return 0;
}
