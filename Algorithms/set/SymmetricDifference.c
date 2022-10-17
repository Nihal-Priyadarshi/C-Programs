#include <stdio.h>

void SetUnion(int * a, int * b, int n1, int n2) {
  int k = 0, i, j;
  int c[20];
  
  for (i = 0; i < n1; i++) {
    for (j = 0; j < k; j++) {
      if (c[j] == a[i])
        break;
    }
    if (j == k) {
      c[k] = a[i];
      k++;
    }
  }
  for (i = 0; i < n2; i++) {
    for (j = 0; j < k; j++) {
      if (c[j] == b[i])
        break;
    }
    if (j == k) {
      c[k] = b[i];
      k++;
    }
  }
  for (int i = 0; i < k; i++)
    printf("%d ", c[i]);

}

int symDiff(int * a, int * b, int * c, int m, int n) {
  int flag, len = 0;

  for (int i = 0; i < n; i++) {
    flag = 0;
    for (int j = 0; j < m; j++) {
      if (a[i] == b[j]) {
        flag = 1;
        break;
      }
    }
    if (flag == 0) {
      c[len++] = a[i];

    }
  }
  return len;
}

int main() {
  int a[20], b[20], a_b[20], b_a[20];

  int n, m, flag = 0, len = 0;
  printf("Enter the number of elements in the set A: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  printf("Enter the number of elements in the set B: ");
  scanf("%d", &m);
  for (int i = 0; i < m; i++) {
    scanf("%d", &b[i]);
  }

  int l1 = symDiff(&a, &b, &a_b, m, n);
  int l2 = symDiff(&b, &a, &b_a, n, m);
  SetUnion(&a_b, &b_a, l1, l2);
  return 0;
}
