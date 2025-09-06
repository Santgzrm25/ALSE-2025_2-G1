#include <iostream>
#define DEBUG
// using namespace std
long double largeDecimal = 0x1452579F12C58781; // ob1100110
int main()
{
    float height = 1.8;
    char character = 'H';
    bool opened = false;
    unsigned int count = 0;
    short score = 30;
    int x, y;
    int aux;
#ifndef DEBUG
    std::cout << "Escriba dos numeros\n";
    std::cin >> x >> y;
    aux = x;
    x = y;
    y = aux;
    std::cout << "X:" << x << " Y:" << y << std::endl;
#endif
//Imprime contenido
#ifdef DEBUG
    std::cout << "Global variable: " << largeDecimal << std::endl;
    std::cout << "Float variable: " << height << std::endl;
    std::cout << "Char variable: " << character << std::endl;
    std::cout << "Bool variable: " << opened << std::endl;
    std::cout << "Uns variable: " << count << std::endl;
    std::cout << "Short variable: " << score << std::endl;
    std::cout <<"\n";
#endif
//Imprime dirección
#ifdef DEBUG
    std::cout << "Global variable address: " << &largeDecimal << std::endl;
    std::cout << "Float variable address: " << &height << std::endl;
    std::cout << "Char variable address: " << &character << std::endl;
    std::cout << "Bool variable address: " << &opened << std::endl;
    std::cout << "Uns variable address: " << &count << std::endl;
    std::cout << "Short variable address: " << &score << std::endl;
    std::cout <<"\n";
#endif
//Imprime tamaño
#ifdef DEBUG
    std::cout << "Global variable size: " << sizeof(largeDecimal) << std::endl;
    std::cout << "Float variable size: " << sizeof(height) << std::endl;
    std::cout << "Char variable size: " << sizeof(character) << std::endl;
    std::cout << "Bool variable size: " << sizeof(opened) << std::endl;
    std::cout << "Uns variable size: " << sizeof(count) << std::endl;
    std::cout << "Short variable size: " << sizeof(score) << std::endl;
#endif
    return 0;
}