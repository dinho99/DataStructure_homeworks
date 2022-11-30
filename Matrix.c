/* count how much 0s there are in the matrix */
int conta_zeri_matrice(int **A, int r, int c) {
    int count = 0;
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            if (A[i][j] == 0)
            count ++;
        }
    }
    return count;
}
