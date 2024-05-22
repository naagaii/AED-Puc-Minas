#include <stdio.h>

//- Dado um vetor de inteiros, crie um vetor de frequências onde cada posição indica
//quantas vezes um elemento aparece no vetor original. – obs: valores do vetor podem
//variar entre 0 e 99.


#define MAX_VAL 100 // Assumindo que os valores no vetor não excedem 99
void vetorFrequencias(int *vetor, int tam, int *freq) {
for (int i = 0; i < MAX_VAL; i++) {
freq[i] = 0;
}
for (int i = 0; i < tam; i++) {
freq[vetor[i]]++;
}
}
#define tam 7
int main() {
int vetor[tam] = {1, 2, 3, 2, 0, 3, 4};
int freq[MAX_VAL];
vetorFrequencias(vetor, tam, freq);
for (int i = 0; i < MAX_VAL; i++) {
if (freq[i] > 0) {
printf("Valor %d aparece %d vezes\n", i, freq[i]);
}
}
return 0;
}
