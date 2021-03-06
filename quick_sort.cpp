// competitive programming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <stdio.h>
#include <math.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)


void quick_sort(int data[], int left, int right);

int main()
{
	int N, C;
	static long int x[200001];

	scanf("%d%d", &N, &C);



	return 0;
}

void quick_sort(int data[], int left, int right) {
	int i, j, key, temp;
	if (left < right) {
		i = left;
		j = right + 1;
		key = data[left];
		do {
			do {
				i++;
			} while (data[i] < key);
			do {
				j--;
			} while (data[j] > key);
			if (i < j) {
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		} while (i < j);
		temp = data[left];
		data[left] = data[j];
		data[j] = temp;
		quick_sort(data,left,j - 1);
		quick_sort(data, j + 1, right);
	}
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
