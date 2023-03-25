#include <iostream>

using namespace std;

// Declaración de funciones
void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();
void ejercicio6();
void ejercicio7();
void ejercicio8();

int main()
{
    int option;

    do {
        cout << "Seleccione el ejercicio que desea ejecutar:" << endl;
        cout << "1. Usuario Mayor de edad o no." << endl;
        cout << "2. Mayor de dos números." << endl;
        cout << "3. Número par o impar." << endl;
        cout << "4. calcular factorial." << endl;
        cout << "5. numeros impares con for." << endl;
        cout << "6. números impares while." << endl;
        cout << "7. dia de la semana." << endl;
        cout << "8. Salir." << endl;
        cin >> option;

        switch (option) {
            case 1:
                int edad;
                cout << "Ingresa tu edad: ";
                cin >> edad;
                if (edad >= 18) {
                    cout << "Eres mayor de edad." << endl;
                } else {
                    cout << "No eres mayor de edad." << endl;
                }
                break;
            case 2:
                int num1, num2;

                cout << "Ingrese el primer número: ";
                cin >> num1;

                cout << "Ingrese el segundo número: ";
                cin >> num2;

                if (num1 > num2) {
                    cout << "El primer número es mayor." << endl;
                } else if (num2 > num1) {
                    cout << "El segundo número es mayor." << endl;
                } else {
                    cout << "Los dos números son iguales." << endl;
                }
                break;
            case 3:
                int num;
                cout << "Ingrese un número entero: ";
                cin >> num;

                if (num % 2 == 0) {
                    cout << num << " es un número par." << endl;
                } else {
                    cout << num << " es un número impar." << endl;
                }
                break;
            case 4:
                ejercicio4();
                break;
            case 5:
                int numero;
                cout << "Ingrese un número mayor a 10 y menor que 30: ";
                cin >> numero;
                if (numero > 10 && numero < 30) {
                    for (int i = 1; i <= numero; i += 2) {
                        cout << i << " ";
                    }
                } else {
                    cout << "El número ingresado no es válido." << endl;
                }
                break;
            case 6:
                int numer;
                cout << "Ingrese un número mayor a 10 y menor que 30: ";
                cin >> numero;
                if (numero > 10 && numero < 30) {
                    int i = 1;
                    while (i <= numero) {
                        cout << i << " ";
                        i += 2;
                    }
                } else {
                    cout << "El número ingresado no es válido." << endl;
                }
                break;
            case 7:
                int number;
                std::cout << "Ingrese un número del 1 al 5: ";
                std::cin >> numero;

                switch (numero) {
                    case 1:
                        std::cout << "Lunes" << std::endl;
                        break;
                    case 2:
                        std::cout << "Martes" << std::endl;
                        break;
                    case 3:
                        std::cout << "Miércoles" << std::endl;
                        break;
                    case 4:
                        std::cout << "Jueves" << std::endl;
                        break;
                    case 5:
                        std::cout << "Viernes" << std::endl;
                        break;
                    default:
                        std::cout << "El número ingresado no es válido." << std::endl;
                }
                break;
            case 8:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente nuevamente." << endl;
                break;
        }
    } while (option != 8);

    return 0;
}

void ejercicio4() {
    int n, i = 1, factorial = 1;
    cout << "Ingresa un número: ";
    cin >> n;
    while (i <= n) {
        factorial *= i;
        i++;
    }
    cout << "El factorial de " << n << " es " << factorial << endl;
}