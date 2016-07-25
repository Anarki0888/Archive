void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (tab && tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}