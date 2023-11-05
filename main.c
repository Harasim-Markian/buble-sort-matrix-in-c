#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	int matrix[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("Enter the matrix element [%d][%d]: ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("Received matrix (5x5):\n");
	printf("\n");
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 - 1; j++)
		{
			for (int k = 0; k < 5 - j - 1; k++)
			{
				if (matrix[i][k] > matrix[i][k + 1])
				{
					int temp = matrix[i][k];
					matrix[i][k] = matrix[i][k + 1];
					matrix[i][k + 1] = temp;
				}
			}
		}
	}
	
	printf("\nMatrix sorted by rows:\n");
    printf("\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}

    int sums[5] = {0}; 

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i + j >= 5) 
            {
                sums[j] += matrix[i][j];
            }
        }
    }

    printf("\nSums below the secondary diagonal:\n");
	printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Sum in cols %d: %d\n", i, sums[i]);
    }
	
	return 0;
}
