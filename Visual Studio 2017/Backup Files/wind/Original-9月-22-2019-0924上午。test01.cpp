#include<iostream>
#include<sstream>
#include<string>
#include<set>
#include<map>

using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	int x = s1.rfind(s2);
	if (x != -1)
		cout << x;
	else
		cout << "NULL";
	

}
//int main()
//{
//	
//	int a[100001] = { 0 };
//	int n,temp=0;
//	int sum = 1;
//	cin >> n;
//	a[1] = 1;
//	if (n == 0)cout << "0";
//	else {
//		for (int j = 1; j <= n; j++)
//		for (int i = 1; i <=sum; i++)
//			{
//				a[i] *= j;
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
//				cout << a[i];
//			
//	}
//	return 0;
//}
