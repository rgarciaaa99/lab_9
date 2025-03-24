#include <iostream>  // Biblioteca estándar para entrada y salida
using namespace std;

// Función recursiva para calcular el factorial de un número
int factorial(int n) {
    // Verifica si el número es negativo y lanza una excepción
    if (n < 0) {
        throw invalid_argument("Error: Factorial de un número negativo no está definido.");
    }

    // Caso base: El factorial de 0 o 1 es 1
    if (n == 0 || n == 1) {
        return 1;
    }

    // Caso recursivo: n! = n * (n-1)!
    return n * factorial(n - 1);
}

int main() {
    try {
        int numero;

        // Solicita al usuario un número
        cout << "Introduce un número para calcular el factorial: ";
        cin >> numero;

        // Llama a la función factorial y almacena el resultado
        int resultado = factorial(numero);

        // Muestra el resultado en pantalla
        cout << "El factorial de " << numero << " es: " << resultado << endl;
    } 
    catch (...) { 
        // Captura cualquier excepción y muestra un mensaje de error genérico
        cerr << "Se ha producido un error desconocido." << endl;
    }

    return 0;  // Indica que el programa finalizó correctamente
}
