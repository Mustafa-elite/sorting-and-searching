#include <stdio.h>
#include <stdlib.h>
void insertion_sort(int arr_size, int* index)
{
	int temp;
	int temp_i;
	for (int i = 1; i < arr_size; i++)
	{
		temp_i = i;
		for (int j = i - 1; j >= 0; j--)
		{
			if (*(index + temp_i) < *(index + j))
			{
				temp = *(index + j);
				*(index + j) = *(index + temp_i);
				*(index + temp_i) = temp;
				temp_i--;
			}

		}

	}
}
int search(int* index, int arr_size, int needed_num)
{
	int start = 0, end = arr_size - 1, mid = 0;
	while (end >= start)
	{
		mid = (start + end) / 2;
		if (needed_num == *(index + mid))
		{
			break;
		}
		else if (start == mid && mid == end)
		{
			printf("not found");
			exit(1);

		}
		else if (needed_num > *(index + mid))
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	while (needed_num == *(index + mid))
	{
		if (needed_num == *(index + mid - 1))
			mid--;
		else
			return mid;
	}
}