#include <iostream>
#include "calc_header.h"
using namespace std;

int main()
{
    Calc calculadora;
    std::cout << "Selecione o que deseja calcular: " << std::endl;
    std::cout << "1. Soma" << std::endl;
    std::cout << "2. Subtracao" << std::endl;
    std::cout << "3. multiplicacao" << std::endl;
    std::cout << "4. divisao" << std::endl;
    std::cout << "5. limpar visor" << std::endl;
    int opcao;
    std::cin >> opcao;
    std::cout << "digite o primeiro numero:" << std::endl;
    double temp_num;
    std::cin >> temp_num;
    calculadora.setNum1(temp_num);
    switch (opcao)
    {
    case 1:
        calculadora.soma();
        break;
    case 2:
        calculadora.subtrai();
        break;
    case 3:
        calculadora.multiplica();
        break;
    case 4:
        calculadora.divide();
        break;
    case 5:
        calculadora.serResultado(0);
        break;
    default:
        break;
    }

    return 0;

}