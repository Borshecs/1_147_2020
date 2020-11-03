#include <iostream>
using namespace std;

int main()
{
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			if ( x <= y )
			{
				cout << "*";
			}
			else
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}

