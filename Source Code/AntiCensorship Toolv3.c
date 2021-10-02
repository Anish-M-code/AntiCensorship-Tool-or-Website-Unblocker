
// AntiCensorship Tool
// Copyright (C) 2018-2020 M.Anish <aneesh25861@gmail.com>

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

//To check if internet connection is available or not.
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

// Function to get URL.
void get_url()
{
    printf("\n Enter URL: ");
    gets(url);
}

// Template Function To Generate proxified url and load it in webbrowser.
void web_request( char service[100])
{
char cmd[300];
    strcpy(cmd,"start ");
    strcat(cmd,service);
    strcat(cmd,url);
    system(cmd);
}

// Template Function To Generate proxified url and load it in webbrowser.
void web_request2(char service[100],char service2[300])
{
    char cmd[300];
    strcpy(cmd,"start ");
    strcat(cmd,service);
    strcat(cmd,url);
    strcat(cmd,service2);
    system(cmd);
}

// Template Function To Generate proxified url and load it in webbrowser.
void web( char a[180])
{
	char tmp[200];
	strcpy(tmp,"start ");
	strcat(tmp,a);
	system(tmp);
}

//Connect Google cache Service.
void google_cache()
{
    web_request("https://webcache.googleusercontent.com/search?q=cache:");
}

//Connect Google Weblight service.
void google_weblight()
{
    web_request("https://googleweblight.com/i?u=");
}

//Connect Internet Archive service.
void internet_archive()
{
    web_request("https://web.archive.org/save/_embed/");
}

//Connect Archive fo Internet Archiving service.
void archive_fo()
{
    web_request("https://archive.fo/\?run=1^&url=");
}

//Connect Searx Search Engine Service.
void searx()
{
    web_request2("https://searx.info/\?q=","^&categories=general^&language=en-US");
}

//Connect Startpage Search Engine Service.
void startpage()
{
    web_request("https://www.startpage.com/do/search\?^&q=");
}

//Connect Proxysite Proxy service.
void proxysite()
{
    web_request2("https://eu6.proxysite.com/process.php?d=","^&b=1");
}

//Connect via.hypothesis Annotation service.
void cloud()
{
    web_request("https://via.hypothes.is/");
}

//Connect Kproxy proxy service.
void kproxy()
{
    web("https://kproxy.com/");
}

//Connect Hidester proxy service.
void hidester()
{
    web("https://hidester.com/proxy/");
}

//Connect hideproxy proxy service.
void hideproxy()
{
    web("https://hide.me/en/proxy");
}

//connect hidemyass proxy service.
void hma()
{
    web("https://www.hidemyass.com/proxy");
}

//Connect pdfcrowd webpage to PDF conversion service.
void pdfcrowd()
{
    web("https://pdfcrowd.com/");
}

//Connect pdfmyurl webpage to PDF conversion service.
void pdfmyurl()
{
    web("https://pdfmyurl.com/");
}

//Main Display Menu.
void menu()
{
    int x=0;int i=0;
    char ch;
    system("cls");
   printf("\n Select services given below to unblock website. \n\n");
    printf("Difficult To Block Services\n\n 1)Archive Fo \n 2)Internet Archive \n 3)Google Cache \n 4)Googleweblight \n 5)Searx \n 6)Startpage \n 7)Hypothes.is \n 8)Webpage to pdf using pdfcrowd \n 9)Webpage to pdf using pdfmyurl \n\nProxy Sites \n\n 10)Proxysite \n 11)Hidester Proxy \n 12)Kproxy  \n 13)Hide.me Proxy\n 14)HMA Proxy \n\n 15)Enter Another URL \n\nEnter Choice:");
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

//Function to Load appropriate proxy service based on user selection. 
void load(int x)
{
	char ch;
    switch(x)
    {
    case 1: {archive_fo(); menu();break;}
    case 2: {internet_archive();menu(); break;}
    case 3: {google_cache();menu(); break;}
    case 4: { google_weblight();menu(); break;}
    case 6:{ startpage();menu();break;}
    case 5: {searx();menu();break;}
    case 7: {cloud();menu();break;}
    case 8: {pdfcrowd();menu();break;}
    case 9: {pdfmyurl();menu();break;}
    case 10: {proxysite();menu();break;}
    case 11: {hidester();menu();break;}
    case 12: {kproxy();menu();break;}
    case 13: {hideproxy();menu();break;}
    case 14:  {hma();menu();break;}
    case 15: { scanf("%c",&ch);get_url();menu();break;}
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

