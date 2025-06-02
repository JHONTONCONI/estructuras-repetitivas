#include <iostream>

using namespace std;

int main(){
	double num, contadordig, a;
	cout<<INGRESE EL NUMERO POSITIVO<<endl;
	cin>>num;
	a=num;
	contadordig=1;
	if (num>0){
		while (num/10>1){
			num=num/10;
			contadordig=contadordig+1;
			
		}
	}else{
		cout<<EL NUMERO DEBE SER POSITIVO<<endl;
		return 0;
	}
	cout<<LA CANTIDAD DE DIGITOS DE << a <<  ES: <<contadordig<<endl;
	return 0;
}
