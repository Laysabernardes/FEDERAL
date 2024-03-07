#include <iostream>
#include <locale.h> 
//  a biblioteca locale.h, fornece funcionalidades relacionadas à localização, como formatação de números, datas, moedas, entre outras coisas. Ao incluir essa biblioteca, você está habilitando o uso dessas funcionalidades no seu programa.

using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "");
    int i;
    double d;
    char c;
    bool b;
    string s;

    cout <<"Digite valor int: ";
    cin >> i ;

    cout <<"Digite um valor double: ";
    cin >> d;

    cout <<"Digite um valor char: ";
    cin >> c ;

    cout << "Digite um valor string: ";
    cin >> s; 

    b = (i%2 == 0);

    cout <<"Valor int digitado: " << i << endl;
    cout <<"Valor double digitado; "<< d << endl;
    cout <<"valor char digitado: "<< c << endl;
    cout <<"Valor string digitado: " << s << endl;
    cout <<"Tamnho string digitado: " <<s.size() << endl;
    cout <<"Valor int é par? " << b << endl;
    cout <<"Valor int é par? " << (b?"SIM":"NÃO") << endl;

    return 0;
}