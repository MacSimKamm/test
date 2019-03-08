#include "hw/getname.h"

static int	names[] = {3, 2, 4};

const int GetName(int arr[], int n)
{
	int k = n;
	
	int mas[k];

	for (int i=0; i<k; i++) 
		mas[i] = i;

	GetName(mas, k);

	return names[1];
}
