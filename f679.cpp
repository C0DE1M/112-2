#include <iostream>
using namespace std;
bool bs (int arr[], int l, int r, int num)
{
	int mid;
	while (l <= r)
	{
		mid = (l + r) / 2;
		if (arr[mid] == num) return 1;
		else if (arr[mid] < num)
		{
			l = mid + 1;
		}
		else if (arr[mid] > num)
		{
			r = mid - 1;
		}
	}
	return 0;
}
int main()
{
	int n, q, num;
	scanf("%d %d", &n, &q);
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < q; i++)
	{
		scanf("%d", &num);
		if (bs(arr, 0, n - 1, num))
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
}