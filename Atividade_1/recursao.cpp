#include "recursao.hpp"

// Implementação da função recursao
int recursao(const std::string &&str, char alvo) {
    if (str.empty()) {
        return 0; // Retorna 0 se a string estiver vazia
    }

    // Verifica se o primeiro caractere é igual ao alvo
    int count = (str[0] == alvo) ? 1 : 0;

    // Chamada recursiva para o restante da string
    return count + recursao(std::string(str.begin() + 1, str.end()), alvo);
}