#include <iostream>

using namespace std;

int suma(int a, int b){
    int resultado = a + b;
    return resultado;
}

int main(){

    int a = 0;
    int b = 0;

    cout << "Ingrese los numeros a sumar: " << endl;

    cout << "numero 1:" << endl;
    cin >> a;

    cout << "numero 2:" << endl;
    cin >> b;

    int resultado = suma (a,b);
    cout << "El resultado es: " << resultado << endl;

    return 0; 
}