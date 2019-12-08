
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

/* This software was developed when M.Anish found googleweblight could be used to bypass detection of
malicious urls by bitdefender. To make this discovery for a good use than evil . */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char url[500];

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

void menu()
{
    int x=0;int i=0;
    char ch;
    system("cls");
    get_url();
    system("cls");
   printf("\n Anti-Censorship Menu:-\n\n");
    printf(" 1)Archive Fo \n 2)Internet Archive \n 3)Google Cache \n 4)Googleweblight \n 5)All \n\nEnter Choice:");
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
    case 5: {archive_fo();internet_archive();google_cache();google_weblight();break;}
    case 12: {archive_fo();internet_archive();break;}
    case 123: { archive_fo();internet_archive();google_cache();break;}
    case 124: { archive_fo();internet_archive(); google_weblight();break;}
    case 34: {google_cache();google_weblight();break;}
    default: { menu();exit(0);}
    }
}

void main()
{
    int x=0,i=0;char ch;
    system("title AntiCensorship Tool");
    check_internet();
    menu();
    system("timeout 10");
}
