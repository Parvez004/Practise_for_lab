#include <stdio.h>

int main() {
  char ch;
  printf("Enter a lowercase character: ");
  scanf(" %c", &ch);

  // Convert the lowercase character to uppercase.
  if (ch >= 'a' && ch <= 'z') {
    ch -= 32;
  }

  printf("The uppercase character is %c\n", ch);

  return 0;
}
