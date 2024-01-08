#include "calc_header.h"
#include <iostream>

using namespace std;

Calc::Calc()
{
    primeira_operacao = true;
    visor_limpo = false;
}
void Calc::calculadora()
{
    std::cout << "Selecione o que deseja calcular: " << std::endl;
    std::cout << "1. Soma" << std::endl;
    std::cout << "2. Subtracao" << std::endl;
    std::cout << "3. multiplicacao" << std::endl;
    std::cout << "4. divisao" << std::endl;
    std::cout << "5. limpar visor" << std::endl;
    int opcao;
    std::cin >> opcao;
    if(opcao != 5)
    {
    std::cout << "digite o numero:" << std::endl;
    }
    double temp_num;
    std::cin >> temp_num;
    setNum1(temp_num);
    if(visor_limpo == true && opcao != 5)
    {
        std::cout << "digite o segundo numero:" << std::endl;
        double temp_num_2;
        std::cin >> temp_num_2;
        setNum2(temp_num_2);
    }
    switch (opcao)
    {
    case 1:
        soma();
        break;
    case 2:
        subtrai();
        break;
    case 3:
        multiplica();
        break;
    case 4:
        divide();
        break;
    case 5:
        serResultado(0);
        setNum1(0);
        setNum2(0);
        visor_limpo = true;
        calculadora();
        break;
    default:
        break;
    }
}
void Calc::serResultado(double num)
{
    resultado = num;
}
void Calc::setNum1(double num)
{
    num1 = num;
}

void Calc::setNum2(double num)
{
    num2 = num;
}
void Calc::soma()
{
    if(primeira_operacao == true)
    {
        std::cout << "digite o segundo numero:" << std::endl;
        std::cin >> num2;
        resultado = num1 + num2;
        primeira_operacao = false;
        std::cout << "O resultado e:" << std::to_string(resultado) << std::endl;
        std::cout << std::to_string(resultado) << std::endl;
        calculadora();
    }
    else
    {
        resultado = resultado + num1;
        std::cout << std::to_string(resultado) << std::endl;
        calculadora();
    }
}
void Calc::subtrai()
{
    if(primeira_operacao == true)
    {
        std::cout << "digite o segundo numero:" << std::endl;
        std::cin >> num2;
        resultado = num1 - num2;
        primeira_operacao = false;
        std::cout << "O resultado e:" << std::to_string(resultado) << std::endl;
        calculadora();
    }
    else
    {
        resultado = resultado - num1;
        std::cout << std::to_string(resultado) << std::endl;
        calculadora();
    }
}
void Calc::multiplica()
{
    if(primeira_operacao == true)
    {
        std::cout << "digite o segundo numero:" << std::endl;
        std::cin >> num2;
        resultado = num1 * num2;
        primeira_operacao = false;
        std::cout << "O resultado e:" << std::to_string(resultado) << std::endl;
        calculadora();
    }
    else
    {
        resultado = resultado * num1;
        std::cout << std::to_string(resultado) << std::endl;
        calculadora();
    }
}
void Calc::divide()
{
    if(primeira_operacao == true)
    {
        std::cout << "digite o segundo numero:" << std::endl;
        std::cin >> num2;
        resultado = num1 / num2;
        primeira_operacao = false;
        std::cout << "O resultado e:" << std::to_string(resultado) << std::endl;
        calculadora();
    }
    else
    {
        resultado = resultado / num1;
        std::cout << std::to_string(resultado) << std::endl;
        calculadora();
    }
}
float Calc::getResultado()
{
    return resultado;
}
void Calc::segunda_operacao()
{
    std::cout << "Digite um numero" << std::endl;
    double temp_num;
    std::cin >> temp_num;
    num1 = temp_num;
    

}