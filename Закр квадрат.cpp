#include <iostream>
using namespace std;

int main()
{
	int a = 20;
	int b = 20;
	for (int i = 1; i < a; i++)
	{
		for (int j = 1; j < b; j++)
		{
			cout << "@";
		}
		cout << endl;
	}
	return 0;
}