#include <stdlib.h>
#include <stdio.h>

/*Structures*/
typedef struct nodo{
    int info;
    struct nodo* dx;
    struct nodo* sx;
}nodo;

typedef nodo* albero;

/* funzione min_minore_val() che accetta come input un 
   puntatore T alla radice di un albero binario di ricerca 
   (oppure NULL se l'albero è vuoto) e un intero v. 
   La funzione restituisce un intero: 1 (true) se il minimo 
   valore contenuto nell'albero T è minore del valore v, 
   0 (false) altrimenti. Se l'albero è vuoto allora la funzione 
   restituisce 0. ATTENZIONE: non devi visitare tutto l'albero, 
   ma solo i nodi strettamente necessari per trovare il minimo. */

int min_minore_val(albero T, int v) {
    if(T == NULL) return 0;
    if(T->info < v)
        return 1;
    else
        return min_minore_val(T->sx, v) || min_minore_val(T->dx, v);
}
