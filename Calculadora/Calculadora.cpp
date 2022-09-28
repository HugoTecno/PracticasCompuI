// Autor: Victor Hugo Mejia Trejo
// Fecha: 27 Septiembre 2022
#include <iostream>
using namespace std ;
int main() {
    //Este programa hace operaciones entre dos Numeros.
    float n1,n3;
    int n,m;
    char n2;
    cout <<"Calculadora de dos digitos"<<endl ;
    cout <<"Ingrese el primer numero:"<<endl ;
    cin >> n1;
    cout << "Que operacion desea realizar:"<< endl;
    cout << "Suma(+) Resta(-) Multiplicacion(*) Division(/) Modulo(%)"<< endl;
    cout << "Ingrese solo el simbolo de la operacion:"<< endl;
    cin >> n2;
    cout << "Ingrese el segundo numero:"<< endl;
    cin >> n3;

    if (n2 == '+') {cout  << "Resultado: " << n1 << n2 << n3 << " = " << n1 + n3 << endl;}
    if (n2 == '-') {cout  << "Resultado: " << n1 << n2 << n3 << " = " << n1 - n3 << endl;}
    if (n2 == '/') {cout  << "Resultado: " << n1 << n2 << n3 << " = " << n1 / n3 << endl;}
    if (n2 == '*') {cout  << "Resultado: " << n1 << n2 << n3 << " = " << n1 * n3 << endl;}
    if (n2 == '%') {
        m=n1;
        n=n3;
        cout  << "Resultado: " << n1 << n2 << n3 << " = " << m%n << endl;}

    return 0;
}

