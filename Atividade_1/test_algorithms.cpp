#include <iostream>
#include <string>
#include "busca_seq_ordenada.hpp"
#include "busca_binaria.hpp"
#include "recursao.hpp"

// Macro para facilitar os testes
#define RUN_TEST(name, expr, expected)                               \
    do {                                                             \
        auto result = (expr);                                        \
        std::cout << name << " : "                                   \
                  << ((result == (expected)) ? "OK" : "FAIL")        \
                  << " (Resultado: " << result                       \
                  << ", Esperado: " << expected << ")" << std::endl; \
    } while (0)

// Variável global para simular a API isBadVersion
int bad = 4;

int main() {
    // Teste para bubble_sort e conta_especialidades_distintas
    int arr1[] = {4, 2, 1, 4, 2, 1};
    int n1 = 6;
    bubble_sort(arr1, n1); // Ordena o array
    RUN_TEST("Conta especialidades distintas", conta_especialidades_distintas(arr1, n1), 3);

    // Teste para busca_binaria
    int arr2[] = {1, 2, 3, 4, 5};
    int n2 = 5;
    bad = 4; // Define a versão defeituosa
    RUN_TEST("Busca binária (isBadVersion)", busca_binaria(arr2, n2, 4), 3);

    // Teste para busca_seq_ordenada
    RUN_TEST("Busca sequencial ordenada", busca_seq_ordenada(arr2, n2, 3), 2);

    // Teste para recursao
    RUN_TEST("Recursiva", recursao("banana", 'a'), 3);

    return 0;
}