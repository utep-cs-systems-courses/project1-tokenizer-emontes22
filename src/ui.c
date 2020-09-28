#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

//Simple UI to let the user enter a string
int main()
{
  char input[50];
  List *history = init_history();

  printf("Welcome, Please select from the following options:\n");
  printf("'1' To tokenize a sentence.\n'2' To view the history.\n'3' To quit.\n");
  fgets(input, 50, stdin);

  int choice = atoi(input);

  switch (choice)
  {
  case 1:
    printf("Enter a sentence to tokenize:\n");
    fgets(input, 50, stdin);
    add_history(history, input);
    char **tokens = tokenize(input);
    print_tokens(tokens);
    break;

  case 2:
    print_history(history);
    break;

  case 3:
    exit(0);

  default:
    exit(0);
    break;
  }
}