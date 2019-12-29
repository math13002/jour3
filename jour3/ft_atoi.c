#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);

int main()
{
  char *str = malloc(5);
  *str = '1';
  *(str+1) = '1';
  *(str+2) = '2';
  *(str+3) = '3';
  *(str+4) = '\0';
  printf("%i \n", ft_atoi(str));
  return *str;
}

int	ft_atoi(char *str)
{
  int somme; 
  int i;
  
  somme = 0;
  i = 0;
  while(*(str+i) != '\0')
	{
	  if(*(str) != '-' | *(str) != '+')
		i++;
	  if (*(str+i) < '0' | *(str+i) > '9')
		{
		  if(*str == '-')
			return -somme;
		  return somme;;
		}
	  else
		{
		  somme = 10 * somme + (*(str+i) -48);
		  i++;
		}
	}
  if(*str == '-')
	return -somme;
  return somme;
}
