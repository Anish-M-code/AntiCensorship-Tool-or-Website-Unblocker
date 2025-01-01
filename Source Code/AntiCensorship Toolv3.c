
// AntiCensorship Tool
// Copyright (C) 2018-2025 M.Anish <aneesh25861@gmail.com>

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
    if (system("ping google.com")!=0)
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

//Connect Browser.lol service
void browser_lol()
{
    web("https://browser.lol");
}

//connect to network chuck
void network_chunk()
{
    web("https://browser.networkchuck.com/");
}

//Connect Internet Archive service.
void internet_archive()
{
    web_request("https://web.archive.org/save/_embed/");
}

//Connect Archive fo Internet Archiving service.
void archive_fo()
{
    web_request("https://archive.fo/");

}

void archive_ph()
{
    web_request("https://archive.ph/");

}

//Connect Startpage Search Engine Service.
void startpage()
{
    web_request("https://www.startpage.com/do/search\?^&q=");
}

//Connect GeoTargetly Proxy service.
void geotargetly()
{
    web_request("https://geotargetly.com/geo-browse?geobrowse=");
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
    web("https://www.proxysite.com/");
}

//Connect hideproxy proxy service.
void hideproxy()
{
    web("https://hide.me/en/proxy");
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

//Connect Browserling Testing service.
void browserling()
{
    web_request("https://www.browserling.com/browse/win10/chrome127/");
}

//Connect Ghost Archive service.
void ghost()
{
    web_request("https://ghostarchive.org/search?term=");
}

void removepaywall()
{
    web_request("https://www.removepaywall.com/search?url=");
}

void l2ftio()
{
    web_request("https://12ft.io/");
}

void locabrowser()
{
    web("https://www.locabrowser.com/");
}

void visual()
{
    web("https://visualping.io/");
}

//Main Display Menu.
void menu()
{
    int x=0;int i=0;
    char ch;
    system("cls");
   printf("\n Select services given below to unblock website. \n\n");
    printf("Difficult To Block Services\n\n 1)Archive Fo \n 2)Internet Archive \n 3)Archive Today 4)Ghost Archive \n 5)Browserling \n 6)Startpage \n 7)Hypothes.is \n 8)Webpage to pdf using pdfcrowd \n 9)Webpage to pdf using pdfmyurl \n 10)Browser lol virtual browser \n 11)Network chunk cloud Browser \n 12)Visual ping website change Detection \n 13)LocaBrowser website Testing \n 14)Geotargetly website Testing \n 15)12ft.io remove paywall \n 16)Remove paywall \n\nProxy Sites \n\n 17)KProxy \n 18)Hideme Proxy \n 19)Hidester Proxy\n 20)Enter another URL  \n\nEnter Choice:");
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
    case 1: {archive_fo();break;}
    case 2: {internet_archive(); break;}
    case 3: {archive_ph(); break;}
    case 4: { ghost(); break;}
	case 5: { browserling(); break;}
    case 6:{ startpage();break;}
    case 7: {cloud();break;}
    case 8: {pdfcrowd();break;}
    case 9: {pdfmyurl();break;}
    case 10: { browser_lol();break;}
    case 11: { network_chunk();break;}
	case 12: { visual();break;}
	case 13: { locabrowser();break;}
	case 14: { geotargetly();break;}
    case 15: { l2ftio();break;}
	case 16: { removepaywall();break;}
    case 17: { kproxy();break;}
    case 18: { hideproxy();break;}
    case 19: { hidester();break;}
    case 20: { scanf("%c",&ch);get_url();menu();
		break;
	}
    default: { menu();}
    }
	menu();
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

