#include <iostream>
using namespace std;

int main()
{
    int n, k, tmp, l, r, mid;
    bool flag;
    int arr[100000];
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &tmp);
        l = 0;
        r = n - 1;
        flag = 1;
        while (l <= r && flag)
        {
            mid = (l + r) / 2;
            if (arr[mid] == tmp)
            {
                printf("%d\n", mid + 1);
                flag = 0;
            }
            else if (arr[mid] < tmp)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (flag)
        {
            printf("0\n");
        }
    }
}