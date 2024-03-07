#include <iostream>
// biblioteca de entrada e saída padrão, necessária para usar as funções cin e cout.
#include <iomanip>
// biblioteca que fornece manipuladores de fluxo para controlar a formatação de saída, como setw e setprecision.
#include <locale.h>
// biblioteca locale.h, que fornece funcionalidades relacionadas à localização, como formatação de números, datas, moedas, entre outras coisas.

using namespace std;
// Indica que estamos utilizando o namespace std de forma global, o que nos permite usar as funções e classes da biblioteca padrão C++ sem precisar prefixá-las com std::.


int main(int argc, char** argv)
{
    setlocale(LC_ALL, "");
    //Configura a localização padrão do programa para a localização padrão do sistema. Isso permite que o programa se adapte automaticamente ao idioma e formato específicos do usuário.

    cout << fixed;
    //Define a notação de ponto fixo para a saída de números de ponto flutuante. Isso faz com que os números de ponto flutuante sejam exibidos com uma quantidade fixa de dígitos após o ponto decimal.

    int i;
    double d;

    cout << "Digite valor int: ";
    cin >> i;

    cout << "Digite valor double : ";
    cin >> d ; 

    cout << "Valor digitado pra int " << i << endl;
    cout << "Valor digitado para double " << d << endl;

    cout << endl;

    cout << "Valor int : " << setw(10) << i <<endl;
    cout << "Valor double : "<< setw(10) << d << endl;
    //setw(10): Define a largura do campo de saída para 10 caracteres. Isso pode ser usado para alinhar os valores de saída.

    cout << endl;

    cout << "Valor double I: " << setprecision(2) << setw(10) << d << endl;
    cout << "Valor double II: " << setprecision(3) << setw(10) << d << endl;
    cout << "Valor double III: " << setprecision(4) << setw(10) << d << endl;
    //setprecision(n): Define a precisão de saída para n dígitos após o ponto decimal para números de ponto flutuante

    cout << endl;

	cout << setprecision(5);	
	cout << "Valor double: " << setw(10) << d << endl;
  	cout << "Valor double: " << setw(10) << d << endl;
	cout << "Valor double: " << setprecision(6) << setw(10) << d << endl;
    //Neste bloco, setprecision(5) é usado antes de imprimir os valores de d. Isso define a precisão de saída para 5 dígitos após o ponto decimal para todos os valores de ponto flutuante impressos após essa chamada setprecision(5). No entanto, a terceira linha do bloco redefine a precisão para 6 dígitos após o ponto decimal usando setprecision(6) antes de imprimir o valor de d	
	
    cout << endl;

	cout << fixed;
	cout << setprecision(5);	
	cout << "Valor double: " << setw(10) << d << endl;
  	cout << "Valor double: " << setw(10) << d << endl;
	cout << "Valor double: " << setprecision(6) << setw(10) << d << endl;
    //Neste bloco, fixed é usado antes de configurar a precisão de saída com setprecision(5). A função fixed força a notação de ponto fixo, ou seja, os números de ponto flutuante serão impressos com a precisão especificada após o ponto decimal, independentemente de sua magnitude. Isso significa que mesmo que o valor de d tenha menos de 5 dígitos após o ponto decimal, ele será impresso com exatamente 5 dígitos após o ponto. A terceira linha do bloco redefine a precisão para 6 dígitos após o ponto decimal usando setprecision(6) antes de imprimir o valor de d

    // a principal diferença entre os dois blocos é que o segundo bloco usa a função fixed para forçar a notação de ponto fixo antes de definir a precisão de saída, enquanto o primeiro bloco define a precisão de saída sem forçar a notação de ponto fixo.
		
	return 0;
}