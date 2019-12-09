
// AntiCensorship Tool
// Copyright (C) 2018-2019 M.Anish <aneesh25861@gmail.com>

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

/* This is a Stable Release . Developed by M.Anish only */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char url[100];

void load(int);
void menu(void);

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
    printf("\n Enter URL: ");
    gets(url);
}

void web_request( char service[100])
{
char cmd[300];
    strcpy(cmd,"start ");
    strcat(cmd,service);
    strcat(cmd,url);
    system(cmd);
}

void web_request2(char service[100],char service2[300])
{
    char cmd[300];
    strcpy(cmd,"start ");
    strcat(cmd,service);
    strcat(cmd,url);
    strcat(cmd,service2);
    system(cmd);
}
void google_cache()
{
    web_request("https://webcache.googleusercontent.com/search?q=cache:");
}

void google_weblight()
{
    web_request("https://googleweblight.com/i?u=");
}

void internet_archive()
{
    web_request("https://web.archive.org/save/_embed/");
}
void archive_fo()
{
    web_request("https://archive.fo/\?run=1^&url=");
}

void searx()
{
    web_request2("https://searx.me/\?q=","^&categories=general^&language=en-US");
}

void startpage()
{
    web_request("https://www.startpage.com/do/search\?^&q=");
}

void proxysite()
{
    web_request2("https://eu6.proxysite.com/process.php?d=","^&b=1");
}

void cloud()
{
    web_request("https://via.hypothes.is/");
}
void kproxy()
{
    system("start https://kproxy.com/");
}

void hidester()
{
    system("start https://hidester.com/proxy/");
}

void hideproxy()
{
    system("start https://hide.me/en/proxy");
}

void hma()
{
    system("start https://www.hidemyass.com/proxy");
}
void menu()
{
    int x=0;int i=0;
    char ch;
    system("cls");
   printf("\n Menu:-\n\n Select services given below to unblock website. \n\n");
    printf("Difficult To Block Services\n\n 1)Archive Fo \n 2)Internet Archive \n 3)Google Cache \n 4)Googleweblight \n 5)Searx \n 6)Startpage \n 7)Hypothes.is \n\nProxy Sites \n\n 8)Proxysite \n 9)Hidester Proxy \n 10)Kproxy  \n 11)Hide.me Proxy\n 12)HMA Proxy \n\nEnter Choice:");
    while(i!=1)
    {
    i=scanf("%d",&x);
    if (i!=1){
    printf("\n Please Enter a valid integer as a choice!");
    ch=scanf("%c",&ch);
    }
    }
    load(x);
 }

void load(int x)
{
    switch(x)
    {
    case 1: {archive_fo(); menu();break;}
    case 2: {internet_archive();menu(); break;}
    case 3: {google_cache();menu(); break;}
    case 4: { google_weblight();menu(); break;}
    case 6:{ startpage();menu();break;}
    case 5: {searx();menu();break;}
    case 7: {cloud();menu();break;}
    case 8: {proxysite();menu();break;}
    case 9: {hidester();menu();break;}
    case 10: {kproxy();menu();break;}
    case 11: {hideproxy();menu();break;}
    case 12:  {hma();menu();break;}
    default: { menu();exit(0);}
    }
}

void main()
{
    int x=0,i=0;char ch;
    system("title AntiCensorship Tool");
    check_internet();
    get_url();
    menu();
    system("timeout 10");
}
