#include <unistd.h>
#include <stdio.h>

void	ft_prueba(int *);

int		main(void)
{
	int a;
	int *ptr1;

//	a = 48;
	ptr1 = &a;
	ft_prueba(ptr1);
//	write(1, &a, 1);
	printf("El nuevo valor de a es %d", a);
	return (0);
}

