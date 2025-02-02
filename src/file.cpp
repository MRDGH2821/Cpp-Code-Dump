#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
  FILE *fp1, *fp2;
  char ch;
  fp1 = fopen("Desktop", "r");

  if (fp1 == NULL) {
    puts("File does not exist..");
    exit(1);
  }

  fp2 = fopen("Downloads", "w");

  if (fp2 == NULL) {
    puts("File does not exist..");
    fclose(fp1);
    exit(1);
  }

  while ((ch = fgetc(fp1)) != EOF) {
    ch = toupper(ch);
    fputc(ch, fp2);
  }

  printf("\nFile successfully copied..");
  return 0;
}
