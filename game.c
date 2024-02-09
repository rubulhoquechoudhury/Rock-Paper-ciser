#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  char playerChoice;
  int computerChoice, win = 0;

  srand(time(NULL)); // Seed random number generator

  // Welcome message
  printf("Welcome to Rock, Paper, Scissors!\n");

  // Game loop
  while (1) {
    // Get player choice
    printf("\nEnter your choice (r, p, s, or q to quit): ");
    scanf(" %c", &playerChoice);

    // Check for quit
    if (playerChoice == 'q') {
      printf("Goodbye!\n");
      break;
    }

    // Validate player choice
    if (playerChoice != 'r' && playerChoice != 'p' && playerChoice != 's') {
      printf("Invalid choice. Please enter r, p, or s.\n");
      continue;
    }

    // Generate computer choice
    computerChoice = rand() % 3; // 0 = rock, 1 = paper, 2 = scissors

    // Show choices
    printf("You chose: ");
    switch (playerChoice) {
    case 'r':
      printf("Rock\n");
      break;
    case 'p':
      printf("Paper\n");
      break;
    case 's':
      printf("Scissors\n");
      break;
    }
    printf("Computer chose: ");
    switch (computerChoice) {
    case 0:
      printf("Rock\n");
      break;
    case 1:
      printf("Paper\n");
      break;
    case 2:
      printf("Scissors\n");
      break;
    }

    // Determine winner
    if ((playerChoice == 'r' && computerChoice == 2) ||
        (playerChoice == 'p' && computerChoice == 0) ||
        (playerChoice == 's' && computerChoice == 1)) {
      printf("You win!\n");
      win++;
    } else if (playerChoice == computerChoice) {
      printf("Tie!\n");
    } else {
      printf("You lose!\n");
    }

    // Show win count
    printf("Your wins: %d\n", win);
  }

  return 0;
}