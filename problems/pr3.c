#include <stdio.h>

int addNumbers(int n);

int addNumbers(int n) {
  if (n == 1)
    return 1;
  else
    return n + addNumbers(n - 1);
}

int main() {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Sum = %d", addNumbers(num));
  return 0;
}

