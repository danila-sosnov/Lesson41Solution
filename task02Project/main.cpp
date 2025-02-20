#include <iostream>
using namespace std;

#define N 5
#define M 10

#define MAX_MARK 10



int main()
{


	int classes[N][M];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			classes[i][j] = rand() % (MAX_MARK + 1);
		}

	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << classes[i][j] << " " ;
		}

		cout << endl;

	}


	for (int i = 0; i < N; i++)
	{
		double avg = 0;

		for (int j = 0; j < M; j++)
		{
			avg += classes[i][j];
		}

		avg /= M;

		cout << (i + 1) << ") average value is " << avg << endl;

	}


	return 0;
}