#include <iostream>
#include <vector>
#include<math.h>

using namespace std;

int main(){
	vector<int>potencia;
	
	for ( unsigned int i=0; i<11; i++)
		potencia.push_back(pow(3,i));

	
	for (unsigned int i=0; i<potencia.size(); i++){
		if (potencia [i] < 100)
			cout<<' '<<potencia[i];
	}
	
	cout << '\n';
	return 0;
}
