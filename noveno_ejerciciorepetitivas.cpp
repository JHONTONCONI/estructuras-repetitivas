#include <iostream>

using namespace std;

int main(){
	double numero, contadordig, guardador;
	cout<<"\n\n     **************************"<<endl;
	cout<<"     INGRESE EL NUMERO POSITIVO"<<endl;
	cout<<"     **************************"<<endl;
	cin>>numero;
	guardador=numero;
	contadordig=1;
	if (numero>0){
		while (numero/10>1){
			numero=numero/10;
			contadordig=contadordig+1;
			
		}
	}else{
		cout<<"\n\n     ***************************"<<endl;
		cout<<"     EL NUMERO DEBE SER POSITIVO"<<endl;
		cout<<"     ***************************"<<endl;
		return 0;
	}
	cout<<"\n\n     *************************************"<<endl;
	cout<<"     LA CANTIDAD DE DIGITOS DE "<< guardador <<"  ES: "<<contadordig<<endl;
	cout<<"     ************************************"<<endl;
	return 0;
}
