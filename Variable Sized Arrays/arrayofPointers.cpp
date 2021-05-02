#include<iostream>
#include<string>
#include<time.h>
using namespace std;
//2 2
//3 1 5 4
//5 1 2 8 9 3
//0 1
//1 3
int main()
{
	
	int i, j;
	cin >> i;
	cin >> j;
	int** p;
	p = new int* [i];
	//a[i]~*(a+i)
	for (int n = 0; n < i; n++)
	{
		int s;//size of sub arr
		cin >> s;
		*(p + n) = new int[s];
		for (int m = 0; m < s; m++)
		{
			cin >> p[n][m];
		}
	}
	for (int n = 0; n < j; n++)
	{
		int x, y;
		cin >> x;
		cin >> y;
		cout << p[x][y];
	}
	return 1;
}
