#include <iostream>
#include <vector>
using namespace std;


float dispble(vector<float> consumo, float cupo_tot) {
  float consumido=0;
  float total=cupo_tot;
  for (unsigned int i=0; i<consumo.size(); ++i){
    consumido+=consumo[i];
  }
  float restante=total-consumido;

  return restante;
}

int transcc(vector<float> consumo, float cupo_tot) {
  float restante=cupo_tot;
  int ultima;
  for (unsigned int j=0; j<consumo.size(); ++j){
    restante= restante-consumo[j];
    if (restante < 0.00){
      ultima = int(consumo[j-1]);
      return ultima;
    }
  }
  return -1;

}


int main() {
  float cupo_tot = 100;

  float c[] = {0.02,3.58,18.78,8.27,10.60,18.63,15.72,10.00,11.06,19.30};
  vector<float> consumo(c, c + sizeof(c)/sizeof(float));

  float disp = dispble(consumo, cupo_tot);
  int t_valid = transcc(consumo , cupo_tot);

  cout << cupo_tot << " disp: " << disp << endl;
  cout << " Última trans. válida: " << t_valid << endl;


  return 0;
}
