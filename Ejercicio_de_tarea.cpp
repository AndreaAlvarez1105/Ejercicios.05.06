#include <iostream>

using namespace std;

int main() 
{
    char letra;
    cout <<"Elija una letra para asignarle un color: ";
    cout <<"R" << endl;
    cout <<"Y"<< endl;
    cout <<"B"<< endl;
    cout <<"W"<< endl;
    cout <<"K"<< endl;
    cout <<"C"<< endl;
    cout <<"G"<< endl;

    cout <<"Ingrese la letra escogida: ";
    cin >> letra;

    switch (letra)
    {
        case 'R':
        cout <<letra<< "Rojo";
        break;

        case 'Y':
        cout <<letra<< "Amarillo";
        break;

        case 'B':
        cout <<letra<< "Azul";
        break;

        case 'W':
        cout <<letra<< "Blanco";
        break;

        case 'K':
        cout <<letra<< "Negro";
        break;

        case 'C':
        cout <<letra<< "Cian";
        break;

        case 'G':
        cout <<letra<< "Verde";
        break;
        
        default: 
        cout<<"Esta letra no esta asociada a ningun color.";
        break;
        
        
    }
    
    return 0;

}