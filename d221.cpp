#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	int arr[5000];
	long long cost;
	scanf("%d", &n);
	while (n)
	{
		for (int i = 0;i < n; i++)
		{
			scanf("%d", &arr[i]);
		}
		cost = 0;
		for (int i = 0; i < n - 1; i++)
		{
			sort(arr + i, arr + n);
			arr[i + 1] = arr[i] + arr[i + 1];
			cost += arr[i + 1];
		}
		printf("%lld\n", cost);
		scanf("%d", &n);
	}
}