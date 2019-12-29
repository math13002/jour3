int	ft_strlen(char *str)
{
  int cpt;
  cpt = 0;
  while(*str++ != '\0')
	cpt++;
  return cpt;
}
