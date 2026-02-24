//find minimum and maximum value

#include<stdio.h>
int main()
{

    int a[100];
    int n,i;
    int pos,neg,even,odd;

    printf("enter number of element:");
    scanf("%d",&n);

    printf("enter %d element:\n",n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=1;i<n;i++)
        {
            if(a[i]>0)
             pos++;
            if(a[i]<0)
             neg++;
            if(a[i]%2==0)
             even++;
            else
             odd++;
        }
        printf("positive=%d\n",pos);
        printf("negative=%d\n",neg);
        printf("even=%d\n",even);
        printf("odd=%d\n",odd);

        return 0;
}

