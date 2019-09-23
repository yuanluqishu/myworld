#include<iostream>
#include<sstream>
#include<string>
#include<set>
#include<map>

using namespace std;
int x, y, m, n;
int s = 0;
int step(int x1,int y1,int x2,int y2)
{
	if (x == x1 && y == y1)return s;
	if(x2>=x1+2)
}

int main()
{
	int a[400][400];
	
	cin >> n >> m >> x >> y;
	a[x][y] = 0;

	

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
