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
  while(space_char(*str)
    {
      if(non_space_char(*str))
	return str;
      str++;
    }
    return str;    
}

char *word_terminator(char *word)
{
  
}


    
