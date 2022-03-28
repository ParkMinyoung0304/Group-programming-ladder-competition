#include <stdio.h>
#include <stdlib.h>
int n;
int a[99];
void createTree(int root)  //这里需要注意以下语句执行顺序，虽然是顺序执行，但由于有递归所以要注意
{
    if(root>n)
        return;
    creatTree(root*2);     //这里执行后，会直接跳转到下一个递归，以下语句在本次执行中都会被挂起，root值的变化为 1 2 4 8 16，但16会return，然后在执行root=8时候的递归，
                           //执行的下一条语句虽然是--creatTree(root*2+1);--，但是此时的root是8，不是一开始的1，注意辨别
    creatTree(root*2+1);
    cin >> a[root];  //巧妙地把最底层且先左后右的把输入值赋值
}
int main()
{
    scanf("%d",&n);
    createTree(1); //创建一棵树，并且赋予root=1来激活函数
    cout<<a[1]; //先打印第一个，本来是可以连着下面一起打印的，但是由于空格原因，如果一起则会导致输出最前面多一个空格或者最后面多一个空格
    for(int i=2;i<=n;i++)//层序遍历即可
        cout<<" "<<a[i];
    return 0;
}

