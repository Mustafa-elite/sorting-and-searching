#include <stdio.h>
#include <stdlib.h>
int* taking_data(int* arr_size)
{
	int size;
	printf("enter the number of elements you want to search:\n");
	scanf_s("%d", &size);
	if (size == 0)
		exit(1);
	int* index = (int*)malloc(size * sizeof(int));
	if (index == NULL)
	{
		printf("error in saving data");
		exit(1);
	}
	for (int i = 0; i < size; i++)
	{
		if (i == 0)
			printf("enter the first integer: ");
		else
			printf("enter the next integer: ");
		scanf_s("%d", index + i);
	}
	*arr_size = size;
	return index;
}

void print_array(int* index, int arr_size)
{
	printf("{");
	for (int i = 0; i < arr_size; i++)
	{
		printf("%d ", *(index + i));
	}
	printf("}\n");
}