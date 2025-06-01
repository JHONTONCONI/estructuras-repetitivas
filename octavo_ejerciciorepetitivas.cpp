#include <iostream>

using namespace std;

int main(){
	int numero, cantidadnumeros, mayor, i;
	cout<<"\n\n     *****************************"<<endl;
	cout<<"     INGRESE LA CANTIDAD DE NUMERO"<<endl;
	cout<<"     *****************************"<<endl;
	cin>>cantidadnumeros;
	
	for(i=1;i<=cantidadnumeros;i++){
		cout<<"\n\n     *****************"<<endl;
		cout<<"     INGRESE UN NUMERO"<<endl;
		cout<<"     ****************"<<endl;
		cin>>numero;
		if (i==1){
			mayor=numero;
		}
		if (numero>mayor){
			mayor=numero;
		}
	}
	cout<<"\n\n     *********************"<<endl;
	cout<<"     EL MAYOR NUMERO ES: "<<mayor<<endl;
	cout<<"     *********************"<<endl;
}
