#include <iostream>
using namespace std;


int n, k;
int arr [200000];
int post [5000];

bool op (int high)
{
    int l = 0, j;
    bool flag;
    for (int i = 0; i < n; i++)
    {
        flag = 1;
        for (j = i; j < i + post[l]; j++)
        {
            if (arr[j] < high || j >= n)
            {
                i = j;
                flag = 0;
                break;
            }
        }
        if (i != j) i = j - 1;
        if (flag)
        {
            //printf("---%d %d\n", i, l);
            if (++l == k)
            {
                return 1;
            }
        }
    }
    return 0;
}

int bs (int h, int t)
{
    int mid, max_h = 0;
    while (h <= t)
    {
        mid = (h + t) / 2;
        //printf("mid%d\n",mid);
        if (op(mid))
        {
            max_h = mid;
            h = mid + 1;
        }
        else
        {
            t = mid - 1;
        }
    }
    return max_h;
}

int main()
{
    int m_h = 0;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        m_h = max(m_h, arr[i]);
    }
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &post[i]);
    }
    printf("%d", bs(1, m_h));
}