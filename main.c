#include <stdio.h>
#include <stdlib.h>
#include "prototypes.h"
int main()
{
	int arr_size, needed_num, answer;
	int* index = taking_data(&arr_size);
	insertion_sort(arr_size, index);
	print_array(index, arr_size);
	printf("enter the number to search for:");
	scanf_s("%d", &needed_num);
	answer = search(index,arr_size, needed_num);
	printf("index is %d", answer);
	return 0;

}
