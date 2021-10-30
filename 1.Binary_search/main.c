#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int bin_search(int number, int array[], int array_size)
{
    int low = 0;
    int high = array_size - 1;

    while (low <= high)
    {
        int middle = (int)roundf((low + high) / 2.0);
        int guess = array[middle];
		
		if (guess == number)
			return middle;
		else if (guess > number)
			high = middle - 1;
		else
			low = middle + 1;
    }
	
	return -1;
}

int main(void)
{
	int array[5] = {1, 3, 5, 7, 9};
	printf("%d", bin_search(18, array, 5));
    return 0;
}
