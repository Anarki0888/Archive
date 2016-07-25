#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int		size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

static char	*ft_strcpy(char *dest, const char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\00')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\00';
	return (dest);
}

char		*ft_concat_params(int argc, char **argv)
{
	char	*params;
	int		i;
	int		tmp;

	i = 0;
	tmp = 0;
	while (argv[i])
	{
		tmp += ft_strlen(argv[i]);
		i++;
	}
	if (!(params = (char *)malloc(sizeof(char) * (tmp + argc))))
		return (NULL);
	i = 0;
	tmp = 0;
	while (argv[i])
	{
		ft_strcpy(params + tmp, argv[i]);
		tmp += ft_strlen(argv[i]);
		params[tmp] = '\n';
		tmp++;
		i++;
	}
	params[tmp - 1] = '\0';
	return (params);
}