/* Function returns 1 if A contains an element that isn't in B, returns 0 if every A's elements are in B */
int originale(int* A, int lenA, int* B, int lenB) {
    
    if (lenA == 0) return 0;
    if (lenB == 0 && lenA != 0) return 1;
    
    for (int i=0; i<lenA; i++) {
    int found = 0;
    int j = 0;
        while (j<lenB && found == 0) {
            if (A[i] == B[j]) {
                found = 1;
            }
            j ++;
        }
        if (found == 0)
            return 1;
    }
    return 0;
}
