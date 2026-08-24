#include <iostream> // Librería para utilizar cout y cin. 
using namespace std; // Permite utilizar cout y cin directamente. 

int main() { // Función principal del programa. 
    int arreglo[5]; // Declaración de un arreglo de 5 enteros. 
    cout << "Ingrese 5 números enteros: "; // Solicita al usuario que ingrese 5 números. 
    for (int i = 0; i < 5; i++) { // Bucle para leer los números ingresados por el usuario. 
        cin >> arreglo[i]; // Almacena cada número en el arreglo. 
    } 
    cout << "Los números ingresados son: "; // Muestra los números ingresados por el usuario. 
    for (int i = 0; i < 5; i++) { // Bucle para mostrar los números almacenados en el arreglo. 
        cout << arreglo[i] << " "; // Imprime cada número seguido de un espacio. 
    } 
    cout << endl; // Salto de línea al final de la salida. 
    return 0; // Indica que el programa terminó correctamente. 
}

