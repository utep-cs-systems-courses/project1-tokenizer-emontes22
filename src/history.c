#include <stdio.h>
#include <stdlib.h>
#include <history.h>

List *init_history()
{
  List *list = (List*)malloc(sizeof(List));
  list->root = (Item*)malloc(sizeof(Item));
  return list;
}

void add_history(List *list, char *str)
{

}
