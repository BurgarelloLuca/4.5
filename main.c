#include <stdio.h>

int main(void) {
    int nprodotti,prodotti;
    float prezzo,totale;
    prodotti=1;
    printf("inserire il numero di prodotti acquistati: ");
    scanf("%d",&nprodotti);
    while (nprodotti>=prodotti) {
        printf("inserire il prezzo del prodotto");
        scanf("%f",&prezzo);
        totale+=prezzo;
        prodotti++;
    }
    printf("il totale e' di %.2f", totale);
    return 0;
}
