void ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int chiffre;

	i = 0;
	while (i < size)
	  {
		j = i + 1;
		while (j < size )
		  {
			if (*(tab + i)<*(tab + j))
			  {
				chiffre = *(tab +i);
				*(tab + i) = *(tab + j);
				*(tab +j) = chiffre;
			  }
			j++;
		  }
		i++;
	  }
}
