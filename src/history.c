#include <stdio.h>
#include <stdlib.h>
#include "history.h"
#include "tokenizer.h"
#include <string.h>

/* Function to initialize the linked list */
List *init_history()
{
  List *list = (List*)malloc(sizeof(List));
  list->root = NULL;
  return list;
}

/* Function to add the recent item to the end of Linked List */
void add_history(List *list, char *str)
{
  int count = 0;
  Item *current = list->root;

  Item *newItem = (Item *)malloc(sizeof(Item));
  strcpy(newItem->str, str);
  newItem->next = NULL;

  if (current == NULL)
  {
    newItem->id = 0;
    list->root = newItem;
    return;
  }
  else
  {
    while (current->next)
    {
      current = current->next;
    }
    newItem->id = current->id + 1;
    current->next = newItem;
  }
}

/* Function to retrieve the history of Linked List */
char *get_history(List *list, int id)
{
  Item *current = list->root;

  if (current == NULL)
  {
    return NULL;
  }
  while (current && current->id != id)
  {
    current = current->next;
  }
  return current->str;
}

/* Function to print the content of the list */
void print_history(List *list)
{
  Item *current = list->root;

  while (current != NULL)
  {
    printf("ID = %d\t%s\n", current->id, current->str);
    current = current->next;
  }
}

/* Function to free the content of history */
void free_history(List *list)
{
  Item *current = list->root;
  Item *next;

  while(current != NULL)
  {
    next = current->next;
    free(current);
    current = next;
  }
  free(list->root);
  list->root = NULL;
}