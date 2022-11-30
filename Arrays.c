/* count numer of even numbers in an array */
int even_counter(int* A, int l) {
  int count = 0;
  for (int i=0; i<l; i++) {
    if (A[i]%2 == 0) count ++;
  }
  return count;
}
