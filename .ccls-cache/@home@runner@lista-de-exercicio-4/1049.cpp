#include <iostream>

using namespace std;

int main()
{
    string tipo;
    
    cout << "1. Vertebrado" << "\n" << "2. Invertebrado" << "\n";
    cin >> tipo;
        if(tipo =="vertebrado")
        {
            cout << "1. Ave" << "\n" << "2. Mamifero" << "\n";
            cin >> tipo;
                if(tipo == "ave")
                {
                cout << "1. Carnivoro" << "\n" << "2. Onivoro" << "\n";
                    cin >> tipo;
                        if(tipo == "carnivoro")
                        { 
                            cout << "aguia";
                        }
                        else if(tipo == "onivoro")
                        {
                            cout << "pomba";
                        }
                }
                else if(tipo == mamifero)
                {
                    cout << "1. Onivoro" << "\n" << "2. Herbivoro" << "\n";
                    cin >> tipo;
                        if(tipo == "onivoro")
                        {
                            cout << "homem";
                        }
                        else if(tipo == "herbivoro")
                        {
                            cout << "vaca";
                        }
                }
        }
                    
        else if(tipo == "invertebrado")
            {
                cout << "1. Inseto" << "\n" << "2. Anelideo" << "\n";
                cin >> tipo;
                    if(tipo == "inseto")
                    {
                    cout << "1. Hematofago" << "\n" << "2. Herbivoro" << "\n";
                        cin >> tipo;
                            if(tipo == "hematofago")
                            { 
                                cout << "pulga";
                            }
                            else if(tipo == "herbivoro")
                            {
                                cout << "lagarta";
                            }
                    }
                    else if(tipo == "anelideo")
                    {
                        cout << "1. Hematofago" << "\n" << "2. Onivoro" << "\n";
                        cin >> tipo;
                            if(tipo == "hematofago")
                            {
                                cout << "sanguessuga";
                            }
                            else if(tipo == "onivoro")
                            {
                                cout << "minhoca";
                            }
                    }
            }
    return 0;
}