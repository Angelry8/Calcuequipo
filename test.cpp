#include <iostream> 
using namespace std;

double multiplicacion(double k, double d){
    return k * d;
}

int main() {


double k= 0;
double d= 0;
cout << "Digite el numero 1: " <<endl;
cin >> k;
cout<< "Digite el numero 2: " <<endl;
cin >> d;

cout << "El resultado de la multiplicacion es: " << multiplicacion(k,d) << endl;




return 0;

}