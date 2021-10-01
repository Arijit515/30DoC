#include <bits/stdc++.h>
using namespace std;
const int MAX = 100;

void sortRows(int mat[][MAX], int n)
{
	for (int i=0; i<n; i++)
		sort(mat[i], mat[i] + n);
}

void findAndPrintCommonElements(int mat[][MAX], int n)
{
	sortRows(mat, n);

	int curr_index[n];
	memset(curr_index, 0, sizeof(curr_index));
	int f = 0;

	for (; curr_index[0]<n; curr_index[0]++)
	{
		int value = mat[0][curr_index[0]];

		bool present = true;

		for (int i=1; i<n; i++)
		{
			while (curr_index[i] < n &&
				mat[i][curr_index[i]] <= value)
				curr_index[i]++;

			if (mat[i][curr_index[i]-1] != value)
				present = false;

			if (curr_index[i] == n)
			{
				f = 1;
				break;
			}
		}

		if (present)
			cout << value << " ";

		if (f == 1)
			break;
	}
}

int main()
{
	int mat[][MAX] = { {12, 1, 14, 3, 16},
		{14, 2, 1, 3, 35},
		{14, 1, 14, 3, 11},
		{14, 25, 3, 2, 1},
		{1, 18, 3, 21, 14}
	};

	int n = 5;
	findAndPrintCommonElements(mat, n);
	return 0;
}
