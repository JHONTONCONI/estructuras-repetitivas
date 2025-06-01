#include <iostream>

using namespace std;

int main(){
	int num, n, m, i;
	cout<<INGRESE LA CANTIDAD DE NUMERO<<endl;
	cin>>n;
	m=0;
	for(i=1;i<=n;i++){
		cout<<INGRESE UN NUMERO<<endl;
		cin>>num;
		if (num>m){
			m=num;
		}
	}
	cout<<EL MAYOR NUMERO ES: << m<<endl;
}
