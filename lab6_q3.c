#include <stdio.h>
void fonk(char[]);
int main()
{
    char txt[200];
    printf("metni giriniz lutfen ");
    gets(txt);
    fonk(txt);
    return 0;
}
void fonk(char txt[])
{
    int i=0, j, k;
    int a[122]={0}, A[90]={0};
    while(txt[i])
    {
        for(j=97;j<=122;j++)//kucuk harfler için
        {
            if(txt[i]==j)
            {
                a[j]++;
                break;
            }    
        }
        for(k=65;k<=90;k++)//buyuk harfler için
        {
            if(txt[i]==k)
            {
                A[k]++;
                break;
            }    
        }
        i++;
    }
    for(j=97;j<122;j++)
    {
        if(a[j]!=0)
            printf("\n%d adet %c",a[j], j);
    }
    for(k=65;k<90;k++)
    {
        if(A[k]!=0)
            printf("\n%d adet %c",A[k], k);
    }

}