// 02_09_22_operadores_aritmeticos_000.cpp :
// betsabe salazar
//operadores aritmeticos

#include <iostream>
#include <String>
#include <stdio.h>
#include <cstring>



int main()
{
    int n1, n2;
    int s, r, m, d, p, raiz;
    n1 = 120;
    n2 = 10;

    //suma
    std::cout << "cuantos productos quieres? \n";
    std::cin >> n1;
    std::cout << "ahora suma mas de regalo \n";
    std::cin >> n2;
    std::cout << "entonces llevas " << n1 + n2 << std::endl;


    //resta
    std::cout << "cuantos productos tienes? \n";
    std::cin >> n1;
    std::cout << "ahora resta por no pagar varios \n";
    std::cin >> n2;
    std::cout << "te llevas " << n1 - n2 << std::endl;


    //multiplicacion
    std::cout << "cuantas papas fritas quieres? \n";
    std::cin >> n1;
    std::cout << "ahora multiplicalas \n";
    std::cin >> n2;
    std::cout << "entonces llevas " << n1 * n2 << std::endl;


    //division
    std::cout << "divide paquetes de galletas \n";
    std::cin >> n1;
    std::cout << "ahora otro numero \n";
    std::cin >> n2;
    std::cout << "entonces llevas " << n1 / n2 << std::endl;

    // raiz
    std::cout << "saca la raiz de todos los productos que veas \n";
    std::cin >> n1;
    std::cout << "entonces la raiz es " << sqrt(n1) << std::endl;

    //potencia
    std::cout << "saca potencia de tus productos \n";
    std::cin >> n2;
    std::cout << "la potencia de tus productos es " << pow(n2, 2) << std::endl;


    s = n1 + n2;
    r = n1 - n2;
    m = n1 * n2;
    d = n1 / n2;
    raiz = sqrt(n1);
    p = pow(n2, 2);
}