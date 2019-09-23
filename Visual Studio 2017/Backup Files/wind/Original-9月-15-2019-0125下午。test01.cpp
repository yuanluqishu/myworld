#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
	
	int a[100001] = { 0 };
	long long int sum = 6;
	int n,temp=0;
	cin >> n;
	a[1] = 1;
	if (n == 0)cout << "0";
	else {
		for (int j = 0; j < n; j++)
		
			for (int i = 1; i <=sum; i++)
			{
				a[i] *= (n-j);
				a[i] += temp;
				temp = 0;
				if (a[i] >= 10)
				{
					temp = a[i] / 10;
					sum++;
				}
				a[i] %= 10;

			}
		for (int i = sum; i > 0; i--)
		{
			int k = 0;
			int j = i;
			while (a[i] != 0 && j > 0)
			{
				k = 1;
				cout << a[j];
				j--;
			}
			if (k == 1)break;
		}
	}
	return 0;
}

