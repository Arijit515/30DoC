#include <bits/stdc++.h>
#define N 4
using namespace std;

bool isDiagonalMatrix(int mat[N][N])
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)

			if ((i != j) && (mat[i][j] != 0))
				return false;
	return true;
}

int main()
{
	int mat[N][N] = { { 4, 0, 0, 0 },
					{ 0, 7, 0, 0 },
					{ 0, 0, 5, 0 },
					{ 0, 0, 0, 1 } };

	if (isDiagonalMatrix(mat))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
