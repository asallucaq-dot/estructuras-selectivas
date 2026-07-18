#include <iostream>
using namespace std;
int main(){
int num;
cout<<"Introducir un numero entero: ";
cin>>num;
if(num>0){
cout<<"El numero es positivo";
} else if(num<0){
cout<<"El numero es negativo";
} else {
cout<<"El numero es cero";
}
return 0;
}
