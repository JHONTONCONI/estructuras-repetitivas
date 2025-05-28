#include <iostream>

using namespace std;

int main (){
	int cantidadmultiplos, i, mul;
	cout<<nn *************************************************<<endl;
	cout<< INGRESE LA CANTIDAD DE MULTIPLOS QUE DESEA CONOCER<<endl;
	cout<< *************************************************<<endl;
	cin>>cantidadmultiplos;
	cout<<LOS PRIMEROS <<cantidadmultiplos<< MULTIPLOS DE 7 SON: <<endl;
	for (i=0; i<cantidadmultiplos; i=i+1){
		mul=7*i;
		cout<<mul<<endl;
    }
    return 0;
}
