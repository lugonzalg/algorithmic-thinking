#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "get_next_line.h"
#include "libft.h"

typedef struct	s_lines
{
	int	*lines;
	size_t	no_perso;
	int	size;
}	t_lines;

static void	free_d2(char **tab)
{
	size_t	i;
	
	i = -1;
	while (tab[++i])
	{
		free(tab[i]);
		tab[i] = NULL;
	}
	free(tab);
	tab = NULL;
}

static bool	stdin_info(t_lines *line)
{
	int		i;
	static char	*input[2];
	char		**tmp;

	i = -1;
	while (++i < 2)
		input[i] = get_next_line(0);
	tmp = ft_split(input[0], 32);
	if (!tmp)
		return (true);
	line->size = ft_atoi(tmp[0]);
	line->lines = (int *)malloc(sizeof(int) * line->size);
	line->no_perso = ft_atoi(tmp[1]);
	free_d2(tmp);
	tmp = ft_split(input[1], 32);
	if (!tmp)
		return (true);
	i = -1;
	while (tmp[++i])
		line->lines[i] = ft_atoi(tmp[i]);
	free_d2(tmp);
	return (false);
}

static void	line_query(t_lines *line)
{
	int	i;
	int	j;

	while (line->no_perso)
	{
		j = 0;
		i = -1;
		while (++i < line->size)
		{
			if (line->lines[i] < line->lines[j])
				j = i;
		}
		printf("%d\n", line->lines[j]);
		line->lines[j]++;
		line->no_perso--;
	}
}

int main(void)
{
	t_lines	line;

	stdin_info(&line);
	line_query(&line);
	free(line.lines);
	return (0);
}
