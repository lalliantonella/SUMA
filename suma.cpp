#include <iostream>
using namespace std;
int main (){

 int limite;
 int suma=0;
 int num2 = 0;

cout << "INGRESE UN LIMITE DE SUMA";
cin >> limite;


           for (int numero ; suma <= limite;) {

               cout <<"INGRESE UN NUMERO";
               cin >> numero;


if (numero>0) {
suma = suma + numero;
};
};
cout << suma;

    return 0;
}
