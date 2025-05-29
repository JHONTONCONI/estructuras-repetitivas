#include <iostream>

using namespace std;

int main(){
	int cantidadnumeros, i, suma;
	cout<<"\n\n     ******************************"<<endl;
	cout<<"     INGRESE LA CANTIDAD DE NUMEROS"<<endl;
	cout<<"     ******************************"<<endl;
	cin>>cantidadnumeros;
	suma=0;
	for(i=1; i<=cantidadnumeros; i++){
		suma=suma+i;
	}
	cout<<"LA SUMA DE LOS PRIMEROS NUMEROS NATURALES ES: "<<suma<<endl;
}
