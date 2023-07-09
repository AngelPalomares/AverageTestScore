#include <iostream>
using namespace std;

int main()
{
	int Tests[5] = {};

	int average = 0;
	int overallscore;

	cout << "Welcome to the test average finder" << endl;
	cout << "Please input the tests into the average grader" << endl;

	for (int i = 0; i < 5; i++)
	{
		do
		{
			cout << "Please input for test #" << (i + 1) << endl;
			cin >> Tests[i];
			average += Tests[i];
		} while (Tests[i] > 100);
	}
	overallscore = (average / 5);

	cout << "This is your average test scores" << overallscore << endl;

	return 0;
}
