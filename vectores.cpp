#include <iostream>
using namespace std;

double resta (double num1, double num2){
    return num1 - num2;
}
int main() {

    double num1= 0;
    double num2= 0;
    cout << "ingresa el primer numero: ";
    cin >> num1;
    cout << "ingresa el segundo numero: ";
    cin >> num2;
    cout << "el resultado de la resta es: " << resta (num1,num2) << endl;

    return 0; 
}