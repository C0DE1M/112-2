#include <iostream>
#include <algorithm>
using namespace std;

bool cmp (int a, int b)
{
	return a > b;
}

int main()
{
	int n, m, index = 0;//m_t用的 
	long long ans = 0;
	scanf("%d %d", &n, &m);
	int metorite[n];
	int m_t[m];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &metorite[i]);
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &m_t[i]);
	}
	sort(metorite, metorite + n, cmp);
	sort(m_t, m_t + m, cmp);
	for (int i = 0; i < n; i++)
	{
		if (index == m)
		{
			break;
		}
		if (m_t[index] >= metorite[i])
		{
			ans += metorite[i];
			index += 1;
		}
	}
	printf("%lld", ans);
}