#include <stdio.h>

int main() {
    int primo_valore, secondo_valore, terzo_valore;
    int somma, differenza, prodotto;

    printf("Inserisci il primo valore (intero): ");
    scanf("%d", &primo_valore);

    printf("Inserisci il secondo valore (intero): ");
    scanf("%d", &secondo_valore);

    printf("Inserisci il terzo valore (intero): ");
    scanf("%d", &terzo_valore);

    somma = primo_valore + terzo_valore;

    printf("Somma tra il primo e il terzo valore: %d\n", somma);

    if (somma > 0) {
        printf("La somma %d è positiva (operazione: %d + %d).\n", somma, primo_valore, terzo_valore);
    } else if (somma < 0) {
        printf("La somma %d è negativa (operazione: %d + %d).\n", somma, primo_valore, terzo_valore);
    } else {
        printf("La somma è zero (operazione: %d + %d).\n", primo_valore, terzo_valore);
    }

    differenza = primo_valore - terzo_valore;

    prodotto = secondo_valore * differenza;

    printf("Prodotto tra il secondo valore e la differenza: %d\n", prodotto);

    if (prodotto > 0) {
        printf("Il prodotto %d è positivo (operazione: %d * (%d - %d)).\n", prodotto, secondo_valore, primo_valore, terzo_valore);
    } else if (prodotto < 0) {
        printf("Il prodotto %d è negativo (operazione: %d * (%d - %d)).\n", prodotto, secondo_valore, primo_valore, terzo_valore);
    } else {
        printf("Il prodotto è zero (operazione: %d * (%d - %d)).\n", secondo_valore, primo_valore, terzo_valore);
    }

    return 0;
}
