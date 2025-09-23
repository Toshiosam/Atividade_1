#include "busca_seq_ordenada.hpp"

// Implementação da função bubble_sort
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Implementação da função busca_seq_ordenada
int busca_seq_ordenada(int arr[], int n, int alvo) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == alvo) {
            return i; // Retorna o índice do elemento encontrado
        }
    }
    return -1; // Retorna -1 se o elemento não for encontrado
}

// Implementação da função conta_especialidades_distintas
int conta_especialidades_distintas(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        bool isUnique = true;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            count++;
        }
    }
    return count;
}