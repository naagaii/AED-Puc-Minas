#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int gravaSerieFibonacci();
int separaImparesPares();
int separaPrimos();
int posicaoFibonacci();

int main() {
    setlocale(LC_ALL, "portuguese");
    int op;

    printf("Escolha sua opcao:\n");
    printf("1 - Gravar numeros da serie Fibonacci em um arquivo\n");
    printf("2 - Separar numeros impares e pares em arquivos diferentes\n");
    printf("3 - Separar numeros primos em um arquivo\n");
    printf("4 - Encontrar a posicao do numero na serie Fibonacci\n");
    printf("0 - Finalizar o programa\n");

    scanf("%i", &op);

    switch (op) {
        case 1:
            gravaSerieFibonacci();
            break;
        case 2:
            separaImparesPares();
            break;
        case 3:
            separaPrimos();
            break;
        case 4:
            posicaoFibonacci();
            break;
        case 0:
            printf("Finalizando o programa\n");
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}

int gravaSerieFibonacci() {
    FILE *arquivo;
    int a = 0, b = 1, c;

    if ((arquivo = fopen("arquivo.txt", "w")) == NULL) { // Modo de escrita ativo
        printf("Erro de abertura!\n");
        return 1; 
    }

    fprintf(arquivo, "%d\n", a); // Escreve o primeiro valor da sequencia
    fprintf(arquivo, "%d\n", b); // Escreve o segundo valor da sequencia

    for (int i = 2; i < 64; i++) {
        c = a + b;
        a = b;
        b = c;
        fprintf(arquivo, "%d\n", c);
    }

    fclose(arquivo);
    return 0;
}

int separaImparesPares() {

    FILE *arquivo, *arquivoPares, *arquivoImpares;
    int numero;

     // Abrir o arquivo de entrada
    if ((arquivo = fopen("arquivo.txt", "r")) == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    // Abrir os arquivos de saída
    if ((arquivoPares = fopen("pares.txt", "w")) == NULL) {
        printf("Erro ao abrir o arquivo pares.txt!\n");
        fclose(arquivo);
        return 1;
    }

    if ((arquivoImpares = fopen("impares.txt", "w")) == NULL) {
        printf("Erro ao abrir o arquivo impares.txt!\n");
        fclose(arquivo);
        fclose(arquivoPares);
        return 1;
    }

    // Ler os números da série Fibonacci do arquivo e separá-los
    while (fscanf(arquivo, "%d", &numero) != EOF) {
        if (numero % 2 == 0) {
            fprintf(arquivoPares, "%d\n", numero);
        } else {
            fprintf(arquivoImpares, "%d\n", numero);
        }
    }

    fclose(arquivo);
    fclose(arquivoPares);
    fclose(arquivoImpares);

    printf("Números da série Fibonacci foram separados em arquivos pares.txt e impares.txt com sucesso!\n");

    return 0;
}

int separaPrimos() {

    FILE *arquivo, *arquivoPrimos;
    int numero, primo;

    if ((arquivo = fopen("arquivo.txt", "r")) == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    if ((arquivoPrimos = fopen("primos.txt", "w")) == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    while (fscanf(arquivo, "%d", &numero) != EOF) {
        primo = 1; 
        if (numero <= 1) {
            primo = 0; // Números menores ou iguais a 1 não são primos
        } else {
            for (int i = 2; i * i <= numero; i++) {
                if (numero % i == 0) {
                    primo = 0; // Se o número for divisível por algum número no intervalo, não é primo
                    break;
                }
            }
        }
        // Se o número for primo, grava no arquivo de primos
        if (primo) {
            fprintf(arquivoPrimos, "%d\n", numero);
        }
    }

    fclose(arquivo);
    fclose(arquivoPrimos);

    printf("Números primos foram gravados no arquivo primos.txt com sucesso!\n");

    return 0;
}

int posicaoFibonacci() {
    FILE *arquivo, *arquivoNumeros, *arquivoResultados;
    int numeros, posicao=0, encontrado=0, anterior, posterior;

    if ((arquivo = fopen("arquivo.txt", "r")) == NULL) {
        printf("Erro ao abrir o arquivo da série!\n");
        return;
    }

     if ((arquivoNumeros = fopen("numeros.txt", "r")) == NULL) {
        printf("Erro ao abrir o arquivo com os valores!\n");
        fclose(arquivoNumeros);
        return;
    }

    if ((arquivoResultados = fopen("resultados.txt", "w")) == NULL) {
        printf("Erro ao abrir o arquivo para gravar os resultados!\n");
        fclose(arquivo);
        fclose(arquivoNumeros);
        return;
    }

    while (fscanf(arquivoNumeros, "%d", &numeros) != EOF) {
        // Reinicia a posição no arquivo da série
        posicao = 0;
        encontrado = 0;

        // Verifica se o valor está presente na série
        while (fscanf(arquivo, "%d", &anterior) != EOF) {
            posicao++;
            if (numeros == anterior) {
                encontrado = 1;
                fprintf(arquivoResultados, "O valor %d está no arquivo na posição %d.\n", numeros, posicao);
                break;
            } else if (numeros < anterior) {
                posterior = anterior;
                break;
            } else {
                posterior = anterior;
            }
        }

        // Se o valor não foi encontrado na série
        if (!encontrado) {
            fprintf(arquivoResultados, "O valor %d não está no arquivo. Valores mais próximos: %d e %d.\n", numeros, anterior, posterior);
        }

        // Retorna ao início do arquivo da série para a próxima verificação
        rewind(arquivo);
    }

    // Fecha os arquivos
    fclose(arquivo);
    fclose(arquivoNumeros);
    fclose(arquivoResultados);

    printf("Resultados gravados no arquivo resultados.txt com sucesso!\n");
}

