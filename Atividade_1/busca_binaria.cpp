// filepath: c:\Users\toshi\Desktop\aulas bti\EDB\Atividade_1\Atividade_1\busca_binaria.cpp
#include "busca_binaria.hpp"

// Implementação da função busca_binaria
int busca_binaria(int* arr, int n, int alvo) {
    int lo = 0, hi = n - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == alvo) {
            return mid; // Retorna o índice do elemento encontrado
        } else if (arr[mid] < alvo) {
            lo = mid + 1; // Busca na metade direita
        } else {
            hi = mid - 1; // Busca na metade esquerda
        }
    }
    return -1; // Retorna -1 se o elemento não for encontrado
}