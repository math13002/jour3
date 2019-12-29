char *ft_strrev(char *str)
{
  char letter;
  int size_word=0;
  while(*str++ !='\0')
	{
	  size_word++;
	}
  size_word--;
  letter=*(str+size_word);
  *(str+size_word)=*str;
  *str=letter;
  str++;
  ft_strrev(reverse(str++));
}
