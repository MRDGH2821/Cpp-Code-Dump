#include <stdio.h>
int main() {
  printf("%lu %lu %lu\n", sizeof('3'), sizeof("3"), sizeof(3));
  return 0;
}
