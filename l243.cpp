#include <iostream>
#include <algorithm>
using namespace std;

bool cmp (int a, int b)
{
	return a < b;
}

int main()
{
    int n, now, ans;
	scanf("%d", &n);
	int arr[200];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n, cmp);
	now = 0;
	ans = 0;
	for (int i = 0; i < n; i++)
	{
		now += arr[i];
		ans += now;
	}
	printf("%d",ans);
}