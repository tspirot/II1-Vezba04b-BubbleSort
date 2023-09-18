// Vezba04b.cpp : This file contains the 'main' function. Program execution begins and ends there.
// SORTIRANJE: Bubble sort metoda
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// celobrojni niz od 10 nesortiranih elemenata
	int niz[10] = { 5, 2, 7, 3, 9, 1, 8, 4, 6, 0 };
	int i, j, temp, n = 10;
	for (i = 0; i < n - 1; i++)
	{
		for (j = n - 1; j >= i + 1; j--)
		{
			if (niz[j - 1] > niz[j])
			{
				temp = niz[j - 1];
				niz[j - 1] = niz[j];
				niz[j] = temp;
			}
		}
	}
	// prikaz niza
	for (i = 0; i < n; i++)
		printf("%d ", niz[i]);
}
