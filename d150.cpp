#include <iostream>
#include <algorithm>
using namespace std;

bool cmp (int a,int b)
{
	return a > b;
}

int main()
{
	int n, t;
	int arr[20000] = {0};
	int ans, index;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		ans = 0;
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[j]);
		}
		sort(arr, arr + n, cmp);
		index = 2;
		while (index < n)
		{
			ans += arr[index];
			index += 3;
		}
		printf("%d\n",ans);
	}
}