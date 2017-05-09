#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void print(double matrix[][5], double *coe, double *results)
{
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			printf("%6.2f ", matrix[i][j]);
		}
		printf("|  %10f   |   = %10f\n", coe[i], results[i]);
	}
}

void multMatrix(double matrix[5][5], double coe[5]){
	for (int i = 0; i < 5; ++i)
	{
		double result = 0;
		for (int j = 0; j < 5; ++j)
		{
			result += matrix[i][j]*1.0*coe[j];
			printf("%6.3f ", matrix[i][j]);
		}
		printf("|  %10f   |   = %10f\n", coe[i], result);
	}
}

void gaussElimination(double matrix[5][5], double coe[5], double result[5], int matrixSize){
	for (int i = 0; i < matrixSize-1; ++i)
	{
		double pivot = matrix[i][i];

		for (int j = i+1; j < matrixSize; ++j)
			{
				double m = matrix[j][i]/pivot;
				for (int k = i; k < matrixSize; ++k)
				{
					matrix[j][k] = matrix[j][k] - (m* matrix[i][k]);
				}
				result[j] = result[j] - ( m*result[i] );
			}	
	}
}

void LUDevomposition(double matrix[5][5], double coe[5], double result[5], double U[5][5],  int matrixSize){
	for (int i = 0; i < matrixSize-1; ++i)
	{
		double pivot = matrix[i][i];
		U[i][i] = 1;

		for (int j = i+1; j < matrixSize; ++j)
			{
				double m = matrix[j][i]/pivot;
				U[j][i] = m;
				for (int k = i; k < matrixSize; ++k)
				{
					matrix[j][k] = matrix[j][k] - (m* matrix[i][k]);
				}
				result[j] = result[j] - ( m*result[i] );
			}	
	}
}

void inferior(double matrix[5][5], double coe[5], double results[5])
{
	for (int i = 0; i < 5; ++i)
	{
		double el = 0;
		for (int j = 0; j < i; ++j)
		{
			if(j<i) el += coe[j]*(matrix[i][j]);
		}

		coe[i] = (results[i]-el)/(matrix[i][i]*1.0);
	}
}

void superior(double matrix[5][5], double coe[5], double results[5])
{
	for (int i = 4; i >= 0; --i)
	{
		double el = 0;
		for (int j = i-1; j < 5; ++j)
		{
			if(j>i) el += coe[j]*(matrix[i][j]);
		}

		coe[i] = (results[i]-el)/(matrix[i][i]);
	}
}

int main()
{
	srand(time(NULL));
	int seed;

	double matrix[5][5];
	double coe[5];
	double results[5];

	for (int i = 0; i < 5; ++i)
	{
		results[i] = ( ((int)rand()) % 20)*1.0;
	}

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			seed = rand();
			matrix[i][j] = ((seed%20)*1.0)+1.0;
		}
	}

	double U[5][5] = {0};
	print(U, coe, results);
	printf("\n");

	LUDevomposition(matrix, coe, results, U, 5);

	print(U, coe, results);
	printf("\n");

	print(matrix, coe, results);
	printf("\n");

	superior(matrix, coe, results);

	print(matrix, coe, results);
	printf("\n");
	multMatrix(matrix, coe);
}
