#include <iostream>

// Función para ordenar el arreglo en orden ascendente
void bubbleSortAsc(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Intercambiar los elementos si están en el orden incorrecto
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Función para ordenar el arreglo en orden descendente
void bubbleSortDesc(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Intercambiar los elementos si están en el orden incorrecto
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Función para imprimir el arreglo
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    int arr[10];
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Ingrese 10 valores enteros separados por espacio: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    char order;
    std::cout << "¿Ordenar en orden ascendente (A) o descendente (D)? ";
    std::cin >> order;

    if (order == 'A' || order == 'a') {
        bubbleSortAsc(arr, n);
        std::cout << "Arreglo ordenado en orden ascendente: ";
    } else if (order == 'D' || order == 'd') {
        bubbleSortDesc(arr, n);
        std::cout << "Arreglo ordenado en orden descendente: ";
    } else {
        std::cout << "Opción no válida." << std::endl;
        return 1;
    }

    printArray(arr, n);

    return 0;
}
