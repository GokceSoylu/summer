#include <stdio.h>
int main()
{
    int counter=0;
    char metin[20];
    printf("meetninizi giriniz lutfen");
    gets(metin);
    for(int i=0;metin[i];i++)
    {
        if(metin[i]==' ')
            counter++;
    }
    printf("girilen metinde %d adet kelime bulunmaktadır",counter+1);
    return 0;
}
