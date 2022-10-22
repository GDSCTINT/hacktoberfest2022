#include <stdio.h>

void findFourElements(int A[], int n, int B)
{
for (int i = 0; i < n-3; i++)
{
	for (int j = i+1; j < n-2; j++)
	{
	for (int k = j+1; k < n-1; k++)
	{
		for (int l = k+1; l < n; l++)
		if (A[i] + A[j] + A[k] + A[l] == B)
			printf("%d, %d, %d, %d", A[i], A[j], A[k], A[l]);
	}
	}
}
}

int main()
{
	int A[] = {1, 2, 10, 20, 30, 40};
	int n = sizeof(A) / sizeof(A[0]);
	int B = 51;
	findFourElements (A, n, B);
	return 0;
}
