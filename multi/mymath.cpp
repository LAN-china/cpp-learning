#include "mymath.h"

int maxof(int a,int b)
{
 if (a>b)
 {
    return a;
 }
else{
    return b;
}
}
long long factorial(int n)
{
    long long result=1;
    for (int i=1;i<=n;i++)
    {
        result=result*i;
    }
    return result;
}