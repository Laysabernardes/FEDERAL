#include <iostream>
//iostram é uma biblioteca de entrada e saida que contem as definições para cin e cont usados para entrada e saida

int main(int agrs, char** argv)
//Esta é a função principal do programa. Ela é o ponto de entrada para a execução do programa. Os parâmetros argc e argv são usados para passar argumentos de linha de comando para o programa. argc representa o número de argumentos passados, enquanto argv é um array de strings contendo os próprios argumentos.
{
    int i;
    double d;

    std::cout << "Digite valor int: ";
    std::cin >> i; 

    std::cout <<"Digite valor double: ";
    std::cin >> d;

    std::cout <<"Valor int: " << i << std::endl;
    std::cout <<"Valor double: " <<d;

    return 0;
}