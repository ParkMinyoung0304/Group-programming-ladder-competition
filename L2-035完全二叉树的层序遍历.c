#include <stdio.h>
#include <stdlib.h>
int n;
int a[40];
void creatTree(int root)
{
    if(root>n)
        return;
    creatTree(root*2);
    creatTree(root*2+1);
    scanf("%d",&a[root]);
}
int main()
{
    scanf("%d",&n);
    creatTree(1);
    printf("%d",a[1]);
    for(int i=2;i<=n;i++)
        printf(" %d",a[i]);
    return 0;
}

