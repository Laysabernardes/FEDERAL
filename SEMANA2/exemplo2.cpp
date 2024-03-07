#include <iostream>
using namespace std; 
//Permite usar os membros do namespace std sem precisar do prefixo std::

int main (int argc , char** argv)
{
    int i ; 
    double d ;

    cout << "Digite um valor int: ";
    cin >> i;

    cout <<"Digite um valor double: ";
    cin >> d ;

    cout << "Valor int:  " <<i <<endl;
    cout << "Valor double: " <<d ; 

    return 0;
}