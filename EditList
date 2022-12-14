/*Write here the code that removes the last element of a simply linked (int) list*/

#include <stdio.h>

typedef struct elist {
    int info;
    struct elist* next;
}elist;

typedef struct elist* plist;

void rimuovi_ultimo(plist* p){
    if (*p == NULL) return;
    else if((*p)->next == NULL) {
        free(*p);
        p = NULL;
    } else {
        plist pre = *p;
        plist suc = (*p)->next;
        while(suc->next!=NULL) {
        pre = suc;
        suc = suc->next;
    }
    pre->next = NULL;
    free(suc);
    }
}
