#include <algorithm>
#include <iostream>
using namespace std;

pair<int, int> arr[1000];

bool cmp (pair <int, int> a, pair <int, int> b)
{
    return a.second > b.second;
}
int main()
{
    int n, time, tl[1000] = {0};
    while ( scanf("%d", &n) != EOF)
    {
        time = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &arr[i].first, &arr[i].second);
        }
        sort(arr, arr + n, cmp);
        for (int i = 0; i < n; i++)
        {
            time += arr[i].first;
            tl[i] = time;
        }
        for (int j = 0; j < n; j++)
        {
            time = max(time, tl[j] + arr[j].second);
        }
        printf("%d\n", time);
    }
}