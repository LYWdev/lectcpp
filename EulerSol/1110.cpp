#include <iostream>
#define MUL(a,b) a*b

int main(void)
{
    int row,col,num=0;
    scanf("%d",&num);

    if(num ==1)
    {
        printf("%d\n",num*2);
        return 0;
    }

    if(num%2==0)
    {
        col = (num/2)+1;
        row = (num/2)+1;
        printf("%d\n",MUL(col,row));

        return 0;
    } 

    if(num%2!=0)
    {
        row = (num/2)+2;
        col = (num/2)+1;
        printf("%d\n", MUL(col,row));

        return 0;
    }

    return 0;

} 