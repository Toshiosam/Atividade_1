exercicios de EDB, arquivos compilados e testados 
os arquivos estão todos na mesma pasta por problemas na hora de compilar e 
para que a compilação ocorra sem problemas todos os arquivos estão na mesma pasta (pra mim funcionou)




funçoes implementadas:

**busca_binária**
int busca_binaria(int n);
Encontra a primeira versão defeituosa de um software usando o método da busca binária.
parametro -> int n → número total de versões.Retorna o número da primeira versão defeituosa.
Observações:Utiliza a função auxiliar isBadVersion(int version) para verificar se uma versão é defeituosa.

Exemplo de uso:

int n = 5;
int bad = 4; // primeira versão defeituosa
int resultado = busca_binaria(n); 
// resultado = 4

***********************************************************************************************************
**busca_seq_ordenada**
int busca_seq_ordenada(int arr[], int n, int alvo);
Realiza busca sequencial em um vetor ordenado.
Parâmetros -> int arr[] → vetor de inteiros.
int n → tamanho do vetor. int alvo → valor a ser procurado.
Retorno:Índice do elemento encontrado.-1 caso não encontre.

Exemplo de uso:

int arr[] = {1, 2, 3, 4, 5};
int pos = busca_seq_ordenada(arr, 5, 3); 
// pos = 2 (índice do valor 3)-1 caso não encontre.

***********************************************************************************************************

**conta_especialidades_distintas**
int conta_especialidades_distintas(int arr[], int n);
Descrição: Conta quantos valores únicos existem em um vetor de inteiros.
Parâmetros: -> int arr[] → vetor de inteiros.int n → tamanho do vetor.
Retorno: Número de especialidades (valores distintos).
Observações:Ordena o vetor antes da contagem.
Utiliza a função busca_seq_ordenada para evitar duplicados.

Exemplo de uso:

int arr[] = {4, 2, 1, 4, 2, 1};
// após ordenar: [1, 1, 2, 2, 4, 4]
int qtd = conta_especialidades_distintas(arr, 6); 
// qtd = 3 (valores únicos: 1, 2, 4)

**********************************************************************************************************
**recursao**
int recursao(const std::string &str, char alvo);   // versão C++
int recursao(const char *str, char alvo);          // versão C
Descrição: Conta recursivamente quantas vezes um caractere aparece em uma string.
Parâmetros: -> const std::string &str ou const char *str → string de entrada. char alvo → caractere a ser contado.
Retorno: Número de ocorrências do caractere na string.
Observações: Deve ser obrigatoriamente recursiva (não usar laços).

Exemplo de uso:

int qtd = recursao("banana", 'a');
// qtd = 3 (ocorrências da letra 'a')










