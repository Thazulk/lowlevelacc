#include <stdio.h>

int main() {

  int age;

  printf("enter your age: ");
  scanf("%d", &age);

  if (age >= 18) {
    printf("Congratulations! You are eligible to vote. \n");
  } else {
    printf("Sorry, you are not eligible to vote yet.\n");
  }

  return 0;
}
