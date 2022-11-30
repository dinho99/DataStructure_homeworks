/* count how many 0s are in the "simply linked list" */
#include <stdio.h>

typedef struct elem {
  int info;
  struct elem* next;
} elist;

typedef elist* plist;

int conta_positivi_lista(plist p) {
    if (p == NULL) return 0;
    int count = 0;
    while (p != NULL) {
        if (p->info > 0) {
            count ++;
        }
        p = p->next;
    }
    return count;
}
