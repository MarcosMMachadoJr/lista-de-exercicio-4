/*
Beecrowd: Problema 1045
21/08/2024
Prof. Gregory --> Marcos Marçal Machado Junior
*/

#include <iostream>

using namespace std;

int main() {
    float X, Y, Z;
    cin >> X >> Y >> Z;

    if (Y > X) {
        float temp = X;
        X = Y;
        Y = temp;
    }
    if (Z > X) {
        float temp = X;
        X = Z;
        Z = temp;
    }
    if (Z > Y) {
        float temp = Y;
        Y = Z;
        Z = temp;
    }

    if (X >= Y + Z) {
        cout << "NAO FORMA TRIANGULO" << "\n";
    } else {
        if (X * X == Y * Y + Z * Z) {
            cout << "TRIANGULO RETANGULO" << "\n";
        } else if (X * X > Y * Y + Z * Z) {
            cout << "TRIANGULO OBTUSANGULO" << "\n";
        } else if (X * X < Y * Y + Z * Z) {
            cout << "TRIANGULO ACUTANGULO" << "\n";
        }

        if (X == Y && Y == Z) {
            cout << "TRIANGULO EQUILATERO" << "\n";
        } else if (X == Y || Y == Z || Z == X) {
            cout << "TRIANGULO ISOSCELES" << "\n";
        }
    }
    return 0;
}