#include <iostream> 
#include <string>

using namespace std;



int main() {
std::cout << "Bienvenido!" <<std::endl;

int N = 0;
int suma=0;
int contador=0;
std::cout << " Digita un numero del 1 al 100" <<std::endl;
std::cin >> N;
     
// Operadores en C++\
// +, -, *, /, %
//==, !=, <, <=, >, >=
// &&, ||, !


// Validar
if (N <= 100 && N >0)
{
    while (contador <= N)
    {
        suma = suma + contador;
        contador++ ;
    }     
        
    
    std::cout <<"La suma de 0 hasta "<< N  <<" es  " << suma <<std::endl;

}else
{

std::cout <<" Numero invalido" <<std::endl;


}
std::cout <<" Muchas Gracias" <<std::endl;
return 0;

}