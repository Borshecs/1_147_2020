#include <iostream>
using namespace std;

int main()
{
	int k = 11;
	int n = 11;
	for (int x = 1; x < k; x++)
	{
		for (int y = 1; y < n; y++)
		{
			cout << "~";
		}
		cout << endl;
	}
	return 0;
}