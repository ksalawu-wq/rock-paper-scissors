#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int user_choice, computer_choice;
  srand(time(NULL)); // Seed the random number generator

  // Print the instructions and get user input
  printf("Let's play rock-paper-scissors! Choose:\n");
  printf("1) Rock\n2) Paper\n3) Scissors\n");
  scanf("%d", &user_choice);

  // Generate a random computer choice
  computer_choice = rand() % 3 + 1;

  // Determine the winner and print a taunt
  if (user_choice == computer_choice) {
    printf("Tie! You're as predictable as a clock.\n");
  } else if ((user_choice == 1 && computer_choice == 3) ||
             (user_choice == 2 && computer_choice == 1) ||
             (user_choice == 3 && computer_choice == 2)) {
    printf("You win! Beginner's luck.\n");
  } else {
    printf("You lose! Better luck next time, champ.\n");
  }

  return 0;
}
