#include <stdio.h>

int main() {
  // Declare variables
  char name[50]; // This variable will store the name entered by the user

  // Get user input

  printf("Enter your name: ");
  scanf("%s", name);

  // Display personaliyed greeting
  printf("Hello, %s! Welcome to Day Two of the C programming Course. \n", name);

  return 0;
}
