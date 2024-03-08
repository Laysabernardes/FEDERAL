#include <iostream> 
#include <iomanip> 
#include <locale.h>

using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL , "");

    int i;
    double d;

    int *pi; //declara um ponteiro inteiro 'pi'
    double *pd;//declara um ponteiro para double chamado 'pd'

    i=100;
    d=200.5;

    //Atribuição de endereços às variáveis ponteiro:
    pi=&i;//Atribui o endereço de i ao ponteiro pi.
    pd=&d;// Atribui o endereço de d ao ponteiro pd.

    cout << "Valor da variavel i: "<< i << endl;
    cout << "Tamanho da variavel i: " << sizeof(i) <<endl;
    cout << "Endereço da variavel pi: " << &pi <<endl;

    cout << "Valor da variavel d: " << d << endl;
    cout << "Tamanho da varivel d: "<< sizeof(d) <<endl;
    cout << "Endereço da variavel d: "<< &pd << endl;

    *pi =500;

    cout << "Valor da variavel i: "<< i << endl;
    cout << "Tamanho da variavel i: "<< sizeof(i) << endl;
    cout << "Endereço da variavel i: "<< &pi << endl;

    return 0;


}