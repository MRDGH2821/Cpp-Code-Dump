#include <stdio.h>
int main() {
  int a[5], i, j, t, min;

  for (i = 0; i < 5; i++) {
    scanf("%d", &a[i]);
  }

  for (i = 0; i < 5; i++) {
    min = i;

    for (j = i + 1; j < 5; j++) {
      if (a[j] < a[min]) {
        min = j;
      }
    }

    if (min != i) {
      t = a[min];
      a[min] = a[i];
      a[i] = t;
    }
  }

  for (i = 0; i < 5; i++) {
    printf("%d", a[i]);
  }
}
