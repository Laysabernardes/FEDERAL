# Nota Sobre o Exemplo 2:

O prefixo `std::` antes de funções, classes e outros elementos da biblioteca padrão C++ é uma prática que evita ambiguidades e conflitos de nomes (name clashes) no código. O `std::` é um namespace que engloba grande parte das funcionalidades padrão da linguagem C++, incluindo entrada e saída de dados, manipulação de strings, listas, conjuntos e outras funcionalidades da Biblioteca Padrão C++ (STL).

# Nota Sobre o Exemplo 3:

`setlocale(LC_ALL, "");`:

Esta linha invoca a função `setlocale()` para definir a localização padrão para o programa. A função `setlocale()` permite configurar a localização do programa para adaptá-lo a diferentes idiomas, formatos de data, moedas, etc.

O primeiro parâmetro, `LC_ALL`, especifica que estamos configurando todas as categorias de localização. Isso significa que estamos definindo a localização para todas as áreas do programa, como formatação de números, datas e moedas.

O segundo parâmetro, `""`, indica que queremos usar a localização padrão do sistema. Quando passamos uma string vazia, a função `setlocale()` consulta a variável de ambiente `LANG` do sistema para determinar a localização padrão.

---

## ANOTAÇÕES SOBRE A AULA

### Tipos de dados: 

#### Tipos de Dados Primitivos:
- **Inteiros:**
    - `int`: Representa números inteiros.
    - `short`: Representa inteiros curtos.
    - `long`: Representa inteiros longos.
    - `long long`: Representa inteiros longos longos (C++11 e posterior).
    - `unsigned int`, `unsigned short`, `unsigned long`, `unsigned long long`: Representam inteiros sem sinal.
- **Ponto Flutuante:**
    - `float`: Representa números de ponto flutuante de precisão simples.
    - `double`: Representa números de ponto flutuante de precisão dupla.
    - `long double`: Representa números de ponto flutuante de precisão estendida.
- **Caracteres:**
    - `char`: Representa caracteres individuais.
    - `wchar_t`: Representa caracteres de largura ampla.
    - `char16_t`, `char32_t`: Representam caracteres Unicode (C++11 e posterior).
- **Booleano:**
    - `bool`: Representa valores booleanos `true` ou `false`.

#### Tipos de Dados Modificados:
- `const`: Indica que o valor da variável não pode ser alterado.
- `volatile`: Indica que o valor da variável pode ser alterado por uma fonte externa, como uma interrupção de hardware.
- `mutable`: Permite que membros de uma classe marcados como `mutable` sejam modificados em uma instância de classe constante.

#### Tipos de Dados Compostos:
- **Arrays:** Coleções de elementos do mesmo tipo de dados, indexados numericamente.
- **Strings:** Sequências de caracteres, normalmente representadas como arrays de `char`.
- **Structs:** Coleções de variáveis de tipos diferentes agrupadas sob um único nome.
- **Union:** Estrutura que permite armazenar diferentes tipos de dados em uma única variável.
- **Enumeradores:** Conjunto de constantes nomeadas.

#

### Operadores de Entrada e Saída:

Os operadores de entrada e saída são utilizados para interação com o usuário através do console ou para ler/escrever dados de/para arquivos. 

- **Operadores de Saída (`<<`):**
    - `cout << valor`: Esse operador é usado para enviar dados para o fluxo de saída padrão, geralmente a tela ou o console. Ele é utilizado com o objeto `cout` para imprimir valores no console.

- **Operadores de Entrada (`>>`):**
    - `cin >> variavel`: Esse operador é usado para receber dados do fluxo de entrada padrão, geralmente o teclado. Ele é utilizado com o objeto `cin` para ler valores digitados pelo usuário.

- **Operadores de Saída e Entrada com Manipuladores de Fluxo:**
    - `endl`: Esse manipulador de fluxo é usado para inserir uma nova linha e limpar o buffer de saída. É similar a inserir `'\n'` (um caractere de nova linha) e chamar `flush()` no fluxo de saída.
    - `setw(int largura)`: Esse manipulador de fluxo é usado para definir a largura do campo de saída para o próximo valor a ser impresso. É frequentemente usado para alinhar valores em tabelas.
    - `setprecision(int precisao)`: Esse manipulador de fluxo é usado para definir a precisão de saída para números de ponto flutuante. Ele especifica o número de dígitos significativos a serem impressos após o ponto decimal.

#

### Ponteiros:

Ponteiros são variáveis especiais que armazenam endereços de memória de outras variáveis. Eles fornecem uma maneira de acessar e manipular indiretamente dados na memória do computador. Em C++, os ponteiros são amplamente utilizados para uma variedade de finalidades, incluindo alocação dinâmica de memória, passagem de argumentos para funções por referência e manipulação eficiente de estruturas de dados complexas, como listas encadeadas e árvores.

#### Conceitos Básicos:

- **Declaração de Ponteiros:** Um ponteiro é declarado especificando o tipo de dado ao qual ele aponta, seguido pelo operador de multiplicação `*` e o nome do ponteiro.
- **Atribuição de Endereço:** Um ponteiro armazena o endereço de memória de uma variável usando o operador de referência `&`.
- **Acesso ao Valor Armazenado:** O valor armazenado no endereço de memória apontado por um ponteiro pode ser acessado usando o operador de desreferência `*`.
- **Operações com Ponteiros:** Os ponteiros podem ser aritméticos, o que significa que você pode realizar operações matemáticas com eles, como adição ou subtração.
- **Uso de Ponteiros com Alocação Dinâmica de Memória:** Em C++, você pode alocar e desalocar memória dinamicamente usando os operadores `new` e `delete`, respectivamente.
