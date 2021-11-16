#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# define BUFFER_SIZE 42

char	*get_next_line_bonus(int fd);
int		len_c(char	*str, char c);
char	*ft_nl(char	*str, char c);
char	*strjoin(char *str1, char *str2);
char	*cutstr(char *str, int start, int len, int on);
char	*ret_val(int size, char *line);

#endif
