#include<stdio.h>

//inizializzo una funzione moltiplicazione che riceve due interi e li moltiplica
int moltiplicazione(int a , int b){
    int c = a * b;
    return c;
}


int main(){
    //dichiaro le variabili interi n1 e n2
    int n1, n2;
    

    printf("Avvio del programma\n");
    //chiedo all'utente di inserire il primo numero e tramite scanf e lo conservo nella variabile intero n1
    printf("Inserisci il primo numero:\n");
    scanf("%d", &n1);
    //chiedo all'utente di inserire il primo numero e tramite scanf e lo conservo nella variabile intero n2
    printf("Inserisci il secondo numero:\n");
    scanf("%d", &n2);
    //dichiaro un intero prodotto che sarà uguale al risultato della funzione moltiplicazione
    int prod = moltiplicazione(n1, n2);
    //stampo il prodotto fra i due numeri scelti
    printf("Il prodotto tra i due numeri e': %d", prod);

    return 0;
}