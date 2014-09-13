#include <stdio.h>

inline long long int abs_(long long int x)
{
    return x > 0 ? x : -x;
}

inline long long int min(long long int a, long long int b)
{
    return a < b ? a : b;
}

long long int process()
{
    long long int x, y, x1, y1, x2, y2;
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld %lld %lld", &x, &y, &x1, &y1, &x2 ,&y2);
    a = abs_(x - x1);
    b = abs_(y - y2);
    c = abs_(x2 - x);
    d = abs_(y - y1);
    long long int temp1, temp2;
    temp1 = min(a, b);
    temp2 = min(b, c);
    return min(temp1, temp2);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        printf("%lld\n", process());
    }
    return 0;
}
