#include <iostream>

using namespace std;

int main(){
	double n, promediopar, promedioimpar, i, sumapar, sumaimpar, contadorpar, contadorimpar;
	int num;
	cout<<"\n\n     ******************************"<<endl;
	cout<<"     INGRESE LA CANTIDAD DE NUMEROS"<<endl;
	cout<<"     ******************************"<<endl;
	cin>>n;
	contadorpar=0;
	contadorimpar=0;
	sumapar=0;
	sumaimpar=0;
	for(i=1; i<=n; i++){
		cout<<"\n\n     *****************"<<endl;
		cout<<"     INGRESE UN NUMERO"<<endl;
		cout<<"     *****************"<<endl;
		cin>>num;
		if(num%2==0){
			contadorpar=contadorpar+1;
			sumapar=sumapar+num;
		}else{
			contadorimpar=contadorimpar+1;
			sumaimpar=sumaimpar+num;
		}
	}
	promediopar=sumapar/contadorpar;
	promedioimpar=sumaimpar/contadorimpar;
	cout<<"\n\n     ******************************"<<endl;
	cout<<"     EL PROMEDIO DE LOS PARES ES: "<<promediopar<<endl;
	cout<<"     ******************************"<<endl;
	cout<<"\n\n     ********************************"<<endl;
	cout<<"     EL PROMEDIO DE LOS IMPARES ES: "<<promedioimpar<<endl;
	cout<<"     ********************************"<<endl;
	
}
