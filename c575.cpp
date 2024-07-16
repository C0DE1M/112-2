#include <iostream>
#include <algorithm>
using namespace std;

int n,k,ans;

bool search (int tmp[], int r)
{
	//printf("%d\n",r);
	int count = 0, pos;
	for (int i = 0; i < n; i++)
    {
		pos = tmp[i] + r;
		while (tmp[i] <= pos && i < n) i++;
		i--;
		count += 1;
	}
	return count <= k;
}

int bs (int min, int max, int tmp[])
{
	if (min >= max) return min;
	int mid = (min + max) / 2;
	if (search(tmp, mid)) return(bs(min, mid, tmp));
	else return (bs(mid + 1, max, tmp));
}

int main() {
	scanf("%d %d", &n, &k);
	int tmp[n];
	for(int i = 0; i < n; i++)
    {
		scanf("%d", &tmp[i]);
	}
	sort(tmp, tmp + n);
	if (k == 1){
		printf("%d", tmp[n-1] - tmp[0]);
	}
	else {
		printf("%d", bs(2, tmp[n-1] - tmp[0], tmp));
	}
}