#include <iostream>
#include <cmath>
int main()
{
    int x = 12, y = 17;
    int num1, num2;
    if (x > y)
    {
        std::cout << "x greaten than y: " << x << std::endl;
    }
    else if (x < y)
    {
        std::cout << "x less than y: " << x << std::endl;
    }
    else
    {
        std::cout << "x equal than y: " << x << std::endl;
    }
    std::cout << "Ingrese un valor para num1: " << std::endl;
    std::cin >> num1;
    // numero num1 par o impar
    if (num1 % 2 == 0)
    {
        std::cout << "El numero es par" << std::endl;
    }
    else
    {
        std::cout << "El numero es impar" << std::endl;
    }
    std::cout << "Ingrese un valor para num2: " << std::endl;
    std::cin >> num2;
    if (num1 % 2 == 0 && num2 % 2 == 0)
    {
        std::cout << "Los numeros ingresados son pares" << std::endl;
    }
    else if (num1 % 2 == 0 && num2 % 2 != 0)
    {
        std::cout << "Num 1 es par y num2 es impar" << std::endl;
    }
    else if (num1 % 2 != 0 && num2 % 2 == 0)
    {
        std::cout << "Num1 es impar y num2 es par" << std::endl;
    }
    else
    {
        std::cout << "Los numeros ingresados son impares" << std::endl;
    }

    int arr[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        arr[i] = pow(2, i);
        std::cout << "Arr[" << i << "]=: " << arr[i] << std::endl;
    }
    std::cout << "\n";
    // punteros
    int *intPointer = &arr[0];
    for (int i = 0; i < 5; i++)
    {
        *intPointer = i;
        intPointer++;
        std::cout << "Arr[" << i << "]=: " << arr[i] << std::endl;
    }
    // while loop
    std::cout << "\n";
    std::cout << "Counting down with while loop:" << std::endl;
    while (x > 0)
    {
        std::cout << "X = " << x << std::endl;
        x--;
        if (x == 3)
        {
            break;
        }
    }
    std::cout << "Fin del ciclo" << std::endl;

    char userInput = 'q';
    int counter = 0;
    while (userInput == 'y' || userInput == 'Y')
    {
        std::cout << "Desea continuar? (y/n): ";
        std::cin >> userInput;
        std::cout << "Contador: " << counter << std::endl;
        counter++;
    }
    // do while
    do
    {
        std::cout << "Do while: Desea salir? oprima (q): ";
        std::cin >> userInput;
        std::cout << "contador: " << counter << std::endl;
        counter++;
        if (counter > 10)
        {
            std::cout << "Se ha superado el maximo de intentos" << std::endl;
            break;
        }
    } while (userInput != 'q');
    return 0;
}
