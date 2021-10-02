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

#include<iostream>
#include<cstdlib>
#include<cstring>


using namespace std;

class control
{
char url[100];
void archive_fo();
void internet_archive();
void web_request( char *);
void web_request2(char *,char *);
void web( char *);
void google_cache();
void google_weblight();
void startpage();
void searx();
void cloud();
void pdfcrowd();
void pdfmyurl();
void proxysite();
void hidester();
void kproxy();
void hideproxy();
void hma();
void load(int);
public:
void check_internet();
void get_url();
void menu();
};

//To check if internet connection is available or not.
void control::check_internet()
{
    if (system("ping tails.boum.org")!=0)
    {
        system("cls");
        cout<<" \nInternet Connection is Not Available!\n ";
        system("timeout 10");
        exit(1);
    }
    system("cls");
}

// Function to get URL.
void control::get_url()
{
    cout<<"\n Enter URL: ";
    cin.getline(url,100);
}

// Template Function To Generate proxified url and load it in webbrowser.
void control::web_request( char service[100])
{
char cmd[300];
    strcpy(cmd,"start ");
    strcat(cmd,service);
    strcat(cmd,url);
    system(cmd);
}

// Template Function To Generate proxified url and load it in webbrowser.
void control::web_request2(char service[100],char service2[300])
{
    char cmd[300];
    strcpy(cmd,"start ");
    strcat(cmd,service);
    strcat(cmd,url);
    strcat(cmd,service2);
    system(cmd);
}

// Template Function To load url in webbrowser.
void control::web( char a[180])
{
	char tmp[200];
	strcpy(tmp,"start ");
	strcat(tmp,a);
	system(tmp);
}

//Connect Google cache Service.
void control::google_cache()
{
    web_request("https://webcache.googleusercontent.com/search?q=cache:");
}

//Connect Google Weblight service.
void control::google_weblight()
{
    web_request("https://googleweblight.com/i?u=");
}

//Connect Internet Archive service.
void control::internet_archive()
{
    web_request("https://web.archive.org/save/_embed/");
}

//Connect Archive fo Internet Archiving service.
void control::archive_fo()
{
    web_request("https://archive.fo/\?run=1^&url=");
}

//Connect Searx Search Engine Service.
void control::searx()
{
    web_request2("https://searx.info/\?q=","^&categories=general^&language=en-US");
}

//Connect Startpage Search Engine Service.
void control::startpage()
{
    web_request("https://www.startpage.com/do/search\?^&q=");
}

//Connect Proxysite Proxy service.
void control::proxysite()
{
    web_request2("https://eu6.proxysite.com/process.php?d=","^&b=1");
}

//Connect via.hypothesis Annotation service.
void control::cloud()
{
    web_request("https://via.hypothes.is/");
}

//Connect Kproxy proxy service.
void control::kproxy()
{
    web("https://kproxy.com/");
}

//Connect Hidester proxy service.
void control::hidester()
{
    web("https://hidester.com/proxy/");
}

//Connect hideproxy proxy service.
void control::hideproxy()
{
    web("https://hide.me/en/proxy");
}

//connect hidemyass proxy service.
void control::hma()
{
    web("https://www.hidemyass.com/proxy");
}

//Connect pdfcrowd webpage to PDF conversion service.
void control::pdfcrowd()
{
    web("https://pdfcrowd.com/");
}

//Connect pdfmyurl webpage to PDF conversion service.
void control::pdfmyurl()
{
    web("https://pdfmyurl.com/");
}

//Main Display Menu.
void control::menu()
{
    int x=0;int i=0;
    char ch;
    system("cls");
    cout<<"\n Select services given below to unblock website. \n\n";
    cout<<"Difficult To Block Services\n\n 1)Archive Fo \n 2)Internet Archive \n 3)Google Cache \n 4)Googleweblight \n 5)Searx \n 6)Startpage \n 7)Hypothes.is \n 8)Webpage to pdf using pdfcrowd \n 9)Webpage to pdf using pdfmyurl \n\nProxy Sites \n\n 10)Proxysite \n 11)Hidester Proxy \n 12)Kproxy  \n 13)Hide.me Proxy\n 14)HMA Proxy \n\n 15) Enter another URL  \n\nEnter Choice:";
    cin>>x;
    load(x);
 }

//Function to Load appropriate proxy service based on user selection.
void control::load(int x)
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
    case 8: {pdfcrowd();menu();break;}
    case 9: {pdfmyurl();menu();break;}
    case 10: {proxysite();menu();break;}
    case 11: {hidester();menu();break;}
    case 12: {kproxy();menu();break;}
    case 13: {hideproxy();menu();break;}
    case 14:  {hma();menu();break;}
    case 15: { char ch; cin.get(ch); get_url();  menu();
		break;
	}
    default: { menu();}
    }
}


int main()
{
    int x=0,i=0;char ch;
    system("title AntiCensorship Tool");
	control o;
    o.check_internet();
    o.get_url();
    o.menu();
    system("timeout 10");
    return 0;
}


