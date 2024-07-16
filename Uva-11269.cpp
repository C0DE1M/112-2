#include <iostream>
#include <algorithm>
using namespace std;

bool cmp (pair <int, int> a, pair <int, int> b)
{
	return (a.first + max(a.second, b.first) + b.second < b.first + max(b.second, a.first) + a.second);
}

int main()
{
	pair <int, int> arr[20];
	int n, S, G;//S for Sultan G for Golapibaba
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i].first);
		}
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i].second);
		}
		sort(arr, arr + n, cmp);
		S = arr[0].first;
		G = arr[0].first + arr[0].second;
		for (int i = 1; i < n; i++)
		{
			S += arr[i].first;
			G = max(S, G) + arr[i].second;
		}
		printf("%d\n", G);
	}
}