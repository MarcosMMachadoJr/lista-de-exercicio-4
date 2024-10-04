/*
Beecrowd: Problema 1043
21/08/2024
Prof. Gregory --> Marcos Marçal Machado Junior
*/

#include <iostream>

using namespace std;

int main(){

    float X, Y, Z;
    cin >> X >> Y >> Z;

    if((X < Y + Z) && (Y < X + Z) && (Z < X + Y)){
        float perimetroTriangulo = X + Y + Z;
        cout << fixed;
        cout.precision(1);
        cout << "Perimetro = " << perimetroTriangulo << "\n";
    }
    else{
        float areaTrapezio = ((X + Y) * Z) / 2;
        cout << fixed;
        cout.precision(1);
        cout << "Area = " << areaTrapezio << "\n";
    }

    return 0;
}