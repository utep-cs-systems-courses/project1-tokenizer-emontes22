#include <stdio.h>

int space_char(char c)
{
  if (c == '\t' || c == ' ')
    return 1;
  else
    return 0;
}

int non_space_char(char c)
{
  if (c != '\t' || c != ' ')
    return 1;
  else
    return 0;
}

char *word_start(char *str)
{
  while(space_char(*str))
    {
      if(non_space_char(*str))
	return str;
      str++;
    }
    return str;    
}

char *word_terminator(char *word)
{
  while(space_char(*word))
    {
      if(non_space_char(*word))
	return word;
      *word++;
    }
    return word;
}

int count_words(char *str)
{
  int count = 0;

  for(int i = 0; str[i] != '\0'; i++)
    {
      if(space_char(str[i]))
	count++;
    }
  return count;
}

char *copy_str(char *inStr, int len)
{
  char *temp = (char *)malloc(len + 1);
  
  while (*inStr != '\0')
    {
      *temp = *inStr;
      temp++;
      inStr++;
    }
  *temp = '\0';
  
  return temp;
}
//TODO
char **tokenize(char* str)
{
  
}

void print_tokens(char **str)
{
  while (non_space_char(*str))
    {
      printf("%s\n", *str);
      str++;
    }
}

void free_tokens(char **str)
{
  char **temp = str;
  
  while (*temp != "")
    {
      free(*temp);
      temp++;
    }
  free(temp);
}
