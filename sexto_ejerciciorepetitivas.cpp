#include <iostream>

using namespace std;

int main(){
	double num, promedio, i, suma, numero;
	cout<<INGRESE LA CANTIDAD DE NUMEROS<<endl;
	cin>>num;
	suma=0;
	for(i=1; i<=num; i++){
		cout<<INGRESE UN NUMERO<<endl;
		cin>>numero;
		if (numero>0){
			suma=suma+numero;
		}else{
			cout<<INGRESE UN NUMERO POSITIVO<<endl;
			i=i-1;
		}
	}
	promedio=suma/num;
	cout<<EL PROMEDIO ES: << promedio <<endl;
}
