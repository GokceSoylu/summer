#include <stdio.h>
int fonk(char[], char[]);
int main()
{
    char kel[20], cum[100];
    int i;
    printf("\ncumleyi giirniz lutfen ");
    gets(cum);
    printf("\naramak istediginiz kelime nedir ");
    gets(kel);
    i=fonk(cum, kel);
    if(i==-1)
        printf("\ncumle icerisinde aradıgınız kelime bulunmamamktadir");
    else 
        printf("\naranan kelime cumle icinde bulunmustur indis = %d",i);
    return 0;
}
int fonk(char cum[], char kel[])
{
    int i=0, j=0, a;
    while(cum[i])//cum[i]!='\0' kontrolunun kısa yolu. İki ifade de doğru
    {
        a=1;
        for(j=0;kel[j];j++)
        {
            if(cum[i+j]!=kel[j])
            {
                a=0;
                break;
            }
        }
        if(a==1) return i;
        i++;
    }
    return -1;
}