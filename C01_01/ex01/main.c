#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********);

int		main(void)
{
	int a;
	int *ptr1, **ptr2, ***ptr3, ****ptr4, *****ptr5, ******ptr6, *******ptr7, ********ptr8, *********ptr9;

//	a = 48;
	ptr1 = &a;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
//	write(1, &a, 1);
//	write(1, &ptr9, 20);
	ft_ultimate_ft(ptr9);
//	write(1, &a, 1);
	printf("El nuevo valor de a es %d", a);
	return (0);
}

