#include <stdio.h>

/*Printing an array out*/
void show_array(int *array, unsigned int array_size)
{
	for (int i = 0; i < array_size; i++)
		printf("%d ", array[i]);
	printf("\n");
}	

/*Deleting an element in array*/
void delete(int *array, unsigned int array_size, int index)
{
	array_size--;
	for (int i = index; i < array_size; i++)
		array[i] = array[i + 1];
}

/*Finding index of highest number in array*/
int find_max(int *array, unsigned int array_size)
{
	int max_index = 0;
	for (int i = 1; i < array_size; i++)
		if (array[i] > array[max_index])
			max_index = i;
	return max_index;
}

/*Selection sort algorithm*/
void max_sorting(int *array, int *new_array, unsigned int array_size)
{
	int array_size_for = array_size;
	for (int i = 0; i < array_size_for; i++)
	{
		int max = find_max(array, array_size);
		new_array[i] = array[max];
		delete(array, array_size, max); 
		array_size--;
	}
}


int main(void)
{
	int array[] = {1, -2, 0, 14, 5, 11};
	int sorted_array[6];
	show_array(array, 6);
	max_sorting(array, sorted_array, 6U);
	show_array(sorted_array, 6);
	
	return 0;
}