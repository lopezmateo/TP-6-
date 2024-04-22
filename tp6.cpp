#include <iostream>
using namespace std;
int main ()
{
	
	int a,b;
	
	cout<<"ingrese un numero"<<endl;
	cin>>a;
	cout<<"ingrese otro numero"<<endl;
	cin>>b;
	
	if (a>b){
		
		cout<<"el numero ingresado es mayor que el segundo"<<endl<<a<<endl;
		
	}else if(a<b){
		
		cout<<"el segundo numero es mayor que el primero"<<b<<endl;
	}
	
	return 0;
}
