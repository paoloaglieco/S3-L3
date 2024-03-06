#include<stdio.h>

//inizializzo un funzione che riceve due interi e li somma 
int sommaN(int a , int b){
    int c = a + b;
    return c;
}

//inizializzo una funzione media che riceve la somma dopo la chiamata in funzione dal main e calcola la media
float mediaN(int somma){
    float media = somma /2.0;
    return media;
}

int main(){
    
    int n1, n2;
    

    printf("Avvio del programma\n");
    //chiedo all'utente di inserire il primo numero e tramite scanf e lo conservo nella variabile intero n1
    printf("Inserisci il primo numero:\n");
    scanf("%d", &n1);
    //chiedo all'utente di inserire il primo numero e tramite scanf e lo conservo nella variabile intero n2
    printf("Inserisci il secondo numero:\n");
    scanf("%d", &n2);
    //chiamata alle funzioni somma e media
    int somma = sommaN(n1, n2);
    float media = mediaN(somma);


    //stampa dei risultati intero per somma e float per media in quanto il risulta della divisione non sempre è un intero
    printf("Il somma tra i due numeri e': %d\n", somma);
    printf("La media tra i due numeri e': %.2f\n", media);

    return 0;
}