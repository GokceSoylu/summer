#include <stdio.h>
int fonk(char[], char[]);
int main()
{
    char w1[20], w2[20];
    int i;
    printf("\niki kelime giriniz lutfen  ");
    gets(w1);
    gets(w2);
    i=fonk(w1,w2);
    if(i==0)
        printf("\niki kelime kelime aynıdır");
    else if(i==1)
        printf("\niki kelime ayni degildir\nuzun kelime %s",w1);
    else if(i==2)
        printf("\niki kelime ayni degildir\nuzun kelime %s",w2);
    else
        printf("\niki kelime ayni degildir\nkelimelerin uzunluklari esittir");
    return 0;
}
int fonk(char w1[], char w2[])
{
    int i=0, a=1, j;
    while(w1[i] && w2[i] )
    {
        if(w1[i]!=w2[i])
        {
            a=0;
            break;
        }
        i++;
    } 
    if(a==1) return 0;//iki kelime aynı
    
    for(i=0;w1[i]!='\0';i++);
    for(j=0;w2[j]!='\0';j++);
    if(i>j) return 1;
    else if(j>i) return 2;
    else return 3;
}