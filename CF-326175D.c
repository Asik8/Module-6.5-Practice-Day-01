#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main()
{
    lli a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

    if(a*b+c == d)
        printf("YES\n");

    else if(a+b*c == d)
        printf("YES\n");

    else if(a*b-c == d)
        printf("YES\n");

    else if(a-b*c == d)
        printf("YES\n");

    else if(a+b-c == d)
        printf("YES\n");

    else if(a-b+c == d)
        printf("YES\n");

    else
        printf("NO\n");

    return 0;
}