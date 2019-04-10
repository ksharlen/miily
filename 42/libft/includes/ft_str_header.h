#ifndef FT_STR_HEADER_H
# define FT_STR_HEADER_H

# include "ft_std_header.h"

int		ft_strlen(const char *str);
char	*ft_strdup(const char *s);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
char    *ft_strncat(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char    *ft_strnstr(const char *big, const char *little, size_t len);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s, size_t n);
int		ft_atoi(const char *nptr);

#endif
