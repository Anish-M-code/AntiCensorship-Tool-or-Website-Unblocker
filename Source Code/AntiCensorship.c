
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char url[500];
void check_internet()
{
    if (system("ping tails.boum.org")!=0)
    {
        system("cls");
        printf(" \nInternet Connection is Not Available!\n ");
        system("timeout 10");
        exit(1);
    }
    system("cls");
}

void get_url()
{
    printf("\nEnter URL: ");
    gets(url);
}

void google_cache()
{
    char cmd[600];
    strcpy(cmd,"start ");
    strcat(cmd,"https://webcache.googleusercontent.com/search?q=cache:");
    strcat(cmd,url);
    system(cmd);
}

void google_weblight()
{
    char cmd[600];
    strcpy(cmd,"start ");
    strcat(cmd,"https://googleweblight.com/i?u=");
    strcat(cmd,url);
    system(cmd);
}

void internet_archive()
{
    char cmd[600];
    strcpy(cmd,"start ");
    strcat(cmd,"https://web.archive.org/save/_embed/");
    strcat(cmd,url);
    system(cmd);
}
void archive_fo()
{
    char cmd[600];
    strcpy(cmd,"start ");
    strcat(cmd,"https://archive.fo/\?run=1^&url=");
    strcat(cmd,url);
    system(cmd);
}
void main()
{
    int x=0,i=0;char ch;
    system("title AntiCensorship Tool");
    check_internet();
    get_url();
    printf("\n Anti-Censorship Menu:-\n\n");
    printf(" 1)Archive Fo \n 2)Internet Archive \n 3)Google Cache \n 4)Googleweblight \n\nEnter Choice:");
    while(i!=1){
    i=scanf("%d",&x);
    ch=scanf("%c",&ch);
    if ((i!=1)||(x<1)||(x>4))
    printf("\n Please Enter a valid integer as a choice!");
    }
    switch(x)
    {
    case 1: {archive_fo(); break;}
    case 2: {internet_archive(); break;}
    case 3: {google_cache(); break;}
    case 4: { google_weblight(); break;}
    }
    system("timeout 10");
}
