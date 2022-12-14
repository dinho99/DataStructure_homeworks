/*true if number of leaves is twice the number of nodes in a binary tree*/
#include <stdlib.h>

/*binary tree struct*/
typedef struct nodo{
    struct nodo* sx;
    struct nodo* dx;
    int info;
}nodo;

typedef nodo* albero;

/* scrivi qui eventuali funzioni di appoggio */
int conta_foglie(nodo* n){
    if(n == NULL) return 0;
    int count = 0;
    if(n->dx == NULL && n->sx == NULL)
        count ++;
    return count + conta_foglie(n->dx) + conta_foglie(n->sx);
}

int conta_nodi(nodo* n){
    if(n == NULL) return 0;
    int count = 0;
    if(n != NULL) count ++;
    return count + conta_nodi(n->dx) + conta_nodi(n->sx);
}

int nodi_foglie_per_due(albero T){
    if(T == NULL) return 1;
    if(conta_nodi(T) == (2 * conta_foglie(T)))
        return 1;
    else return 0;
}
