//frequency of characters in a string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int freq[26]={0};
    printf("enter string:"); scanf("%s",str);
    for (int i=0;i<strlen(str);i++)
    {
        int ch;
        ch = str[i];
        freq[ch-'a']++;
    }
    for (int i=0;i<26;i++)
    {
        if (freq[i]!=0)
        {
            printf("\nFrequency of %c:%d",'a'+i,freq[i]);
        }
    }
}