#include <stdio.h>
int main()
{
    int n, m, a, b, ans1, ans2, temp;
    scanf("%d %d %d %d", &n, &m, &a, &b);
    ans1 = n*a;
    
    ans2 = ((n/m) * b);
    temp = ((n%m) * a);
    if(n%m!=0 && ans2+b<ans2+temp)
        ans2 += b;
    else
        ans2 += temp;

    if(ans1<ans2)
        printf("%d\n", ans1);
    else
        printf("%d\n", ans2);
        
    return 0;
}