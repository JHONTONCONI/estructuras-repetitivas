#include <iostream>

using namespace std;

int main(){
	double cantidadnumeros, promedio, i, suma, numero;
	cout<<"\n\n     ******************************"<<endl;
	cout<<"     INGRESE LA CANTIDAD DE NUMEROS"<<endl;
	cout<<"     ******************************"<<endl;
	cout<<endl;
	cin>>cantidadnumeros;
	cout<<endl;
	suma = 0;
	for(i = 1; i <= cantidadnumeros; i++){
		cout<<"\n\n     *****************"<<endl;
		cout<<"     INGRESE UN NUMERO"<<endl;
		cout<<"     *****************"<<endl;
		cout<<endl;
		cin>>numero;
		if (numero>0){
			suma=suma+numero;
		}else{
			cout<<"\n\n     **************************"<<endl;
			cout<<"     INGRESE UN NUMERO POSITIVO"<<endl;
			cout<<"     **************************"<<endl;
			cout<<endl;
			i=i-1;
		}
	}
	promedio=suma/cantidadnumeros;
	cout<<"EL PROMEDIO ES: "<< promedio <<endl;
}
