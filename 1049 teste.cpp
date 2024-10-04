#include <iostream>

using namespace std;

int main(){
    string tipo;

    while(tipo == "vertebrado" || "invertebrado"){
        cout << "1. Vertebrado" << "\n" << "2. Invertebrado" << "\n";
        cin >> tipo;
            if(tipo =="vertebrado"){
                while(tipo == "ave" || "mamifero"){
                    cout << "1. Ave" << "\n" << "2. Mamifero" << "\n";
                    cin >> tipo;
                        if(tipo == "ave"){
                            cout << "cu";

                            }
                        }
                    break;
                }

            else if(tipo =="invertebrado"){
                cout << "sujo" << "\n";
                break;
            }
            }
        return 0;