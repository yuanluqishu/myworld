#include <iostream>
#include<iomanip>
#include<math.h>
#include<string>
using namespace std;

//int main()
//{
//	
//	int a[100001] = { 0 };
//	int sum = 6;
//	int n,temp=0;
//	cin >> n;
//	a[1] = 1;
//	if (n == 0)cout << "0";
//	else {
//		for (int j = 0; j < n; j++)
//		
//			for (int i = 1; i <=sum; i++)
//			{
//				a[i] *= (n-j);
//				a[i] += temp;
//				temp = 0;
//				if (a[i] >= 10)
//				{
//					temp = a[i] / 10;
//					sum++;
//				}
//				a[i] %= 10;
//
//			}
//		for (int i = sum; i > 0; i--)
//		{
//			int k = 0;
//			int j = i;
//			while (a[i] != 0 && j > 0)
//			{
//				k = 1;
//				cout << a[j];
//				j--;
//			}
//			if (k == 1)break;
//		}
//	}
//	return 0;
//}

int main()
{
	string s;
	string a;
	char c;
	int j = 0;
	cin >> s;
	int i = 0;
	while (s[i] != NULL)
	{
		if (s[i] == '0')
		{
			i++;
			continue;
		}
		int j = i+1;
		while (s[j]!=NULL)
		{
			if (s[j] == '0')
			{
				j++;
				continue;
			}
			if (s[j] == s[i])s[i]=0;
			j++;
		}
		i++;
	}
}