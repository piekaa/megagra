#include <iostream>
#include <cmath>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <fstream>
using namespace std;
int main()
{
pocz:
//menu
int inst,inst2,bron1,czynnosc,b,powalce,wsklepie,mocm,prm,zyciemm,kosztmp=0,bieganies=0,speed=0,odnawianiebiegania=0,speedtime=0,mpbieganie,wlbieganie=0,speeds=0;
int times=0,jro=0,jros=0,rejro=0,wljro=0,mpjro=0,uniki=0,unikis=0,unikiszansa=0,wluniki=0,tuniki=0,reuniki=0,mpuniki=0,timeuniki=0;
int za=0,zas=0,reza=0,tza=0,wlza=0,za1=0,za2=0,za3=0,mpza=0,crhp=0,crhps=0,recrhp=0,tcrhp=0,wlcrhp=0,timecrhp=0,mpcrhp=0;
int crmp=0,crmps=0,tcrmp=0,timecrmp=0,recrmp=0,wlcrmp=0,hdm=0,hdms=0,hphdm=0,drain=0,drains=0,redrain=0,mpdrain=0,drain1=0,drain2=0;
//Bronie
int luk1,kamienie1,badyl1,bonusy,pr=3,zasieg,moc,reuse,wybskill,wybskill2,koszt,kosztxp;
int nazwabroni=0,zwrot=0,tarcza=0,tr=0,tzwrot=0,sapek=0,sapek1=0,sapekm=0;
//Zycie mana itp
long long int zycie=50,mana=10,exp=1,kasa=1,maxhp=50,maxmp=10,redobr=0,leczenies=0,leczenie=0; 
// moby
int zyciem=40,manam=10,mk=0,koksiaz=0,koks1=0,koks2=0,koks3=0;
// dystans i inne
int dystans=15,odnawianie=0;
//zapis do pliku
int czyt,a,gzapis;
string nick,decyzja,sklepdec;
char save[30],save2[30];
int saw=1,say=10,sax=0,sar=0,sab=0,sac=0,lp,l=0,y=0,m=0,x=0;
long long int saz=1,z=1;
char w,f[30];






cout<<"Chcesz wczytac gre ?\n1-tak | 2-nie\n";
czyt=getch();
if (czyt=='1')
{
              
              
              
              
              
              
              
              
              
              
//pierwsze
ifstream iplik;
iplik.open("save",ios::in);
iplik>>a;
if(a!=1)
goto cyc;

// reszta
//exp
if(a==1)
exp=0;




z=1;
y=0;
l=0;




while(1)
    {
         
                       iplik>>w;
                      
                       if(w=='|')
                       break;
                       if(w=='*')
                       {
                                           l++;
                       }
                       if(w=='$')
                       {
                                  l=l/2;
                                  l=l-49;
                                  f[y]=l;
                                  y++;
                                  l=0;
                       }
    }

    y=y-1;
    x=y;
    while(x>=0)
    {
              m=f[x]-48;
             
              exp=exp+m*z;
              z=z*10;
              x--;
    }








//kasa
if(a==1)
kasa=0;


z=1;
y=0;
l=0;
x=0;



z=1;
y=0;
l=0;




while(1)
    {
         
                       iplik>>w;
                      
                       if(w=='|')
                       break;
                       if(w=='*')
                       {
                                           l++;
                       }
                       if(w=='$')
                       {
                                  l=l/2;
                                  l=l-49;
                                  f[y]=l;
                                  y++;
                                  l=0;
                       }
    }

    y=y-1;
    x=y;
    while(x>=0)
    {
              m=f[x]-48;
              kasa=kasa+m*z;
              z=z*10;
              x--;
    }

//hp
if(a==1)
maxhp=0;


z=1;
y=0;
l=0; 




while(1)
    {
                       iplik>>w;
                       if(w=='|')
                       break;
                       if(w=='*')
                       {
                                           l++;
                       }
                       if(w=='$')
                       {
                                  l=l/2;
                                  l=l-49;
                                  f[y]=l;
                                  y++;
                                  l=0;
                       }
    }

    y=y-1;
    
    x=y;
    while(x>=0)
    {
              m=f[x]-48;

             maxhp=maxhp+m*z;
              z=z*10;
              x--;
    }

//mp
if(a==1)
maxmp=0;


z=1;
y=0;
l=0;




while(1)
    {
                       iplik>>w;
                       if(w=='|')
                       break;
                       if(w=='*')
                       {
                                           l++;
                       }
                       if(w=='$')
                       {
                                  l=l/2;
                                  l=l-49;
                                  f[y]=l;
                                  y++;
                                  l=0;
                       }
    }

    y=y-1;
    
    x=y;
    while(x>=0)
    {
              m=f[x]-48;
              maxmp=maxmp+m*z;
              z=z*10;
              x--;
    }

// nick

//predkosc
if(a==1)
pr=0;


z=1;
y=0;
l=0;




while(1)
    {
                       iplik>>w;
                       if(w=='|')
                       break;
                       if(w=='*')
                       {
                                           l++;
                       }
                       if(w=='$')
                       {
                                  l=l/2;
                                  l=l-49;
                                  f[y]=l;
                                  y++;
                                  l=0;
                       }
    }

    y=y-1;
    
    x=y;
    while(x>=0)
    {
              m=f[x]-48;
              pr=pr+m*z;
              z=z*10;
              x--;
    }


//bron
if(a==1)
nazwabroni=0;


z=1;
y=0;
l=0;




while(1)
    {
                       iplik>>w;
                       if(w=='|')
                       break;
                       if(w=='*')
                       {
                                           l++;
                       }
                       if(w=='$')
                       {
                                  l=l/2;
                                  l=l-49;
                                  f[y]=l;
                                  y++;
                                  l=0;
                       }
    }

    y=y-1;
    
    x=y;
    while(x>=0)
    {
              m=f[x]-48;
             
              nazwabroni=nazwabroni+m*z;
              z=z*10;
              x--;
    }

//redobr
if(a==1)
redobr=0;


z=1;
y=0;
l=0;




while(1)
    {
                       iplik>>w;
                       if(w=='|')
                       break;
                       if(w=='*')
                       {
                                           l++;
                       }
                       if(w=='$')
                       {
                                  l=l/2;
                                  l=l-49;
                                  f[y]=l;
                                  y++;
                                  l=0;
                       }
    }

    y=y-1;
    
    x=y;
    while(x>=0)
    {
              m=f[x]-48;
              redobr=redobr+m*z;
              z=z*10;
              x--;
    }
    
    
//Leczenie

if(a==1)
leczenies=0;

z=1;
y=0;
l=0;




while(1)
    {
                       iplik>>w;
                       if(w=='|')
                       break;
                       if(w=='*')
                       {
                                           l++;
                       }
                       if(w=='$')
                       {
                                  l=l/2;
                                  l=l-49;
                                  f[y]=l;
                                  y++;
                                  l=0;
                       }
    }

    y=y-1;
    
    x=y;
    while(x>=0)
    {
              m=f[x]-48;
              leczenies=leczenies+m*z;
              z=z*10;
              x--;
    }

//bieganie
if(a==1)
bieganies=0;


z=1;
y=0;
l=0;




while(1)
    {
                       iplik>>w;
                       if(w=='|')
                       break;
                       if(w=='*')
                       {
                                           l++;
                       }
                       if(w=='$')
                       {
                                  l=l/2;
                                  l=l-49;
                                  f[y]=l;
                                  y++;
                                  l=0;
                       }
    }

    y=y-1;
    
    x=y;
    while(x>=0)
    {
              m=f[x]-48;
              bieganies=bieganies+m*z;
              z=z*10;
              x--;
    }



//jednorazowa redukcja obrazen

if(a==1)
jros=0;

z=1;
y=0;
l=0;




while(1)
    {
                       iplik>>w;
                       if(w=='|')
                       break;
                       if(w=='*')
                       {
                                           l++;
                       }
                       if(w=='$')
                       {
                                  l=l/2;
                                  l=l-49;
                                  f[y]=l;
                                  y++;
                                  l=0;
                       }
    }

    y=y-1;
    
    x=y;
    while(x>=0)
    {
              m=f[x]-48;
              jros=jros+m*z;
              z=z*10;
              x--;
    }


//Uniki

if(a==1)
unikis=0;

z=1;
y=0;
l=0;




while(1)
    {
                       iplik>>w;
                       if(w=='|')
                       break;
                       if(w=='*')
                       {
                                           l++;
                       }
                       if(w=='$')
                       {
                                  l=l/2;
                                  l=l-49;
                                  f[y]=l;
                                  y++;
                                  l=0;
                       }
    }

    y=y-1;
    
    x=y;
    while(x>=0)
    {
              m=f[x]-48;
              unikis=unikis+m*z;
              z=z*10;
              x--;
    }

//ZwiekrzonyAtak

if(a==1)
za=0;

z=1;
y=0;
l=0;




while(1)
    {
                       iplik>>w;
                       if(w=='|')
                       break;
                       if(w=='*')
                       {
                                           l++;
                       }
                       if(w=='$')
                       {
                                  l=l/2;
                                  l=l-49;
                                  f[y]=l;
                                  y++;
                                  l=0;
                       }
    }

    y=y-1;
    
    x=y;
    while(x>=0)
    {
              m=f[x]-48;
              zas=zas+m*z;
              z=z*10;
              x--;
    }

//Czasowy regen hp
if(a==1)
crhps=0;


z=1;
y=0;
l=0;




while(1)
    {
                       iplik>>w;
                       if(w=='|')
                       break;
                       if(w=='*')
                       {
                                           l++;
                       }
                       if(w=='$')
                       {
                                  l=l/2;
                                  l=l-49;
                                  f[y]=l;
                                  y++;
                                  l=0;
                       }
    }

    y=y-1;
    
    x=y;
    while(x>=0)
    {
              m=f[x]-48;
              crhps=crhps+m*z;
              z=z*10;
              x--;
    }




//Czasowy regen mp
if(a==1)
crmps=0;


z=1;
y=0;
l=0;




while(1)
    {
                       iplik>>w;
                       if(w=='|')
                       break;
                       if(w=='*')
                       {
                                           l++;
                       }
                       if(w=='$')
                       {
                                  l=l/2;
                                  l=l-49;
                                  f[y]=l;
                                  y++;
                                  l=0;
                       }
    }

    y=y-1;
    
    x=y;
    while(x>=0)
    {
              m=f[x]-48;
              crmps=crmps+m*z;
              z=z*10;
              x--;
    }

//HP do MP
if(a==1)
hdms=0;

z=1;
y=0;
l=0;




while(1)
    {
                       iplik>>w;
                       if(w=='|')
                       break;
                       if(w=='*')
                       {
                                           l++;
                       }
                       if(w=='$')
                       {
                                  l=l/2;
                                  l=l-49;
                                  f[y]=l;
                                  y++;
                                  l=0;
                       }
    }

    y=y-1;
    
    x=y;
    while(x>=0)
    {
              m=f[x]-48;
              hdms=hdms+m*z;
              z=z*10;
              x--;
    }

//Drain

if(a==1)
drains=0;

z=1;
y=0;
l=0;




while(1)
    {
                       iplik>>w;
                       if(w=='|')
                       break;
                       if(w=='*')
                       {
                                           l++;
                       }
                       if(w=='$')
                       {
                                  l=l/2;
                                  l=l-49;
                                  f[y]=l;
                                  y++;
                                  l=0;
                       }
    }

    y=y-1;
    
    x=y;
    while(x>=0)
    {
              m=f[x]-48;
              drains=drains+m*z;
              z=z*10;
              x--;
    }

//Tarcza
if(a==1)
tarcza=0;


z=1;
y=0;
l=0;




while(1)
    {
                       iplik>>w;
                       if(w=='|')
                       break;
                       if(w=='*')
                       {
                                           l++;
                       }
                       if(w=='$')
                       {
                                  l=l/2;
                                  l=l-49;
                                  f[y]=l;
                                  y++;
                                  l=0;
                       }
    }

    y=y-1;
    
    x=y;
    while(x>=0)
    {
              m=f[x]-48;
              tarcza=tarcza+m*z;
              z=z*10;
              x--;
    }

//Koks1

if(a==1)
koks1=0;

z=1;
y=0;
l=0;




while(1)
    {
                       iplik>>w;
                       if(w=='|')
                       break;
                       if(w=='*')
                       {
                                           l++;
                       }
                       if(w=='$')
                       {
                                  l=l/2;
                                  l=l-49;
                                  f[y]=l;
                                  y++;
                                  l=0;
                       }
    }

    y=y-1;
    
    x=y;
    while(x>=0)
    {
              m=f[x]-48;
              koks1=koks1+m*z;
              z=z*10;
              x--;
    }

//Koks2
if(a==1)
koks2=0;


z=1;
y=0;
l=0;




while(1)
    {
                       iplik>>w;
                       if(w=='|')
                       break;
                       if(w=='*')
                       {
                                           l++;
                       }
                       if(w=='$')
                       {
                                  l=l/2;
                                  l=l-49;
                                  f[y]=l;
                                  y++;
                                  l=0;
                       }
    }

    y=y-1;
    
    x=y;
    while(x>=0)
    {
              m=f[x]-48;
              koks2=koks2+m*z;
              z=z*10;
              x--;
    }

//Koks3
if(a==1)
koks3=0;


z=1;
y=0;
l=0;




while(1)
    {
                       iplik>>w;
                       if(w=='|')
                       break;
                       if(w=='*')
                       {
                                           l++;
                       }
                       if(w=='$')
                       {
                                  l=l/2;
                                  l=l-49;
                                  f[y]=l;
                                  y++;
                                  l=0;
                       }
    }

    y=y-1;
    
    x=y;
    while(x>=0)
    {
              m=f[x]-48;
              koks3=koks3+m*z;
              z=z*10;
              x--;
    }


iplik>>nick;





iplik.close();





if(nazwabroni=='1')
{
                 zasieg=12;
                 moc=10;
                 reuse=4;
}
if(nazwabroni=='2')
{
                 zasieg=1;
                 moc=7;
                 reuse=1;
}
if(nazwabroni=='3')
{
                 zasieg=8;
                 reuse=3;
                 moc=5;
}

















if(a==1)
{
         system ("pause");
        goto popierwszejwalce;
       
        }
        else
        {
            cyc:
            cout<<"Nie masz jeszcze zapisanej gry\n";
            exp=1;
            }
        }
if (czyt==2)
cout<<"nie to nie\n";  
        
        
        
        
        

cout<<"Postepuj z instrukcjami programu!\n";
cout<<"nick ?\n";
cin>>nick;
poczatek:
cout<<"1-Start\n2-Instrukcje\n";
inst=getch();
if (inst=='2')
{
cout<<"Wszystko co wpisujesz powinno byc w jednym wyrazie, chyba ze program\npoprosi inaczej. Nie wpusuj nieczego powyrzej 15 znakow\nchyba ze program poprosi inaczej\n";

goto poczatek;
}
//Tu sie zaczyna sie gra 
if (inst=='1')
{
cout<<"No to "<<nick<<" zaczynamy\n";
cout<<"Walka polega na unicestwieniu przeciwnika\nJesli posiadasz bron bliskiego kontaktu musisz\nzmniejszyc dystans do 1 i dopiero mozesz bic \njesli posiadasz bron dlugodystansowa lub umiejetnosc\npozwala na uderzanie z odleglosci to musisz zmiejszyc dystans\ndo odleglosci, takiej jaka odpowiada umiejetnosci badz tez broni\n";
cout<<"Jaka bron wybierasz sobie na poczatek ?\n1-Kamienie (atak 5 | dystans 8 | szybkosc ataku 2r)\n2-Luk (atak 10 | dystans 12 | szybkosc ataku 3r)\n3-Badyl (atak 7 | dystans 1 | szybkosc ataku 1r)\n";
bron1=getch();
if (bron1=='1')
{
             cout<<"wybrales kamienie\n";
             kamienie1=1;
             nazwabroni=3;
             }
if (bron1=='2')
{
             cout<<"Wybrales luk\n";
             luk1=1;
             nazwabroni=1;
             }
if (bron1=='3')
{
             cout<<"Wybrales badyl\n";
             badyl1=1;
             nazwabroni=2;
             }
//Pierwsza walka
cout<<"Teraz zacznie sie walka\n\n\npierwszy mob ma badyla o ataku 4\n\n";


while (135)
{

if(zycie<=0)
{
cout<<"niestety przegrales ta walke\n";
cout<<"Jeszcze raz ??\n(tak/nie)\n";
cin>>decyzja;
if(decyzja=="tak")
{
goto pocz;
}
if(decyzja=="nie")
{
goto koniec;
}
}

cout<<nick<<" masz :";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
cout<<zycie;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
 cout<<" zycia i ";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
cout<<mana;
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
cout<<" Many\n";
cout<<"MOB ma :";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
 cout<<zyciem;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
 cout<<" zycia i :";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
  cout<<manam;
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
cout<<" Many\n";
   cout<<"Dystans pomiedzy wami wynosi :";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    cout<<dystans;
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
       cout<<"\n";
pomiedzy:
cout<<"Co robisz ?\n1-podchodze | 2-atak odnawianie :"<<odnawianie<<" | 3-odejscie\n";
czynnosc=getch();
if (czynnosc=='1')
{
                dystans=dystans-3;
                if(dystans<1)
                dystans=1;
                }
if (czynnosc=='2')
{
                if(kamienie1==1)
                {

                                 if (dystans>8)
                              {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                            cout<<"\n\nNiestety stoisz za daleko i nie mozesz wykonac tej czynnosci\n";
                                               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                            goto pomiedzy;
                                            }
                                            if(odnawianie>0)
                                            {
                                                               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                                            cout<<"Niestety jeszcze sie nie odnowilo\n";
                                                               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                            goto pomiedzy;
                                            
                                            }
                                            if(odnawianie==0)
                                            {
                                            
                              if (dystans<=8)
                              {
                                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 300);
                                             cout<<"\n\nPrzeciwnik otrzymuje 5 obrazen !\n";
                                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                             zyciem=zyciem-5;
                                             odnawianie=3;
                                             }
                                             }
                                            }
                
                if(luk1==1)
                {
                          if(dystans<=12)
                          {
                                         if(odnawianie>0)
                                         
                                         {
                                                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                         cout<<"\n\nNiestety ta czynnosc sie jeszcze nie odnowila\n";
                                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                         goto pomiedzy;
                                         }
                                         if(odnawianie==0)
                                         {
                                                             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 300);
                                                          cout<<"\n\nPrzeciwnik otrzymuje 10 obrazen !\n";
                                                             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                                          zyciem=zyciem-10;
                                                          odnawianie=4;
                                         }
                                         
                           }
                        if(dystans>12)
                        {
                                         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                      cout<<"\n\nNiestety stoisz za daleko i nie mozesz wykonac tej czynnosci\n";
                                         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                      goto pomiedzy;
                        }
                                      
                                      
                                      
                                      
                }
                if(badyl1==1)
                {
                               if(dystans>1)
                             {
                                               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                          cout<<"\n\nNiestety jestes umiejscowiony za daleko\n";
                                             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                          goto pomiedzy;
                             }
                             if(dystans==1)
                             {
                                              SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 300);
                                           cout<<"\n\nTwoj przeciwnik otrzymuje obrazenie w wysokosci 7\n";
                                              SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                           zyciem=zyciem-7;
                             }
                           
                }




// koniec czynnosci 2
}

if (czynnosc=='3')
{
                dystans=dystans+3;
                }
if(zyciem<=0)
{
    const int wTab=2;
int czestosc[wTab]={0};
srand(time(0));
	for(int rzut=1; rzut<=10; rzut++)
		++czestosc[1+rand()%2];
	for(int w=1;w<wTab;w++)
	b=czestosc[w]*10;
kasa=kasa+b;
exp=exp+zycie*b;
cout<<"W tym boju odniosles zwyciestwo\n";
break;
}

                
//tera mob
if(dystans>1)
{
             dystans=dystans-2;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
             cout<<"Przeciwnik podszedl co ciebie !\n";
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
             if(dystans<1)
             dystans=1;
             }
if(dystans==1)
{
              zycie=zycie-4;
                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
              cout<<"Przeciwnik pozbawia cie 4 puntow zycia\n";
                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
              }

odnawianie=odnawianie-1;
if(odnawianie<0)
odnawianie=0;


// koniec while






}
while(1)
{
if(exp>1000000000000000LL)
{
                  exp=1000000000000000LL;
}
if(kasa>1000000000000000LL)
{
                   kasa=1000000000000000LL;
}
        
        SAPEK:
cout<<"Chcez zapisac gre ?? \n";
cout<<"1 - tak / 2 - nie\n";
gzapis=getch();
popierwszejwalce:
powalce=0;
wybskill=0;
wybskill2=0;
















          
          
       

//ROBIENIE SAVA

if(gzapis=='1')
{
//pierwsze



ofstream oplik;



oplik.open ("save", ios::out );
oplik<<"1\n";



//exp

    while(exp>=saz)
    {
               save[sax]=exp%say/saw+48;
               say=say*10;
               saw=saw*10;
               sax++;  
               saz=saz*10;
    }
    sax--;
    sar=sax;
    say=10;
    saw=0;
    saz=1;
    lp=1;
    while(sax>=0)
    {
                 save2[sax]=save[saw];
                 sax--;
                 saw++;
    }
    saw=1;

    
    while(sab<=sar)
    {
               save2[sab]=save2[sab]+49;
               sac=save2[sab]*2;
               
               while(lp<=sac)
               {
                           oplik<<"* ";
                           lp++;
               }
               oplik<<"$\n";
               lp=1;
            sab++;
    }
    oplik<<"|"<<endl;
    
    say=10;
    saw=1;
    saz=1;
    lp=1;
    sax=0;
    sab=0;
    
    // kasa


    while(kasa>=saz)
    {
               save[sax]=kasa%say/saw+48;
               say=say*10;
               saw=saw*10;
               sax++;  
               saz=saz*10;
    }
    sax--;
    sar=sax;
    say=10;
    saw=0;
    saz=1;
    lp=1;
    while(sax>=0)
    {
                 save2[sax]=save[saw];
                 sax--;
                 saw++;
    }
    saw=1;

    
    while(sab<=sar)
    {
               save2[sab]=save2[sab]+49;
               sac=save2[sab]*2;
               
               while(lp<=sac)
               {
                           oplik<<"* ";
                           lp++;
               }
               oplik<<"$\n";
               lp=1;
            sab++;
    }
    oplik<<"|"<<endl;
    
    say=10;
    saw=1;
    saz=1;
    lp=1;
    sax=0;
    sab=0;











//hp
    while(maxhp>=saz)
    {
               save[sax]=maxhp%say/saw+48;
               say=say*10;
               saw=saw*10;
               sax++;  
               saz=saz*10;
    }
     sax--;
    sar=sax;
    say=10;
    saw=0;
    saz=1;
    lp=1;
    while(sax>=0)
    {
                 save2[sax]=save[saw];
                 sax--;
                 saw++;
    }
    saw=1;

    
    while(sab<=sar)
    {
               save2[sab]=save2[sab]+49;
               sac=save2[sab]*2;
               
               while(lp<=sac)
               {
                           oplik<<"* ";
                           lp++;
               }
               oplik<<"$\n";
               lp=1;
            sab++;
    }
    oplik<<"|"<<endl;
    
    say=10;
    saw=1;
    saz=1;
    lp=1;
    sax=0;

sab=0;







//mp


    while(maxmp>=saz)
    {
               save[sax]=maxmp%say/saw+48;
               say=say*10;
               saw=saw*10;
               sax++;  
               saz=saz*10;
    }
     sax--;
    sar=sax;
    say=10;
    saw=0;
    saz=1;
    lp=1;
    while(sax>=0)
    {
                 save2[sax]=save[saw];
                 sax--;
                 saw++;
    }
    saw=1;

    
    while(sab<=sar)
    {
               save2[sab]=save2[sab]+49;
               sac=save2[sab]*2;
               
               while(lp<=sac)
               {
                           oplik<<"* ";
                           lp++;
               }
               oplik<<"$\n";
               lp=1;
            sab++;
    }
    oplik<<"|"<<endl;
    
    say=10;
    saw=1;
    saz=1;
    lp=1;
    sax=0;

sab=0;






//predkosc

    while(pr>=saz)
    {
               save[sax]=pr%say/saw+48;
               say=say*10;
               saw=saw*10;
               sax++;  
               saz=saz*10;
    }
     sax--;
    sar=sax;
    say=10;
    saw=0;
    saz=1;
    lp=1;
    while(sax>=0)
    {
                 save2[sax]=save[saw];
                 sax--;
                 saw++;
    }
    saw=1;

    
    while(sab<=sar)
    {
               save2[sab]=save2[sab]+49;
               sac=save2[sab]*2;
               
               while(lp<=sac)
               {
                           oplik<<"* ";
                           lp++;
               }
               oplik<<"$\n";
               lp=1;
            sab++;
    }
    oplik<<"|"<<endl;
    sab=0;
    say=10;
    saw=1;
    saz=1;
    lp=1;
    sax=0;

//bron

    while(nazwabroni>=saz)
    {
               save[sax]=nazwabroni%say/saw+48;
               say=say*10;
               saw=saw*10;
               sax++;  
               saz=saz*10;
    }
     sax--;
    sar=sax;
    say=10;
    saw=0;
    saz=1;
    lp=1;
    while(sax>=0)
    {
                 save2[sax]=save[saw];
                 sax--;
                 saw++;
    }
    saw=1;

    
    while(sab<=sar)
    {
               save2[sab]=save2[sab]+49;
               sac=save2[sab]*2;
               
               while(lp<=sac)
               {
                           oplik<<"* ";
                           lp++;
               }
               oplik<<"$\n";
               lp=1;
            sab++;
    }
    oplik<<"|"<<endl;
    sab=0;
    say=10;
    saw=1;
    saz=1;
    lp=1;
    sax=0;

//redobr

    while(redobr>=saz)
    {
               save[sax]=redobr%say/saw+48;
               say=say*10;
               saw=saw*10;
               sax++;  
               saz=saz*10;
    }
     sax--;
    sar=sax;
    say=10;
    saw=0;
    saz=1;
    lp=1;
    while(sax>=0)
    {
                 save2[sax]=save[saw];
                 sax--;
                 saw++;
    }
    saw=1;

    
    while(sab<=sar)
    {
               save2[sab]=save2[sab]+49;
               sac=save2[sab]*2;
               
               while(lp<=sac)
               {
                           oplik<<"* ";
                           lp++;
               }
               oplik<<"$\n";
               lp=1;
            sab++;
    }
    oplik<<"|"<<endl;
    sab=0;
    say=10;
    saw=1;
    saz=1;
    lp=1;
    sax=0;



//Leczenie

    while(leczenies>=saz)
    {
               save[sax]=leczenies%say/saw+48;
               say=say*10;
               saw=saw*10;
               sax++;  
               saz=saz*10;
    }
     sax--;
    sar=sax;
    say=10;
    saw=0;
    saz=1;
    lp=1;
    while(sax>=0)
    {
                 save2[sax]=save[saw];
                 sax--;
                 saw++;
    }
    saw=1;

    
    while(sab<=sar)
    {
               save2[sab]=save2[sab]+49;
               sac=save2[sab]*2;
               
               while(lp<=sac)
               {
                           oplik<<"* ";
                           lp++;
               }
               oplik<<"$\n";
               lp=1;
            sab++;
    }
    oplik<<"|"<<endl;
    sab=0;
    say=10;
    saw=1;
    saz=1;
    lp=1;
    sax=0;

//bieganie

    while(bieganies>=saz)
    {
               save[sax]=bieganies%say/saw+48;
               say=say*10;
               saw=saw*10;
               sax++;  
               saz=saz*10;
    }
     sax--;
    sar=sax;
    say=10;
    saw=0;
    saz=1;
    lp=1;
    while(sax>=0)
    {
                 save2[sax]=save[saw];
                 sax--;
                 saw++;
    }
    saw=1;

    
    while(sab<=sar)
    {
               save2[sab]=save2[sab]+49;
               sac=save2[sab]*2;
               
               while(lp<=sac)
               {
                           oplik<<"* ";
                           lp++;
               }
               oplik<<"$\n";
               lp=1;
            sab++;
    }
    oplik<<"|"<<endl;
    sab=0;
    say=10;
    saw=1;
    saz=1;
    lp=1;
    sax=0;
 
// jednorazowa redukcja obrazen

    while(jros>=saz)
    {
               save[sax]=jros%say/saw+48;
               say=say*10;
               saw=saw*10;
               sax++;  
               saz=saz*10;
    }
     sax--;
    sar=sax;
    say=10;
    saw=0;
    saz=1;
    lp=1;
    while(sax>=0)
    {
                 save2[sax]=save[saw];
                 sax--;
                 saw++;
    }
    saw=1;

    
    while(sab<=sar)
    {
               save2[sab]=save2[sab]+49;
               sac=save2[sab]*2;
               
               while(lp<=sac)
               {
                           oplik<<"* ";
                           lp++;
               }
               oplik<<"$\n";
               lp=1;
            sab++;
    }
    oplik<<"|"<<endl;
    sab=0;
    say=10;
    saw=1;
    saz=1;
    lp=1;
    sax=0;


//Uniki

    while(unikis>=saz)
    {
               save[sax]=unikis%say/saw+48;
               say=say*10;
               saw=saw*10;
               sax++;  
               saz=saz*10;
    }
     sax--;
    sar=sax;
    say=10;
    saw=0;
    saz=1;
    lp=1;
    while(sax>=0)
    {
                 save2[sax]=save[saw];
                 sax--;
                 saw++;
    }
    saw=1;

    
    while(sab<=sar)
    {
               save2[sab]=save2[sab]+49;
               sac=save2[sab]*2;
               
               while(lp<=sac)
               {
                           oplik<<"* ";
                           lp++;
               }
               oplik<<"$\n";
               lp=1;
            sab++;
    }
    oplik<<"|"<<endl;
    sab=0;
    say=10;
    saw=1;
    saz=1;
    lp=1;
    sax=0;
//ZwiekrzonyAtak

    while(zas>=saz)
    {
               save[sax]=zas%say/saw+48;
               say=say*10;
               saw=saw*10;
               sax++;  
               saz=saz*10;
    }
     sax--;
    sar=sax;
    say=10;
    saw=0;
    saz=1;
    lp=1;
    while(sax>=0)
    {
                 save2[sax]=save[saw];
                 sax--;
                 saw++;
    }
    saw=1;

    
    while(sab<=sar)
    {
               save2[sab]=save2[sab]+49;
               sac=save2[sab]*2;
               
               while(lp<=sac)
               {
                           oplik<<"* ";
                           lp++;
               }
               oplik<<"$\n";
               lp=1;
            sab++;
    }
    oplik<<"|"<<endl;
    sab=0;
    say=10;
    saw=1;
    saz=1;
    lp=1;
    sax=0;
//Czasowy regen hp

    while(crhps>=saz)
    {
               save[sax]=crhps%say/saw+48;
               say=say*10;
               saw=saw*10;
               sax++;  
               saz=saz*10;
    }
     sax--;
    sar=sax;
    say=10;
    saw=0;
    saz=1;
    lp=1;
    while(sax>=0)
    {
                 save2[sax]=save[saw];
                 sax--;
                 saw++;
    }
    saw=1;

    
    while(sab<=sar)
    {
               save2[sab]=save2[sab]+49;
               sac=save2[sab]*2;
               
               while(lp<=sac)
               {
                           oplik<<"* ";
                           lp++;
               }
               oplik<<"$\n";
               lp=1;
            sab++;
    }
    oplik<<"|"<<endl;
    sab=0;
    say=10;
    saw=1;
    saz=1;
    lp=1;
    sax=0;
//Czasowy regen mp

    while(crmps>=saz)
    {
               save[sax]=crmps%say/saw+48;
               say=say*10;
               saw=saw*10;
               sax++;  
               saz=saz*10;
    }
    
    sar=sax;
    say=10;
    saw=0;
    saz=1;
    lp=1;
    while(sax>=0)
    {
                 save2[sax]=save[saw];
                 sax--;
                 saw++;
    }
    saw=1;

    
    while(sab<=sar)
    {
               save2[sab]=save2[sab]+49;
               sac=save2[sab]*2;
               
               while(lp<=sac)
               {
                           oplik<<"* ";
                           lp++;
               }
               oplik<<"$\n";
               lp=1;
            sab++;
    }
    oplik<<"|"<<endl;
    sab=0;
    say=10;
    saw=1;
    saz=1;
    lp=1;
    sax=0;
//HP do MP

    while(hdms>=saz)
    {
               save[sax]=hdms%say/saw+48;
               say=say*10;
               saw=saw*10;
               sax++;  
               saz=saz*10;
    }
     sax--;
    sar=sax;
    say=10;
    saw=0;
    saz=1;
    lp=1;
    while(sax>=0)
    {
                 save2[sax]=save[saw];
                 sax--;
                 saw++;
    }
    saw=1;

    
    while(sab<=sar)
    {
               save2[sab]=save2[sab]+49;
               sac=save2[sab]*2;
               
               while(lp<=sac)
               {
                           oplik<<"* ";
                           lp++;
               }
               oplik<<"$\n";
               lp=1;
            sab++;
    }
    oplik<<"|"<<endl;
    sab=0;
    say=10;
    saw=1;
    saz=1;
    lp=1;
    sax=0;

//Drain

    while(drains>=saz)
    {
               save[sax]=drains%say/saw+48;
               say=say*10;
               saw=saw*10;
               sax++;  
               saz=saz*10;
    }
     sax--;
    sar=sax;
    say=10;
    saw=0;
    saz=1;
    lp=1;
    while(sax>=0)
    {
                 save2[sax]=save[saw];
                 sax--;
                 saw++;
    }
    saw=1;

    
    while(sab<=sar)
    {
               save2[sab]=save2[sab]+49;
               sac=save2[sab]*2;
               
               while(lp<=sac)
               {
                           oplik<<"* ";
                           lp++;
               }
               oplik<<"$\n";
               lp=1;
            sab++;
    }
    oplik<<"|"<<endl;
    sab=0;
    say=10;
    saw=1;
    saz=1;
    lp=1;
    sax=0;
//Tarcza

    while(tarcza>=saz)
    {
               save[sax]=tarcza%say/saw+48;
               say=say*10;
               saw=saw*10;
               sax++;  
               saz=saz*10;
    }
     sax--;
    sar=sax;
    say=10;
    saw=0;
    saz=1;
    lp=1;
    while(sax>=0)
    {
                 save2[sax]=save[saw];
                 sax--;
                 saw++;
    }
    saw=1;

    
    while(sab<=sar)
    {
               save2[sab]=save2[sab]+49;
               sac=save2[sab]*2;
               
               while(lp<=sac)
               {
                           oplik<<"* ";
                           lp++;
               }
               oplik<<"$\n";
               lp=1;
            sab++;
    }
    oplik<<"|"<<endl;
    sab=0;
    say=10;
    saw=1;
    saz=1;
    lp=1;
    sax=0;
//Koks1

    while(koks1>=saz)
    {
               save[sax]=koks1%say/saw+48;
               say=say*10;
               saw=saw*10;
               sax++;  
               saz=saz*10;
    }
     sax--;
    sar=sax;
    say=10;
    saw=0;
    saz=1;
    lp=1;
    while(sax>=0)
    {
                 save2[sax]=save[saw];
                 sax--;
                 saw++;
    }
    saw=1;

    
    while(sab<=sar)
    {
               save2[sab]=save2[sab]+49;
               sac=save2[sab]*2;
               
               while(lp<=sac)
               {
                           oplik<<"* ";
                           lp++;
               }
               oplik<<"$\n";
               lp=1;
            sab++;
    }
    oplik<<"|"<<endl;
    sab=0;
    say=10;
    saw=1;
    saz=1;
    lp=1;
    sax=0;

//Koks2

    while(koks2>=saz)
    {
               save[sax]=koks2%say/saw+48;
               say=say*10;
               saw=saw*10;
               sax++;  
               saz=saz*10;
    }
     sax--;
    sar=sax;
    say=10;
    saw=0;
    saz=1;
    lp=1;
    while(sax>=0)
    {
                 save2[sax]=save[saw];
                 sax--;
                 saw++;
    }
    saw=1;

    
    while(sab<=sar)
    {
               save2[sab]=save2[sab]+49;
               sac=save2[sab]*2;
               
               while(lp<=sac)
               {
                           oplik<<"* ";
                           lp++;
               }
               oplik<<"$\n";
               lp=1;
            sab++;
    }
    oplik<<"|"<<endl;
    sab=0;
    say=10;
    saw=1;
    saz=1;
    lp=1;
    sax=0;

//Koks3

    while(koks3>=saz)
    {
               save[sax]=koks3%say/saw+48;
               say=say*10;
               saw=saw*10;
               sax++;  
               saz=saz*10;
    }
     sax--;
    sar=sax;
    say=10;
    saw=0;
    saz=1;
    lp=1;
    while(sax>=0)
    {
                 save2[sax]=save[saw];
                 sax--;
                 saw++;
    }
    saw=1;

    
    while(sab<=sar)
    {
               save2[sab]=save2[sab]+49;
               sac=save2[sab]*2;
               
               while(lp<=sac)
               {
                           oplik<<"* ";
                           lp++;
               }
               oplik<<"$\n";
               lp=1;
            sab++;
    }
    oplik<<"|"<<endl;
    sab=0;
    say=10;
    saw=1;
    saz=1;
    lp=1;
    sax=0;



// nick


oplik<<nick;







oplik.close();

system ("pause");
             }
// koniec save jesli tak
if(gzapis=='2')
{
             cout<<"nie to nie\n";
             }



// koniec save

if(nazwabroni==1)
{
                 zasieg=12;
                 moc=10;
                 reuse=4;
}
if(nazwabroni==2)
{
                 zasieg=1;
                 moc=7;
                 reuse=1;
}
if(nazwabroni==3)
{
                 zasieg=8;
                 reuse=3;
                 moc=5;
}
if(nazwabroni==11)
{
                  zasieg=8;
                  moc=10;
                  reuse=4;
                  zwrot=1000;
}
if(nazwabroni==12)
{
                  zasieg=8;
                  moc=12;
                  zwrot=1500;
                  reuse=3;
}
if(nazwabroni==13)
{
                  zasieg=10;
                  moc=15;
                  zwrot=20000;
                  reuse=3;
}
if(nazwabroni==14)
{
                  zasieg=11;
                  moc=18;
                  zwrot=50000;
                  reuse=3;
}
if(nazwabroni==15)
{
                  zasieg=12;
                  moc=25;
                  zwrot=200000;
                  reuse=3;
}
if(nazwabroni==16)
{
                  zasieg=15;
                  moc=30;
                  zwrot=1000000;
                  reuse=3;
}
if(nazwabroni==21)
{
                  zasieg=15;
                  moc=12;
                  zwrot=1000;
                  reuse=4;
}
if(nazwabroni==22)
{
                  zasieg=15;
                  moc=15;
                  zwrot=1500;
                  reuse=4;
}
if(nazwabroni==23)
{
                  zasieg=15;
                  moc=17;
                  zwrot=20000;
                  reuse=4;
}
if(nazwabroni==24)
{
                  zasieg=16;
                  moc=20;
                  zwrot=50000;
                  reuse=4;
}
if(nazwabroni==25)
{
                  zasieg=17;
                  moc=30;
                  zwrot=200000;
                  reuse=4;
}
if(nazwabroni==26)
{
                  zasieg=18;
                  moc=35;
                  zwrot=1000000;
                  reuse=4;
}
if(nazwabroni==31)
{
                  zasieg=1;
                  reuse=1;
                  zwrot=1000;
                  moc=8;
}
if(nazwabroni==32)
{
                  zasieg=1;
                  reuse=1;
                  zwrot=1500;
                  moc=10;
}
if(nazwabroni==33)
{
                  zasieg=1;
                  reuse=1;
                  zwrot=20000;
                  moc=12;
}
if(nazwabroni==34)
{
                  zasieg=1;
                  reuse=1;
                  zwrot=50000;
                  moc=15;
}
if(nazwabroni==35)
{
                  zasieg=1;
                  reuse=1;
                  zwrot=200000;
                  moc=18;
}
if(nazwabroni==36)
{
                  zasieg=1;
                  reuse=1;
                  zwrot=1000000;
                  moc=25;
}
if(tarcza==1)
{
             tr=2;
             tzwrot=1000;
}
if(tarcza==2)
{
             tr=3;
             tzwrot=1500;
}
if(tarcza==3)
{
             tr=5;
             tzwrot=20000;
}
if(tarcza==4)
{
             tr=7;
             tzwrot=50000;
}
if(tarcza==5)
{
             tr=10;
             tzwrot=200000;
}
if(tarcza==6)
{
             tr=15;
             tzwrot=1000000;
}
if(tarcza==0)
{
             tr=0;
             tzwrot=0;
}


//Skille tg


//Leczenie tg 
if(leczenies>=1)
{
                if(leczenies==1)
                leczenie=5;
                if(leczenies==2)
                leczenie=10;
                if(leczenies==3)
                leczenie=15;
                if(leczenies==4)
                leczenie=20;
                if(leczenies==5)
                leczenie=25;
                if(leczenies==6)
                leczenie=30;
                if(leczenies==7)
                leczenie=40;
                if(leczenies==8)
                leczenie=50;
                if(leczenies==9)
                leczenie=100;
                if(leczenies==10)
                leczenie=150;
}
//Bieganie 
if(bieganies>=1)
{
               if(bieganies==1)
               {
                               speed=2;
                               speedtime=5;
                               mpbieganie=10;
               }
               if(bieganies==2)
               {
                               speed=3;
                               speedtime=5;
                               mpbieganie=20;
               }
               if(bieganies==3)
               {
                               speed=4;
                               speedtime=6;
                               mpbieganie=30;
               }
               if(bieganies==4)
               {
                               speed=5;
                               speedtime=6;
                               mpbieganie=40;
               }
               if(bieganies==5)
               {
                               speed=6;
                               speedtime=7;
                               mpbieganie=50;
               }
               if(bieganies==6)
               {
                               speed=7;
                               speedtime=7;
                               mpbieganie=60;
               }
               if(bieganies==7)
               {
                              speed=8;
                              speedtime=8;
                              mpbieganie=70;
               }
               if(bieganies==8)
               {
                               speed=9;
                               speedtime=8;
                               mpbieganie=80;
               }
               if(bieganies==9)
               {
                               speed=10;
                               speedtime=8;
                               mpbieganie=90;
               }
               if(bieganies==10)
               {
                                speed=15;
                                speedtime=10;
                                mpbieganie=100;
               }
}
//Jednorazowa redukcja obrazen
if(jros>0)
{
          if(jros==1)
          {
                     jro=5;
                     mpjro=10;
          }
          if(jros==2)
          {
                     jro=7;
                     mpjro=20;
          }
          if(jros==3)
          {
                     jro=9;
                     mpjro=30;
          }
          if(jros==4)
          {
                     jro=10;
                     mpjro=40;
          }
          if(jros==5)
          {
                    jro=12;
                    mpjro=50;
          }
          if(jros==6)
          {
                    jro=15;
                    mpjro=60;
          }
          if(jros==7)
          {
                    jro=17;
                    mpjro=70;
          }
          if(jros==8)
          {
                     jro=18;
                     mpjro=80;
          }
          if(jros==9)
          {
                     jro=20;
                     mpjro=90;
          }
          if(jros==10)
          {
                      jro=10000000;
                      mpjro=100;
          }      
}
//Uniki
if(unikis>0)
{
            if(unikis==1)
            {
                         uniki=10;
                         tuniki=10;
                         
                         mpuniki=unikis*10;
            }
            if(unikis==2)
            {
                         uniki=9;
                         tuniki=10;                         
                         mpuniki=unikis*10;
            }
            if(unikis==3)
            {
                         uniki=8;
                         tuniki=10;                         
                         mpuniki=unikis*10;
            }
            if(unikis==4)
            {
                         uniki=8;
                         tuniki=15;                         
                         mpuniki=unikis*10;
            }
            if(unikis==5)
            {
                         uniki=7;
                         tuniki=15;                         
                         mpuniki=unikis*10;
            }
            if(unikis==6)
            {
                         uniki=6;
                         tuniki=15;                         
                         mpuniki=unikis*10;
            }
            if(unikis==7)
            {
                         uniki=5;
                         tuniki=20;                         
                         mpuniki=unikis*10;
            }
            if(unikis==8)
            {
                         uniki=4;
                         tuniki=20;                         
                         mpuniki=unikis*10;
            }
            if(unikis==9)
            {
                         uniki=3;
                         tuniki=20;                         
                         mpuniki=unikis*10;
            }
            if(unikis==10)
            {
                          uniki=2;
                          tuniki=20;                         
                          mpuniki=unikis*10;
            }
}
if(zas>0)
{
         if(zas==1)
         {
                   mpza=zas*10;
                   za=3;
                   tza=5;
         }
         if(zas==2)
         {
                   mpza=zas*10;
                   za=4;
                   tza=5;
         }
         if(zas==3)
         {
                   mpza=zas*10;
                   za=5;
                   tza=6;
         }
         if(zas==4)
         {
                   mpza=zas*10;
                   za=6;
                   tza=6;
         }
         if(zas==5)
         {
                   mpza=zas*10;
                   za=7;
                   tza=6;
         }
         if(zas==6)
         {
                   mpza=zas*10;
                   za=8;
                   tza=7;
         }
         if(zas==7)
         {
                   mpza=zas*10;
                   za=10;
                   tza=8;
         }
         if(zas==8)
         {
                   mpza=zas*10;
                   za=12;
                   tza=9;
         }
         if(zas==9)
         {
                   
                   za=14;
                   mpza=zas*10;
                   tza=9;
         }                  
         if(zas==10)
         {
                    mpza=zas*10;
                    za=15;
                    tza=10;
         }
}
//czasowy regen hp
if(crhps>0)
{
          if(crhps==1)
          {
                      crhp=5;
                      timecrhp=5;
                      mpcrhp=crhps*10;
          }
          if(crhps==2)
          {
                      crhp=10;
                      timecrhp=5;
                      mpcrhp=crhps*10;
          }
          if(crhps==3)
          {
                      mpcrhp=crhps*10;
                      crhp=12;
                      timecrhp=6;
          }
          if(crhps==4)
          {
                      mpcrhp=crhps*10;
                      crhp=15;
                      timecrhp=6;
          }
          if(crhps==5)
          {
                      mpcrhp=crhps*10;
                      crhp=17;
                      timecrhp=7;
          }
          if(crhps==6)
          {
                      mpcrhp=crhps*10;
                      crhp=20;
                      timecrhp=7;
          }
          if(crhps==7)
          {
                      mpcrhp=crhps*10;
                      crhp=22;
                      timecrhp=8;
          }
          if(crhps==8)
          {
                      mpcrhp=crhps*10;
                      crhp=25;
                      timecrhp=8;
          }
          if(crhps==9)
          {
                      mpcrhp=crhps*10;
                      crhp=27;
                      timecrhp=9;
          }
          if(crhps==10)
          {
                       mpcrhp=crhps*10;
                       crhp=30;
                       timecrhp=10;
          }
}
if(crmps>0)
{
           if(crmps==1)
           {
                       crmp=5;
                       tcrmp=5;
           }
           if(crmps==2)
           {
                       crmp=7;
                       tcrmp=5;
           }
           if(crmps==3)
           {
                       crmp=8;
                       tcrmp=6;
           }
           if(crmps==4)
           {
                       crmp=9;
                       tcrmp=6;
           }
           if(crmps==5)
           {
                       crmp=10;
                       tcrmp=6;
           }
           if(crmps==6)
           {
                       crmp=11;
                       tcrmp=7;
           }
           if(crmps==7)
           {
                       crmp=12;
                       tcrmp=7;
           }
           if(crmp==8)
           {
                      crmp=15;
                      tcrmp=8;
           }
           if(crmp==9)
           {
                      crmp=17;
                      tcrmp=8;
           }
           if(crmps==10)
           {
                        crmp=20;
                        tcrmp=10;
           }
}
if(hdms>0)
{
          if(hdms==1)
          {
                     hdm=10;
                     hphdm=10;
          }
          if(hdms==2)
          {
                     hdm=hdms*10;
                     hphdm=hdms*10;
          }
          if(hdms==3)
          {
                     hdm=hdms*10;
                     hphdm=hdms*10;
          }
          if(hdms==4)
          {
                     hdm=hdms*10;
                     hphdm=hdms*10;
          }
          if(hdms==5)
          {
                     hdm=hdms*10;
                     hphdm=hdms*10;
          }
          if(hdms==6)
          {
                     hdm=hdms*10;
                     hphdm=50;
          }
          if(hdms==7)
          {
                     hdm=hdms*10;
                     hphdm=50;
          }
          if(hdms==8)
          {
                     hdm=hdms*10;
                     hphdm=50;
          }
          if(hdms==9)
          {
                     hdm=hdms*10;
                     hphdm=50;
          }
          if(hdms==10)
          {
                     hdm=hdms*10;
                     hphdm=50;
          }
}
if(drains>0)
{
            if(drains==1)
            {
                         mpdrain=drains*10;
                         drain=5;
            }
            if(drains==2)
            {            
                         mpdrain=drains*10;
                         drain=10;
            }
            if(drains==3)
            {     
                         mpdrain=drains*10;
                         drain=15;
            }
            if(drains==4)
            {
                         mpdrain=drains*10;
                         drain=20;
            }
            if(drains==5)
            {
                         mpdrain=drains*10;
                         drain=25;
            }
            if(drains==6)
            {
                         mpdrain=drains*10;
                         drain=30;
            }
            if(drains==7)
            {
                         mpdrain=drains*10;
                         drain=35;
            }
            if(drains==8)
            {
                         mpdrain=drains*10;
                         drain=40;
            }
            if(drains==9)
            {
                         mpdrain=drains*10;
                         drain=45;
            }
            if(drains==10)
            {
                          mpdrain=drains*10;
                          drain=50;
            }
}



cout<<nick<<" Twoj exp wynosi : ";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
cout<<exp;
cout<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
cout<<"twoja kasa wynosi : ";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
cout<<kasa;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
cout<<endl;



cout<<"Co chcesz zrobic ??\n1-sklep\n2-skillownia\n3-Kolejny boj\n4-Moje statystyki\n";
if(nick=="szczepan101")
cout<<"5-Panel GMa\n";
powalce=getch();
if(nick=="szczepan101")
{
                       if(powalce=='5')
                       {
                                     panelgm:
                                     cout<<"Elo szczepan ! co chcesz robic  ?\n1 - ustaw kase\n2 - ustaw expa\n3 - ustaw zycie\n4 - ustaw mane\n5 - ustaw bieganie\n6 - ustaw redukcje obrazen\n7-wstecz\n";
                                     wybskill=getch();
                                     if(wybskill=='1')
                                     {
                                                    cout<<"To ile chcesz ?\n";
                                                    cin>>kasa;
                                                    goto panelgm;
                                     }
                                     if(wybskill=='2')
                                     {
                                                    cout<<"To ile chcesz ?\n";
                                                    cin>>exp;
                                                    goto panelgm;
                                     }
                                     if(wybskill=='3')
                                     {
                                                    cout<<"To ile chcesz ?\n";
                                                    cin>>maxhp;
                                                    goto panelgm;
                                     }
                                     if(wybskill=='4')
                                     {
                                                    cout<<"To ile chcesz ?\n";
                                                    cin>>maxmp;
                                                    goto panelgm;
                                     }
                                     if(wybskill=='5')
                                     {
                                                    cout<<"To ile chcesz ?\n";
                                                    cin>>pr;
                                                    goto panelgm;
                                     }
                                     if(wybskill=='6')
                                     {
                                                    cout<<"To ile chcesz ?\n";
                                                    cin>>redobr;
                                                    goto panelgm;
                                     }
                                     if(wybskill=='7')
                                     continue;
                       }
}
                                                    
//SKLEP
if(powalce=='1')
{
              sklep:
              cout<<"Tu kupujesz bronie i tarcze\nDo jakiego stanowiska chcesz sie udac ?\n1-gwiazdki ninia\n2-luki\n3-miecze\n4-tarcze\n5-wstecz\n";
              wsklepie=getch();
              if(wsklepie=='5')
              continue;
              if(wsklepie=='1')
              {
                             cout<<"Witamy na stanowiski z gwiazdkami ninja !! \nTwoje fundusze wynosza : ";
                             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                             cout<<kasa;
                             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                             cout<<" + zwrot za stara bron czyli "<<zwrot;
                             cout<<"\nA oto produkty dostepne\n";
                             cout<<"1 - Atak 10, Zasieg 8, Koszt 1000, Odnawianie 2"<<endl;
                             cout<<"2 - Atak 12, Zasieg 8, Koszt 1500, Odnawianie 2"<<endl;
                             cout<<"3 - Atak 15, Zasieg 10, Koszt 20 000, Odnawianie 2"<<endl;
                             cout<<"4 - Atak 18, Zasieg 11, Koszt 50 000, Odnawianie 2"<<endl;
                             cout<<"5 - Atak 25, Zasieg 12, Koszt 200 000, Odnawianie 2"<<endl;
                             cout<<"7 - WSTECZ"<<endl;
                             wybskill2=getch();
                             if(wybskill2=='7')
                             goto sklep; 
                             if(wybskill2=='1')
                             {
                                             
                                             
                                             if(kasa+zwrot>=1000)
                                             {
                                                           cout<<"Chcesz kupic ? (tak/nie)\n";
                                                           cin>>sklepdec;
                                                           if(sklepdec=="tak")
                                                           {
                                                                  nazwabroni=11;
                                                                  kasa=kasa-1000;
                                                                  kasa=kasa+zwrot;
                                                                  cout<<"Gratuluje zakupu";
                                                                  cout<<endl;
                                                                  continue;
                                                           }
                                             
                                                           else
                                                           cout<<"Nie to nie\n";
                                             }
                                             else
                                             cout<<"Nie stac cie\n";
                             }
                             if(wybskill2=='2')
                             {
                                             
                                             
                                             if(kasa+zwrot>=1500)
                                             {
                                                           cout<<"Chcesz kupic ? (tak/nie)\n";
                                                           cin>>sklepdec;
                                                           if(sklepdec=="tak")
                                                           {
                                                                  nazwabroni=12;
                                                                  kasa=kasa+zwrot;
                                                                  cout<<"Gratuluje zakupu";
                                                                  cout<<endl;
                                                                  continue;
                                                           }
                                             
                                                           else
                                                           cout<<"Nie to nie\n";
                                             }
                                             else
                                             cout<<"Nie stac cie\n";
                             }
                             if(wybskill2=='3')
                             {
                                             
                                             
                                             if(kasa+zwrot>=20000)
                                             {
                                                           cout<<"Chcesz kupic ? (tak/nie)\n";
                                                           cin>>sklepdec;
                                                           if(sklepdec=="tak")
                                                           {
                                                                  nazwabroni=13;
                                                                  kasa=kasa+zwrot;
                                                                  cout<<"Gratuluje zakupu";
                                                                  cout<<endl;
                                                                  continue;
                                                           }
                                             
                                                           else
                                                           cout<<"Nie to nie\n";
                                             }
                                             else
                                             cout<<"Nie stac cie\n";
                             }
                             if(wybskill2=='4')
                             {
                                             
                                             
                                             if(kasa+zwrot>=50000)
                                             {
                                                           cout<<"Chcesz kupic ? (tak/nie)\n";
                                                           cin>>sklepdec;
                                                           if(sklepdec=="tak")
                                                           {
                                                                  nazwabroni=14;
                                                                  kasa=kasa+zwrot;
                                                                  cout<<"Gratuluje zakupu";
                                                                  cout<<endl;
                                                                  continue;
                                                           }
                                             
                                                           else
                                                           cout<<"Nie to nie\n";
                                             }
                                             else
                                             cout<<"Nie stac cie\n";
                             }
                             if(wybskill2=='5')
                             {
                                             
                                             
                                             if(kasa+zwrot>=200000)
                                             {
                                                           cout<<"Chcesz kupic ? (tak/nie)\n";
                                                           cin>>sklepdec;
                                                           if(sklepdec=="tak")
                                                           {
                                                                  nazwabroni=15;
                                                                  kasa=kasa+zwrot;
                                                                  cout<<"Gratuluje zakupu";
                                                                  cout<<endl;
                                                                  continue;
                                                           }
                                             
                                                           else
                                                           cout<<"Nie to nie\n";
                                             }
                                             else
                                             cout<<"Nie stac cie\n";
                             }
                             if(wybskill2=='6')
                             {
                                             
                                             
                                             if(kasa+zwrot>=1000000)
                                             {
                                                           cout<<"Chcesz kupic ? (tak/nie)\n";
                                                           cin>>sklepdec;
                                                           if(sklepdec=="tak")
                                                           {
                                                                  nazwabroni=16;
                                                                  kasa=kasa+zwrot;
                                                                  cout<<"Gratuluje zakupu";
                                                                  cout<<endl;
                                                                  continue;
                                                           }
                                             
                                                           else
                                                           cout<<"Nie to nie\n";
                                             }
                                             else
                                             cout<<"Nie stac cie\n";
                             }
              }
              if(wsklepie=='2')
              {
                             cout<<"Witamy na stanowiski z Lukami !! \nTwoje fundusze wynosza : ";
                             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                             cout<<kasa;
                             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                             cout<<" + zwrot za stara bron czyli "<<zwrot;
                             cout<<"\nA oto dostepne produkty\n";
                             cout<<endl;
                             cout<<"1 - Atak 12, Zasieg 15, Koszt 1000, Odnawianie 3"<<endl;
                             cout<<"2 - Atak 15, Zasieg 15, Koszt 1500, Odnawianie 3"<<endl;
                             cout<<"3 - Atak 17, Zasieg 15, Koszt 20 000, Odnawianie 3"<<endl;
                             cout<<"4 - Atak 20, Zasieg 16, Koszt 50 000, Odnawianie 3"<<endl;
                             cout<<"5 - Atak 30, Zasieg 17, Koszt 200 000, Odnawianie 3"<<endl;
                             cout<<"6 - Atak 35, Zasieg 18, Koszt 1 000 000, Odnawianie 3"<<endl;
                             cout<<"7 - WSTECZ"<<endl;
                             wybskill2=getch();
                             if(wybskill2=='7')
                             goto sklep; 
                             if(wybskill2=='1')
                             {
                                             
                                             
                                             if(kasa+zwrot>=1000)
                                             {
                                                           cout<<"UWAGA JESLI MASZ TARCZE TO ZAMIENI SIEONA NA PIENIADZE\nChcesz kupic ?  (tak/nie)\n";
                                                           cin>>sklepdec;
                                                           if(sklepdec=="tak")
                                                           {
                                                                  nazwabroni=21;
                                                                  kasa=kasa+zwrot;
                                                                  tarcza=0;
                                                                  kasa=kasa+tzwrot;
                                                                  cout<<"Gratuluje zakupu";
                                                                  cout<<endl;
                                                                  kasa=kasa-1000;
                                                                  continue;
                                                           }
                                             
                                                           else
                                                           cout<<"Nie to nie\n";
                                             }
                                             else
                                             cout<<"Nie stac cie\n";
                             }
                             if(wybskill2=='2')
                             {
                                             
                                             
                                             if(kasa+zwrot>=1500)
                                             {
                                                           cout<<"Chcesz kupic ? (tak/nie)\n";
                                                           cin>>sklepdec;
                                                           if(sklepdec=="tak")
                                                           {
                                                                  nazwabroni=22;
                                                                  kasa=kasa+zwrot;
                                                                  tarcza=0;
                                                                  kasa=kasa+tzwrot;
                                                                  cout<<"Gratuluje zakupu";
                                                                  cout<<endl;
                                                                  kasa=kasa-1500;
                                                                  continue;
                                                           }
                                             
                                                           else
                                                           cout<<"Nie to nie\n";
                                             }
                                             else
                                             cout<<"Nie stac cie\n";
                             }
                             if(wybskill2=='3')
                             {
                                             
                                             
                                             if(kasa+zwrot>=20000)
                                             {
                                                           cout<<"Chcesz kupic ? (tak/nie)\n";
                                                           cin>>sklepdec;
                                                           if(sklepdec=="tak")
                                                           {
                                                                  nazwabroni=23;
                                                                  kasa=kasa+zwrot;
                                                                  tarcza=0;
                                                                  kasa=kasa+tzwrot;
                                                                  cout<<"Gratuluje zakupu";
                                                                  cout<<endl;
                                                                  kasa=kasa-20000;
                                                                  continue;
                                                           }
                                             
                                                           else
                                                           cout<<"Nie to nie\n";
                                             }
                                             else
                                             cout<<"Nie stac cie\n";
                             }
                             if(wybskill2=='4')
                             {
                                             
                                             
                                             if(kasa+zwrot>=50000)
                                             {
                                                           cout<<"Chcesz kupic ? (tak/nie)\n";
                                                           cin>>sklepdec;
                                                           if(sklepdec=="tak")
                                                           {
                                                                  nazwabroni=24;
                                                                  kasa=kasa+zwrot;
                                                                  tarcza=0;
                                                                  kasa=kasa+tzwrot;
                                                                  cout<<"Gratuluje zakupu";
                                                                  cout<<endl;
                                                                  kasa=kasa-50000;
                                                                  continue;
                                                           }
                                             
                                                           else
                                                           cout<<"Nie to nie\n";
                                             }
                                             else
                                             cout<<"Nie stac cie\n";
                             }
                             if(wybskill2=='5')
                             {
                                             
                                             
                                             if(kasa+zwrot>=200000)
                                             {
                                                           cout<<"Chcesz kupic ? (tak/nie)\n";
                                                           cin>>sklepdec;
                                                           if(sklepdec=="tak")
                                                           {
                                                                  nazwabroni=25;
                                                                  kasa=kasa+zwrot;
                                                                  tarcza=0;
                                                                  kasa=kasa+tzwrot;
                                                                  cout<<"Gratuluje zakupu";
                                                                  cout<<endl;
                                                                  kasa=kasa-200000;
                                                                  continue;
                                                           }
                                             
                                                           else
                                                           cout<<"Nie to nie\n";
                                             }
                                             else
                                             cout<<"Nie stac cie\n";
                             }
                             if(wybskill2=='6')
                             {
                                             
                                             
                                             if(kasa+zwrot>=1000000)
                                             {
                                                           cout<<"Chcesz kupic ? (tak/nie)\n";
                                                           cin>>sklepdec;
                                                           if(sklepdec=="tak")
                                                           {
                                                                  nazwabroni=26;
                                                                  kasa=kasa+zwrot;
                                                                  tarcza=0;
                                                                  kasa=kasa+tzwrot;
                                                                  kasa=kasa-1000000;
                                                                  cout<<"Gratuluje zakupu";
                                                                  cout<<endl;
                                                                  continue;
                                                           }
                                             
                                                           else
                                                           cout<<"Nie to nie\n";
                                             }
                                             else
                                             cout<<"Nie stac cie\n";
                             }
              }
              if(wsklepie=='3')
              {
                             cout<<"Witamy na stanowiski z Mieczami !! \nTwoje fundusze wynosza : ";
                             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                             cout<<kasa;
                             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                             cout<<" + zwrot za stara bron czyli "<<zwrot;
                             cout<<"\nA oto produkty dostepne\n";
                             cout<<"1 - Atak 8, Zasieg 1, Koszt 1000, Odnawianie 1"<<endl;
                             cout<<"2 - Atak 10, Zasieg 1, Koszt 1500, Odnawianie 1"<<endl;
                             cout<<"3 - Atak 12, Zasieg 1, Koszt 20 000, Odnawianie 1"<<endl;
                             cout<<"4 - Atak 15, Zasieg 1, Koszt 50 000, Odnawianie 1"<<endl;
                             cout<<"5 - Atak 18, Zasieg 1, Koszt 200 000, Odnawianie 1"<<endl;
                             cout<<"6 - Atak 25, Zasieg 1, Koszt 1 000 000, Odnawianie 1"<<endl;
                             cout<<"7 - WSTECZ"<<endl;
                             wybskill2=getch();
                             
                             if(wybskill2=='7')
                             goto sklep; 
                             if(wybskill2=='1')
                             {
                                             
                                             
                                             if(kasa+zwrot>=1000)
                                             {
                                                           cout<<"Chcesz kupic ? (tak/nie)\n";
                                                           cin>>sklepdec;
                                                           if(sklepdec=="tak")
                                                           {
                                                                  nazwabroni=31;
                                                                  kasa=kasa+zwrot;
                                                                  kasa=kasa-1000;
                                                                  cout<<"Gratuluje zakupu";
                                                                  cout<<endl;
                                                                  continue;
                                                           }
                                             
                                                           else
                                                           cout<<"Nie to nie\n";
                                             }
                                             else
                                             cout<<"Nie stac cie\n";
                             }
                             if(wybskill2=='2')
                             {
                                             
                                             
                                             if(kasa+zwrot>=1500)
                                             {
                                                           cout<<"Chcesz kupic ? (tak/nie)\n";
                                                           cin>>sklepdec;
                                                           if(sklepdec=="tak")
                                                           {
                                                                  nazwabroni=32;
                                                                  kasa=kasa+zwrot;
                                                                  kasa=kasa-1500;
                                                                  cout<<"Gratuluje zakupu";
                                                                  cout<<endl;
                                                                  continue;
                                                           }
                                             
                                                           else
                                                           cout<<"Nie to nie\n";
                                             }
                                             else
                                             cout<<"Nie stac cie\n";
                             }
                             if(wybskill2=='3')
                             {
                                             
                                             
                                             if(kasa+zwrot>=20000)
                                             {
                                                           cout<<"Chcesz kupic ? (tak/nie)\n";
                                                           cin>>sklepdec;
                                                           if(sklepdec=="tak")
                                                           {
                                                                  nazwabroni=33;
                                                                  kasa=kasa+zwrot;
                                                                  kasa=kasa-20000;
                                                                  cout<<"Gratuluje zakupu";
                                                                  cout<<endl;
                                                                  continue;
                                                           }
                                             
                                                           else
                                                           cout<<"Nie to nie\n";
                                             }
                                             else
                                             cout<<"Nie stac cie\n";
                             }
                             if(wybskill2=='4')
                             {
                                             
                                             
                                             if(kasa+zwrot>=50000)
                                             {
                                                           cout<<"Chcesz kupic ? (tak/nie)\n";
                                                           cin>>sklepdec;
                                                           if(sklepdec=="tak")
                                                           {
                                                                  nazwabroni=34;
                                                                  kasa=kasa+zwrot;
                                                                  cout<<"Gratuluje zakupu";
                                                                  cout<<endl;
                                                                  kasa=kasa-50000;
                                                                  continue;
                                                           }
                                             
                                                           else
                                                           cout<<"Nie to nie\n";
                                             }
                                             else
                                             cout<<"Nie stac cie\n";
                             }
                             if(wybskill2=='5')
                             {
                                             
                                             
                                             if(kasa+zwrot>=200000)
                                             {
                                                           cout<<"Chcesz kupic ? (tak/nie)\n";
                                                           cin>>sklepdec;
                                                           if(sklepdec=="tak")
                                                           {
                                                                  nazwabroni=35;
                                                                  kasa=kasa+zwrot;
                                                                  kasa=kasa-200000;
                                                                  cout<<"Gratuluje zakupu";
                                                                  cout<<endl;
                                                                  continue;
                                                           }
                                             
                                                           else
                                                           cout<<"Nie to nie\n";
                                             }
                                             else
                                             cout<<"Nie stac cie\n";
                             }
                             if(wybskill2=='6')
                             {
                                             
                                             
                                             if(kasa+zwrot>=1000000)
                                             {
                                                           cout<<"Chcesz kupic ? (tak/nie)\n";
                                                           cin>>sklepdec;
                                                           if(sklepdec=="tak")
                                                           {
                                                                  nazwabroni=36;
                                                                  kasa=kasa+zwrot;
                                                                  kasa=kasa-1000000;
                                                                  cout<<"Gratuluje zakupu";
                                                                  cout<<endl;
                                                                  continue;
                                                           }
                                             
                                                           else
                                                           cout<<"Nie to nie\n";
                                             }
                                             else
                                             cout<<"Nie stac cie\n";
                             }
              }
              if(wsklepie=='4')
              {
                            cout<<"Witamy na stanowiski z Tarczami !! \nTwoje fundusze wynosza : ";
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                            cout<<kasa;
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                            cout<<" + zwrot za stara tarcze czyli "<<tzwrot;
                            cout<<"\nTarczy nie mozesz miec posiadajac luk\nA oto produkty dostepne\n";
                            cout<<"1 - Redukcja obrazen  2, Koszt 1000"<<endl;
                            cout<<"2 - Redukcja obrazen  3, Koszt 1500"<<endl;
                            cout<<"3 - Redukcja obrazen  5, Koszt 20 000"<<endl;
                            cout<<"4 - Redukcja obrazen  7, Koszt 50 000"<<endl;
                            cout<<"5 - Redukcja obrazen  10, Koszt 200 000"<<endl;
                            cout<<"6 - Redukcja obrazen  15, Koszt 1 000 000"<<endl;
                            cout<<"7 - WSTECZ"<<endl;
                            wybskill2=getch();
                             
                            if(wybskill2=='7')
                            goto sklep; 
                             
                            if(wybskill2=='1')
                            {
                                             if(nazwabroni<28)
                                             {
                                                              if(nazwabroni>20)
                                                              {
                                                                               cout<<"Niestety masz luk i nie mozesz kupic tarczy\n";
                                                              }
                                             }
                                             
                                             if(kasa+tzwrot>=1000)
                                             {
                                                                 cout<<"Chcesz kupic ? (tak/nie)\n";
                                                                 cin>>sklepdec;
                                                                 if(sklepdec=="tak")
                                                                 {
                                                                                    tarcza=1;
                                                                                    cout<<"Gratuluje zakupu";
                                                                                    kasa=kasa+tzwrot;
                                                                                    cout<<endl;
                                                                                    kasa=kasa-1000;
                                                                                    continue;
                                                                 }
                                             
                                                                 else
                                                                 cout<<"Nie to nie\n";
                                             }
                                             else
                                             cout<<"Nie stac cie\n";
                             }
                             if(wybskill2=='2')
                            {
                                             
                                             
                                             if(kasa+tzwrot>=1500)
                                             {
                                                                 cout<<"Chcesz kupic ? (tak/nie)\n";
                                                                 cin>>sklepdec;
                                                                 if(sklepdec=="tak")
                                                                 {
                                                                                    tarcza=2;
                                                                                    kasa=kasa+tzwrot;
                                                                                    cout<<"Gratuluje zakupu";
                                                                                    cout<<endl;
                                                                                    kasa=kasa-1500;
                                                                                    continue;
                                                                 }
                                             
                                                                 else
                                                                 cout<<"Nie to nie\n";
                                             }
                                             else
                                             cout<<"Nie stac cie\n";
                             }
                             if(wybskill2=='3')
                            {
                                             
                                             
                                             if(kasa+tzwrot>=20000)
                                             {
                                                                 cout<<"Chcesz kupic ? (tak/nie)\n";
                                                                 cin>>sklepdec;
                                                                 if(sklepdec=="tak")
                                                                 {
                                                                                    tarcza=3;
                                                                                    kasa=kasa+tzwrot;
                                                                                    cout<<"Gratuluje zakupu";
                                                                                    cout<<endl;
                                                                                    kasa=kasa-20000;
                                                                                    continue;
                                                                 }
                                             
                                                                 else
                                                                 cout<<"Nie to nie\n";
                                             }
                                             else
                                             cout<<"Nie stac cie\n";
                             }
                             if(wybskill2=='4')
                            {
                                             
                                             
                                             if(kasa+tzwrot>=50000)
                                             {
                                                                 cout<<"Chcesz kupic ? (tak/nie)\n";
                                                                 cin>>sklepdec;
                                                                 if(sklepdec=="tak")
                                                                 {
                                                                                    tarcza=4;
                                                                                    kasa=kasa+tzwrot;
                                                                                    cout<<"Gratuluje zakupu";
                                                                                    cout<<endl;
                                                                                    kasa=kasa-50000;
                                                                                    continue;
                                                                 }
                                             
                                                                 else
                                                                 cout<<"Nie to nie\n";
                                             }
                                             else
                                             cout<<"Nie stac cie\n";
                             }
                             if(wybskill2=='5')
                            {
                                             
                                             
                                             if(kasa+tzwrot>=200000)
                                             {
                                                                 cout<<"Chcesz kupic ? (tak/nie)\n";
                                                                 cin>>sklepdec;
                                                                 if(sklepdec=="tak")
                                                                 {
                                                                                    tarcza=5;
                                                                                    kasa=kasa+tzwrot;
                                                                                    cout<<"Gratuluje zakupu";
                                                                                    cout<<endl;
                                                                                    kasa=kasa-200000;
                                                                                    continue;
                                                                 }
                                             
                                                                 else
                                                                 cout<<"Nie to nie\n";
                                             }
                                             else
                                             cout<<"Nie stac cie\n";
                             }if(wybskill2=='6')
                            {
                                             
                                             
                                             if(kasa+tzwrot>=1000000)
                                             {
                                                                 cout<<"Chcesz kupic ? (tak/nie)\n";
                                                                 cin>>sklepdec;
                                                                 if(sklepdec=="tak")
                                                                 {
                                                                                    tarcza=6;
                                                                                    kasa=kasa+tzwrot;
                                                                                    kasa=kasa-1000000;
                                                                                    cout<<"Gratuluje zakupu";
                                                                                    cout<<endl;
                                                                                    continue;
                                                                 }
                                             
                                                                 else
                                                                 cout<<"Nie to nie\n";
                                             }
                                             else
                                             cout<<"Nie stac cie\n";
                             }
              }
                            
                             
                             
}
                             
//skillownia
if(powalce=='2')
{
              skill:
              cout<<"Pasywne - 1 | Aktywne - 2 | Wstecz - 3\n";
              wybskill=getch();
              if(wybskill=='3')
              continue;
              
              if(wybskill=='2')
              wybskill2=0;
              
              
              
//Pasywne
              if(wybskill=='1')
              {
                             cout<<"1 - Bieganie | 2 - Zywotnosc | 3 - Mana | 4 - Redukcja obr. | 5 - Wstecz\n";
                             wybskill2=getch();
                             if(wybskill2=='5')
                             goto skill;
                             
                             if(wybskill2=='1')
                             {
                                              cout<<"Witaj "<<nick<<" !! Twoje fundusze wynosza : ";
                                              SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                              cout<<kasa;
                                              SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                              cout<<" Twoj exp wynosi : "<<exp<<"\n";
                                              cout<<"Aby moc nabyc umiejetnosc musisz miec wystarczajaca liczbe expa\n";
                                              koszt=pr*pr*pr*pr;
                                              kosztxp=pr*pr*pr*pr*pr*pr;
                                              cout<<"+1 pnkt do biegania kosztuje : "<<koszt<<"\nA wymagany exp to : "<<kosztxp;
                                              cout<<"\nChcesz kupic ?\n(tak/nie)\n";
                                              cin>>sklepdec;
                                              if(sklepdec=="tak")
                                              {
                                                                 if(exp>=kosztxp)
                                                                 {
                                                                                   if(kasa>=koszt)
                                                                                   {
                                                                                                     pr++;
                                                                                                     kasa=kasa-koszt;
                                                                                                     cout<<"Zostales szczesliwym nabywca 1 punkta do biegania\n";
                                                                                                     continue;
                                                                                   }
                                                                 }
                                                                 if(kasa<koszt)
                                                                 {
                                                                                cout<<"Nie stac cie !\n";
                                                                 }
                                                                 if(exp<kosztxp)
                                                                 {
                                                                                  cout<<"Masz za malo kunktow doswiadczenia (expa)\n";
                                                                 }
                                              }
                                              else
                                              cout<<"nie to nie\n";
                             }
                             if(wybskill2=='2')
                             {
                                                 cout<<"Witaj "<<nick<<" !! Twoje fundusze wynosza : ";
                                              SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                              cout<<kasa;
                                              SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                              cout<<" Twoj exp wynosi : "<<exp<<"\n";
                                              koszt=maxhp*10;
                                              kosztxp=maxhp*maxhp;
                                              cout<<"+10 max hp kosztuje "<<koszt<<" i trzeba miec "<<kosztxp<<" expa\n";
                                              cout<<"\nChcesz kupic ?\n(tak/nie)\n";
                                              cin>>sklepdec;
                                              if(sklepdec=="tak")
                                              {
                                                                 if(exp>=kosztxp)
                                                                 {
                                                                                   if(kasa>=koszt)
                                                                                   {
                                                                                                     maxhp=maxhp+10;
                                                                                                 
                                                                                                     kasa=kasa-koszt;
                                                                                                     cout<<"Zostales szczesliwym nabywca 10 punktow hp\n";
                                                                                                     continue;
                                                                                   }
                                                                 }
                                                                 if(kasa<koszt)
                                                                 {
                                                                                cout<<"Nie stac cie !\n";
                                                                 }
                                                                 if(exp<kosztxp)
                                                                 {
                                                                                  cout<<"Masz za malo kunktow doswiadczenia (expa)\n";
                                                                 }
                                              }
                                              else
                                              cout<<"nie to nie\n";
                             }
              }
              if(wybskill2=='3')
              {
                                cout<<"Witaj "<<nick<<" !! Twoje fundusze wynosza : ";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                cout<<kasa;
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                cout<<" Twoj exp wynosi : "<<exp<<"\n";
                                koszt=maxmp*15;
                                kosztxp=koszt*15;
                                cout<<"+10 punktow mp kosztuje "<<koszt<<" natomiast expa musisz miec "<<kosztxp;
                                cout<<"\nChcesz kupic ?\n(tak/nie)\n";
                                cin>>sklepdec;
                                if(sklepdec=="tak")
                                {
                                                   if(exp>=kosztxp)
                                                   {
                                                                   if(kasa>=koszt)
                                                                   {
                                                                                  maxmp=maxmp+10;
                                                                                  kasa=kasa-koszt;
                                                                                  cout<<"Zostales szczesliwym nabywca 10 punktow mp\n";
                                                                                  continue;
                                                                   }
                                                                   }
                                                                   if(kasa<koszt)
                                                                   {
                                                                                cout<<"Nie stac cie !\n";
                                                                   }
                                                                 if(exp<kosztxp)
                                                                 {
                                                                                  cout<<"Masz za malo kunktow doswiadczenia (expa)\n";
                                                                 }
                                              }
                                else
                                cout<<"nie to nie\n";
                                }
              if(wybskill2=='4')
              {
                             cout<<"Witaj "<<nick<<" !! Twoje fundusze wynosza : ";
                             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                             cout<<kasa;
                             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                             cout<<" Twoj exp wynosi : "<<exp<<"\n";         
                             koszt=(redobr+1)*(redobr+1)*100;
                             kosztxp=koszt*10;
                             cout<<"+1 do redukcji obrarzen kosztuje "<<koszt<<" natomiast expa musisz miec "<<kosztxp;
                             cout<<"\nChcesz kupic ?\n(tak/nie)\n";
                             cin>>sklepdec;
                             if(sklepdec=="tak")
                             {
                                                if(exp>=kosztxp)
                                                {
                                                                if(kasa>=koszt)
                                                                {
                                                                               redobr++;
                                                
                                                                               kasa=kasa-koszt;
                                                                               cout<<"Zostales szczesliwym nabywca +1 punktu redukcji obrarzen\n";
                                                                               continue;
                                                                }
                                                }
                                                if(kasa<koszt)
                                                {
                                                              cout<<"Nie stac cie !\n";
                                                }
                                                if(exp<kosztxp)
                                                {
                                                               cout<<"Masz za malo kunktow doswiadczenia (expa)\n";
                                                }
                                              }
                                else
                                cout<<"nie to nie\n";
                                }
                                               
}                                
//Aktywne
         if(wybskill=='2')
         {
                       cout<<"1 - Lecznie | 2 - Bieganie | 3 - Jednorazowa redukcja orbazen";
                       cout<<endl;
                       cout<<"4 - uniki | 5 - Zwiekrzony atak | 6 - Czasowy regen hp";
                       cout<<endl;
                       cout<<"7 - Czasowy regen mp | 8 - Hp do Mp | 9 - Wykradanie Zycia";
                       cout<<endl;
                       cout<<"10 - WSTECZ";
                       cout<<endl;
                       cin>>wybskill2;
                       
                       if(wybskill2==10)
                       goto skill;
         
         
         //Leczenie
                   if(wybskill2==1)
                   {
                                   if(leczenies>=10)
                                   {
                                                    cout<<"\nTen skill jest juz na 10 poziomie";
                                                    continue;
                                   }
                                   cout<<"Karzdy skill moze miec 10 poziomow\n"<<nick<<" masz leczenie na poziomie "<<leczenies;
                                   cout<<endl;
                                   koszt=(leczenies+1)*(leczenies+1)*(leczenies+1)*100;
                                   kosztxp=(leczenies+1)*(leczenies+1)*(leczenies+1)*(leczenies+1)*100;
                                   cout<<"Aby nabyc ten skill potrzebujesz "<<koszt<<" kasy\nNatomiast expa musisz miec "<<kosztxp;
                                   cout<<endl;
                                   cout<<"Chcesz kupic ? | (tak/nie)\n";
                                   cin>>sklepdec;
                                   if(sklepdec=="tak")
                                   {
                                                      if(exp>=kosztxp)
                                                      {
                                                                      if(kasa>=koszt)
                                                                      {
                                                                                     leczenies++;
                                                
                                                                                     kasa=kasa-koszt;
                                                                                     cout<<"Zostales szczesliwym nabywca nowego poziomyu skilla ''leczenie''\n";
                                                                                     continue;
                                                                      }
                                                }
                                                if(kasa<koszt)
                                                {
                                                              cout<<"Nie stac cie !\n";
                                                }
                                                if(exp<kosztxp)
                                                {
                                                               cout<<"Masz za malo kunktow doswiadczenia (expa)\n";
                                                }
                                              }
                                else
                                cout<<"nie to nie\n";
                   }
         //Bieganie
                   if(wybskill2==2)
                   {
                                   if(bieganies>=10)
                                   {
                                                    
                                                    cout<<"\nTen skill jest juz na 10 poziomie";
                                                    continue;
                                   }
                                   cout<<"Karzdy skill moze miec 10 poziomow\n"<<nick<<" masz Aure biegania na poziomie "<<bieganies;
                                   cout<<endl;
                                   cout<<"Ten skill tymczasowo zwiekrza predkosc twojego poruszania sie";
                                   cout<<endl;
                                   koszt=(bieganies+1)*(bieganies+1)*(bieganies+1)*100;
                                   kosztxp=(bieganies+1)*(bieganies+1)*(bieganies+1)*(bieganies+1)*100;
                                   cout<<"Aby nabyc ten skill potrzebujesz "<<koszt<<" kasiorki";
                                   cout<<endl;
                                   cout<<"Natomiast expa musisz miec "<<kosztxp;
                                   cout<<endl;
                                   cout<<"To jak bedzie, kupujesz ? (tak/nie)";
                                   cout<<endl;
                                   cin>>sklepdec;
                                   if(sklepdec=="tak")
                                   {
                                                      if(exp>=kosztxp)
                                                      {
                                                                      if(kasa>=koszt)
                                                                      {
                                                                                     bieganies++;
                                                
                                                                                     kasa=kasa-koszt;
                                                                                     cout<<"Zostales szczesliwym nabywca nowego poziomyu skilla ''aura biegania''\n";
                                                                                     continue;
                                                                      }
                                                }
                                                if(kasa<koszt)
                                                {
                                                              cout<<"Nie stac cie !\n";
                                                }
                                                if(exp<kosztxp)
                                                {
                                                               cout<<"Masz za malo punktow doswiadczenia (expa)\n";
                                                }
                                              }
                                else
                                cout<<"nie to nie\n";
                   }
                   //jednorazowa redukcja obrazeniow
                                                    if(wybskill2==3)
                                                    {
                                                                    if(jros>=10)
                                                                    {
                                                                    cout<<"\nTen skill jest juz na 10 poziomie";
                                                                    continue;
                                                                    }
                                                                    cout<<"Karzdy skill moze miec 10 poziomow\n"<<nick<<" masz Jednorazowa redukcje obrazen na poziomie "<<jros;
                                                                    cout<<endl;
                                                                    cout<<"Ten skill jednorazowo redukuje obrazenia ktore otrzymujesz o iles tam\nNa 10 poziomie redukuje cale";
                                                                    cout<<endl;
                                                                    koszt=(jros+1)*(jros+1)*(jros+1)*100;
                                                                    kosztxp=(jros+1)*(jros+1)*(jros+1)*(jros+1)*100;
                                                                    cout<<"Aby nabyc ten skill potrzebujesz "<<koszt<<" kasiorki";
                                                                    cout<<endl;
                                                                    cout<<"Natomiast expa musisz miec "<<kosztxp;
                                                                    cout<<endl;
                                                                    cout<<"To jak bedzie, kupujesz ? (tak/nie)";
                                                                    cout<<endl;
                                                                    cin>>sklepdec;
                                                                    if(sklepdec=="tak")
                                                                    {
                                                                                       if(exp>=kosztxp)
                                                                                       {
                                                                                       if(kasa>=koszt)
                                                                                       {
                                                                                                       jros++;
                                                
                                                                                                       kasa=kasa-koszt;
                                                                                                       cout<<"Zostales szczesliwym nabywca nowego poziomyu skilla ''Jednorazowa redukcja obrazen''\n";
                                                                                                       continue;
                                                                                       }
                                                                                       }
                                                                                       if(kasa<koszt)
                                                                                       {
                                                                                                     cout<<"Nie stac cie !\n";
                                                                                       }
                                                                                       if(exp<kosztxp)
                                                                                       {
                                                                                                      cout<<"Masz za malo punktow doswiadczenia (expa)\n";
                                                                                       }
                                                                   }
                                                                   else
                                                                   cout<<"nie to nie\n";
                                                   }
                                                   // UUUNNNNNIIIIIIIIKKKKKKKKIIIII
                   if(wybskill2==4)
                   {
                                   if(unikis>=10)
                                   {
                                   
                                                    cout<<"\nTen skill jest juz na 10 poziomie";
                                                    continue;
                                   }
                                   cout<<"Karzdy skill moze miec 10 poziomow\n"<<nick<<" masz Uniki na poziomie "<<unikis;
                                   cout<<endl;
                                   cout<<"Ten skill daje czasowo szanse na unikniecie udezenia ";
                                   cout<<endl;
                                   koszt=(unikis+1)*(unikis+1)*(unikis+1)*100;
                                   kosztxp=(unikis+1)*(unikis+1)*(unikis+1)*(unikis+1)*100;
                                   cout<<"Aby nabyc ten skill potrzebujesz "<<koszt<<" kasiorki";
                                   cout<<endl;
                                   cout<<"Natomiast expa musisz miec "<<kosztxp;
                                   cout<<endl;
                                   cout<<"To jak bedzie, kupujesz ? (tak/nie)";
                                   cout<<endl;
                                   cin>>sklepdec;
                                   if(sklepdec=="tak")
                                   {
                                                      if(exp>=kosztxp)
                                                      {
                                                                      if(kasa>=koszt)
                                                                      {
                                                                                     unikis++;
                                                                                     kasa=kasa-koszt;
                                                                                     cout<<"Zostales szczesliwym nabywca nowego poziomyu skilla ''Uniki''\n";
                                                                                     continue;
                                                                      }
                                                     }
                                                     if(kasa<koszt)
                                                     {
                                                                   cout<<"Nie stac cie !\n";
                                                     }
                                                     if(exp<kosztxp)
                                                     {
                                                                    cout<<"Masz za malo punktow doswiadczenia (expa)\n";
                                                     }
                                                   
                                   }
                                     else
                                         cout<<"nie to nie\n";
                   }
                   // zwiekrzony atak
                   if(wybskill2==5)
                   {
                                   if(zas>=10)
                                   {
                                              
                                              cout<<"\nTen skill jest juz na 10 poziomie";
                                              continue;
                                   }
                                   cout<<"Karzdy skill moze miec 10 poziomow\n"<<nick<<" masz Uniki na poziomie "<<zas;
                                   cout<<endl;
                                   cout<<"Ten skill czasowo zwiekrza moc twoich udezen";
                                   cout<<endl;
                                   koszt=(zas+1)*(zas+1)*(zas+1)*100;
                                   kosztxp=(zas+1)*(zas+1)*(zas+1)*(zas+1)*100;
                                   cout<<"Aby nabyc ten skill potrzebujesz "<<koszt<<" kasiorki";
                                   cout<<endl;
                                   cout<<"Natomiast expa musisz miec "<<kosztxp;
                                   cout<<endl;
                                   cout<<"To jak bedzie, kupujesz ? (tak/nie)";
                                   cout<<endl;
                                   cin>>sklepdec;
                                   if(sklepdec=="tak")
                                   {
                                                      if(exp>=kosztxp)
                                                      {
                                                                      if(kasa>=koszt)
                                                                      {
                                                                                     zas++;
                                                                                     kasa=kasa-koszt;
                                                                                     cout<<"Zostales szczesliwym nabywca nowego poziomyu skilla ''Zwiekrzony Atak''\n";
                                                                                     continue;
                                                                      }
                                                     }
                                                     if(kasa<koszt)
                                                     {
                                                                   cout<<"Nie stac cie !\n";
                                                     }
                                                     if(exp<kosztxp)
                                                     {
                                                                    cout<<"Masz za malo punktow doswiadczenia (expa)\n";
                                                     }
                                                   
                                   }
                                     else
                                         cout<<"nie to nie\n";
                   }
                   //Czasowy regen hp
                   if(wybskill2==6)
                   {
                                   if(crhps>=10)
                                   {
                                                    cout<<"\nTen skill jest juz na 10 poziomie";
                                                    continue;
                                   }
                                   cout<<"Karzdy skill moze miec 10 poziomow\n"<<nick<<" masz Czasowy regen hp na poziomie "<<crhps;
                                   cout<<endl;
                                   cout<<"Ten skill czasowo wytwarza regenetacje hp";
                                   cout<<endl;
                                   koszt=(crhps+1)*(crhps+1)*(crhps+1)*100;
                                   kosztxp=(crhps+1)*(crhps+1)*(crhps+1)*(crhps+1)*100;
                                   cout<<"Aby nabyc ten skill potrzebujesz "<<koszt<<" kasiorki";
                                   cout<<endl;
                                   cout<<"Natomiast expa musisz miec "<<kosztxp;
                                   cout<<endl;
                                   cout<<"To jak bedzie, kupujesz ? (tak/nie)";
                                   cout<<endl;
                                   cin>>sklepdec;
                                   if(sklepdec=="tak")
                                   {
                                                      if(exp>=kosztxp)
                                                      {
                                                                      if(kasa>=koszt)
                                                                      {
                                                                                     crhps++;
                                                                                     kasa=kasa-koszt;
                                                                                     cout<<"Zostales szczesliwym nabywca nowego poziomyu skilla ''Czasowy regen hp''\n";
                                                                                     continue;
                                                                      }
                                                     }
                                                     if(kasa<koszt)
                                                     {
                                                                   cout<<"Nie stac cie !\n";
                                                     }
                                                     if(exp<kosztxp)
                                                     {
                                                                    cout<<"Masz za malo punktow doswiadczenia (expa)\n";
                                                     }
                                                   
                                   }
                                     else
                                         cout<<"nie to nie\n";
                   }
                   //Czasowy regen mp
                   if(wybskill2==7)
                   {
                                   if(crmps>=10)
                                   {
                                                    cout<<"\nTen skill jest juz na 10 poziomie";
                                                    continue;
                                   }
                                   cout<<"Karzdy skill moze miec 10 poziomow\n"<<nick<<" masz Czasowy regen hp na poziomie "<<crmps;
                                   cout<<endl;
                                   cout<<"Ten skill czasowo wytwarza regenetacje hp";
                                   cout<<endl;
                                   koszt=(crmps+1)*(crmps+1)*(crmps+1)*100;
                                   kosztxp=(crmps+1)*(crmps+1)*(crmps+1)*(crmps+1)*100;
                                   cout<<"Aby nabyc ten skill potrzebujesz "<<koszt<<" kasiorki";
                                   cout<<endl;
                                   cout<<"Natomiast expa musisz miec "<<kosztxp;
                                   cout<<endl;
                                   cout<<"To jak bedzie, kupujesz ? (tak/nie)";
                                   cout<<endl;
                                   cin>>sklepdec;
                                   if(sklepdec=="tak")
                                   {
                                                      if(exp>=kosztxp)
                                                      {
                                                                      if(kasa>=koszt)
                                                                      {
                                                                                     crmps++;
                                                                                     kasa=kasa-koszt;
                                                                                     cout<<"Zostales szczesliwym nabywca nowego poziomyu skilla ''Czasowy regen mp''\n";
                                                                                     continue;
                                                                      }
                                                     }
                                                     if(kasa<koszt)
                                                     {
                                                                   cout<<"Nie stac cie !\n";
                                                     }
                                                     if(exp<kosztxp)
                                                     {
                                                                    cout<<"Masz za malo punktow doswiadczenia (expa)\n";
                                                     }
                                                   
                                   }
                                     else
                                         cout<<"nie to nie\n";
                   }
                   //hpdomp
                   if(wybskill2==8)
                   {
                                   if(hdms>=10)
                                   {
                                                    cout<<"\nTen skill jest juz na 10 poziomie";
                                                    continue;
                                   }
                                   cout<<"Karzdy skill moze miec 10 poziomow\n"<<nick<<" masz Hp do Mp na poziomie "<<hdms;
                                   cout<<endl;
                                   cout<<"Ten skill czasowo wytwarza regenetacje hp";
                                   cout<<endl;
                                   koszt=(hdms+1)*(hdms+1)*(hdms+1)*100;
                                   kosztxp=(hdms+1)*(hdms+1)*(hdms+1)*(hdms+1)*100;
                                   cout<<"Aby nabyc ten skill potrzebujesz "<<koszt<<" kasiorki";
                                   cout<<endl;
                                   cout<<"Natomiast expa musisz miec "<<kosztxp;
                                   cout<<endl;
                                   cout<<"To jak bedzie, kupujesz ? (tak/nie)";
                                   cout<<endl;
                                   cin>>sklepdec;
                                   if(sklepdec=="tak")
                                   {
                                                      if(exp>=kosztxp)
                                                      {
                                                                      if(kasa>=koszt)
                                                                      {
                                                                                     hdms++;
                                                                                     kasa=kasa-koszt;
                                                                                     cout<<"Zostales szczesliwym nabywca nowego poziomyu skilla ''HP do MP''\n";
                                                                                     continue;
                                                                      }
                                                     }
                                                     if(kasa<koszt)
                                                     {
                                                                   cout<<"Nie stac cie !\n";
                                                     }
                                                     if(exp<kosztxp)
                                                     {
                                                                    cout<<"Masz za malo punktow doswiadczenia (expa)\n";
                                                     }
                                                   
                                   }
                                     else
                                         cout<<"nie to nie\n";
                   }
                   //Drain           
                   if(wybskill2==9)
                   {
                                   if(drains>=10)
                                   {
                                                    cout<<"\nTen skill jest juz na 10 poziomie";
                                                    continue;
                                   }
                                   cout<<"Karzdy skill moze miec 10 poziomow\n"<<nick<<" masz Wykradanie zycia na poziomie "<<drains;
                                   cout<<endl;
                                   cout<<"Ten skill czasowo wytwarza regenetacje hp";
                                   cout<<endl;
                                   koszt=(drains+1)*(drains+1)*(drains+1)*100;
                                   kosztxp=(drains+1)*(drains+1)*(drains+1)*(drains+1)*100;
                                   cout<<"Aby nabyc ten skill potrzebujesz "<<koszt<<" kasiorki";
                                   cout<<endl;
                                   cout<<"Natomiast expa musisz miec "<<kosztxp;
                                   cout<<endl;
                                   cout<<"To jak bedzie, kupujesz ? (tak/nie)";
                                   cout<<endl;
                                   cin>>sklepdec;
                                   if(sklepdec=="tak")
                                   {
                                                      if(exp>=kosztxp)
                                                      {
                                                                      if(kasa>=koszt)
                                                                      {
                                                                                     drains++;
                                                                                     kasa=kasa-koszt;
                                                                                     cout<<"Zostales szczesliwym nabywca nowego poziomyu skilla ''Wykradanie zycia''\n";
                                                                                     continue;
                                                                      }
                                                     }
                                                     if(kasa<koszt)
                                                     {
                                                                   cout<<"Nie stac cie !\n";
                                                     }
                                                     if(exp<kosztxp)
                                                     {
                                                                    cout<<"Masz za malo punktow doswiadczenia (expa)\n";
                                                     }
                                                   
                                   }
                                     else
                                         cout<<"nie to nie\n";
                   }
         
         
         
         
         
         
         
         

         
         
         }
         
         
         
         
                                         


//Walka
if(powalce=='3')
{
              
              walkaa:
              koksiaz=0;
              cout<<"1 - Zwykly mob\n2 - koks\n3 - boss\n4 - wstecz\n";
              mk=getch();
              if(mk=='4')
              continue;
              
              
              if(mk=='1')
              {
              cout<<"Wybierz:\n";
              cout<<"Zycie moba\n";
              cin>>zyciem;
              zyciemm=zyciem;
              cout<<"Przypiernicz moba\n";
              cin>>mocm;
              cout<<"Predkosc moba\n";
              cin>>prm;
              }
              if(mk=='2')
              {
                       cout<<"Sa koksy na 3 poziomach im wiekrzy poziom tym silniejszy koks\n";
                       cout<<endl<<"( 1 / 2 / 3 / 4-wstecz )"<<endl;
                       koksiaz=getch();
                       if(koksiaz=='4')
                       goto walkaa;
                       if(koksiaz=='1')
                       {
                                     if(koks1==1)
                                     {
                                                 cout<<"Tego koksa juz zabiles\n";
                                                 goto walkaa;
                                     }
                                     
                                     zyciem=2000;
                                     mocm=12;
                                     prm=8;
                                     cout<<"Koksiaz ma 2000 zycia moc 12 i predkosc 8\n";
                       }
                       if(koksiaz=='2')
                       {
                                     if(koks2==1)
                                     {
                                                 cout<<"Tego koksa juz zabiles\n";
                                                 goto walkaa;
                                     }
                                     
                                     zyciem=5000;
                                     mocm=16;
                                     prm=12;
                                     cout<<"Koksiaz ma 5000 zycia moc 16 i predkosc 12\n";
                       }
                       if(koksiaz=='3')
                       {
                                     if(koks3==1)
                                     {
                                                 cout<<"Tego koksa juz zabiles\n";
                                                 goto walkaa;
                                     }
                                     
                                     zyciem=8000;
                                     mocm=20;
                                     prm=15;
                                     cout<<"Koksiaz ma 8000 zycia moc 20 i predkosc 15\n";
                       }
              } 
              if(mk=='3')
              goto sapek;
              
              
              
              wluniki=0;
              wlbieganie=0;
              zycie=maxhp;
              mana=maxmp;
              dystans=15;
              odnawianie=0;
              odnawianiebiegania=0;
              speeds=0;
              rejro=0;
              recrmp=0;
              recrhp=0;
              wlza=0;
              reza=0;
              reuniki=0;
              redrain=0;
              timecrmp=0;
              za1=0;
              timeuniki=0;
              times=0;
while (135)
{

if(zycie<=0)
{
cout<<"niestety przegrales ta walke\n";
cout<<"Jeszcze raz ??\ntak/nie\n";
cin>>decyzja;
if(decyzja=="tak")
{
break;
}
if(decyzja=="nie")
{
goto koniec;
}
}              
              
              
cout<<nick<<" masz :";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
cout<<zycie;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
 cout<<" zycia i ";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
cout<<mana;
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
cout<<" Many\n";
cout<<"MOB ma :";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
 cout<<zyciem;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
 cout<<" zycia";
   cout<<"Dystans pomiedzy wami wynosi :";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    cout<<dystans;
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
       cout<<"\n";
pomiedzy2:
          
          
cout<<"Co robisz ?\n1-podchodze | 2-atak odnawianie :";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 21);
cout<<odnawianie;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
cout<<" | 3-odejscie | 4-Nic";
cout<<endl;

cout<<endl;
cout<<"Skille :";
cout<<endl;
if(leczenies>0)
{
               kosztmp=leczenies*10;
               cout<<"a - Leczenie, koszt mp = "<<kosztmp<<" Moc leczenia "<<leczenie<<endl;
               
}
if(bieganies>0)
{
               cout<<"b - Aura biegania, koszt mp = "<<mpbieganie<<" Czas trwania "<<speedtime<<" + Predkosc "<<speed<<" odnawianie : ";
               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 21);
               cout<<odnawianiebiegania;
               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
               cout<<endl;
}
if(jros>0)
{
          cout<<"c - Jednorazowa redukcja obr.koszt mp = "<<mpjro<<" Redukowane obr. = "<<jro<<" Odnawianie = ";
          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 21);
          cout<<rejro;
          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
          cout<<endl;
}
if(unikis>0)
{
            cout<<"d - Uniki, koszt mp = "<<mpuniki<<" Czas = "<<tuniki<<" a szansa na blok to 1/"<<uniki<<" Odnawianie = ";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 21);
            cout<<reuniki;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            cout<<endl;
}
if(zas>0)
{
         cout<<"e - Zwiekrzone atak mp = "<<mpza<<" Czast trawnia "<<tza<<" moc  = "<<za<<" Odnawianie  = ";
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 21);
         cout<<reza;
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
         cout<<endl;
}
if(crhps>0)
{
           cout<<"f - Czasowy regen hp, mp = "<<mpcrhp<<" Czas trwania "<<timecrhp<<" moc leczenia = "<<crhp<<" odnawianie = ";
           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 21);
           cout<<recrhp;
           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
           cout<<endl;
} 
if(crmps>0)
{
           cout<<"g - Czasowy regen mp, mp = 10 Czas trwania "<<tcrmp<<" mana odnawiana "<<crmp<<" odnawianie = ";
           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 21);
           cout<<recrmp;
           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
           cout<<endl;
}
if(hdms>0)
{
          cout<<"h - Hp do Mp, koszt hp = "<<hphdm<<" odnawiana mana = "<<hdm;
          cout<<endl;
}
if(drains>0)
{
            cout<<"i - Wykradanie zycia, mp = "<<mpdrain<<" moc = "<<drain<<" odnawianie =";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 21);
            cout<<redrain;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            cout<<endl;
}


















czynnosc=getch();
if (czynnosc=='1')
{
                dystans=dystans-pr-speeds;
                if(dystans<1)
                dystans=1;
}
if (czynnosc=='2')
{
                               if(dystans>zasieg)
                             {
                                               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                          cout<<"\n\nNiestety jestes umiejscowiony za daleko\n";
                                             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                          goto pomiedzy2;
                             }
                             if(dystans<=zasieg)
                             {
                                                if(odnawianie>0)
                                                {
                                                                cout<<"\n\nNiestety musisz poczekac na odnowienie\n";
                                                                goto pomiedzy2;
                                                }
                                                if(odnawianie<=0)
                                                {
                                                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 300);
                                                                 cout<<"\n\nTwoj przeciwnik otrzymuje obrazenie w wysokosci "<<moc;
                                                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                                                 if(wlza==1)
                                                                 {
                                                                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 300);
                                                                            cout<<" + "<<za;
                                                                            zyciem=zyciem-za;
                                                                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                                                 }
                                                                 zyciem=zyciem-moc;
                                                                 odnawianie=reuse;
                                                                 cout<<endl;
                                           
                                                }
                           
                           
                           }




// koniec czynnosci 2
}

if (czynnosc=='3')
{
                dystans=dystans+pr+speeds;
                }
//koniec czynnosci 3

if(czynnosc==4)
cout<<"len\n";
//koniec czynnosci 4


//SKILLE !!!!!!!!!

if(czynnosc=='a')
{
                
                if(mana<kosztmp)
                {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                cout<<"Masz za malo punktow mp\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                goto pomiedzy2;
                }
                if(mana>=kosztmp)
                {
                                    if(zycie+leczenie>maxhp)
                                    {
                                                         zycie=maxhp;
                                                         mana=mana-kosztmp;
                                                         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                                         cout<<"Twoje zycie znowu jest pelne\n";
                                                         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                    }
                                    else
                                    {
                                        zycie=zycie+leczenie;
                                        mana=mana-kosztmp;
                                        cout<<"Zyskujesz ";
                                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                        cout<<leczenie;
                                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                        cout<<" punktow zycia\n";
                                    }
                }
               
                
}
if(czynnosc=='b')
{
                if(odnawianiebiegania>0)
                {
                                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                        cout<<"jeszcze sie nie odnowilo\n";
                                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                        goto pomiedzy2;
                }
                if(mana<mpbieganie)
                {
                                   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                   cout<<"Masz za malo punktow mp\n";
                                   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                   goto pomiedzy2;
                }
                if(mana>=mpbieganie)
                {
                                    if(odnawianiebiegania==0)
                                    {
                                                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
                                                            cout<<"Wlaczyles Aure biegania\n";
                                                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                                            mana=mana-mpbieganie;
                                                            wlbieganie=1;
                                                            speeds=speed;
                                                            odnawianiebiegania=16;
                                                            times=speedtime+1;
                                    }
                }
}
if(czynnosc=='c')
{
                if(mana<mpjro)
                {
                              SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                              cout<<"Masz za malo punktow mp\n";
                              SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                              goto pomiedzy2;
                }
                if(rejro>0)
                {
                           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                           cout<<"jeszcze sie nie odnowilo\n";
                           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                           goto pomiedzy2;
                }
                if(mana>=mpjro)
                {
                               if(rejro==0)
                               {
                                           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
                                           cout<<"Wlaczyles jednorazowa redukcje obrazen!";
                                           cout<<endl;
                                           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                           rejro=7;
                                           mana=mana-mpjro;
                                           wljro=1;
                                           goto pomiedzy2;
                               }
                }
}
if(czynnosc=='d')
{
                if(mana<mpuniki)
                {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                cout<<"Masz za malo punktow mp\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                goto pomiedzy2;
                }
                if(reuniki>0)
                {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                cout<<"Jeszcze sie nie odnowilo sie\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                goto pomiedzy2;
                }
                if(mana>=mpuniki)
                {
                                 wluniki=1;
                                 mana=mana-mpuniki;
                                 reuniki=21;
                                 timeuniki=tuniki+1;
                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
                                 cout<<"Wlaczyles uniki\n";
                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                }
}
if(czynnosc=='e')
{
                if(mana<mpza)
                {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                cout<<"Masz za malo punktow mp\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                goto pomiedzy2;
                }
                if(reza>0)
                {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                cout<<"Jeszcze sie nie odnowilo sie\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                goto pomiedzy2;
                }
                if(mana>=mpza)
                {
                                 wlza=1;
                                 mana=mana-mpza;
                                 reza=30;
                                 za1=tza+1;
                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                                 cout<<"Wlaczyles zwiekrzone ataki\n";
                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                
                }
}
if(czynnosc=='f')
{
                if(mana<mpcrhp)
                {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                cout<<"Masz za malo punktow mp\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                goto pomiedzy2;
                }
                if(recrhp>0)
                {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                cout<<"Jeszcze sie nie odnowilo sie\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                goto pomiedzy2;
                }
                if(mana>=mpcrhp)
                {
                                wlcrhp=1;
                                tcrhp=timecrhp+1;
                                mana=mana-mpcrhp;
                                recrhp=60;
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                                cout<<"Wlaczyles Czasowy regen hp\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                }
}
if(czynnosc=='g')
{
                if(mana<10)
                {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                cout<<"Masz za malo punktow mp\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                goto pomiedzy2;
                }
                if(recrmp>0)
                {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                cout<<"Jeszcze sie nie odnowilo sie\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                goto pomiedzy2;
                }        
                if(mana>=10)
                {
                                wlcrmp=1;
                                mana=mana-10;
                                recrmp=60;
                                timecrmp=tcrmp;
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                                cout<<"Wlaczyles Czasowy regen mp\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                }
}
if(czynnosc=='h')
{
                if(zycie<hphdm)
                {
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                            cout<<"Masz za malo punktow hp\n";
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                            goto pomiedzy2;             
                }
                else
                {
                    if(hdm+mana>maxmp)
                    {
                                      mana=maxmp;
                                      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 44);
                                      cout<<"Straciles "<<hphdm<<" Punktow hp, ale masz maksymalna ilosc many ! ";                   
                                      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                      zycie=zycie-hphdm;
                    }
                    else
                    {
                        mana=mana+hdm;
                        zycie=zycie-hphdm;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 44);
                        cout<<"Straciles "<<hphdm<<" Punktow hp, ale zystales "<<hdm<<" punktow mp ! ";                   
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                    }    
                }
                    cout<<endl;
}

if(czynnosc=='i')
{
                if(mana<mpdrain)
                {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                cout<<"Masz za malo punktow mp\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                goto pomiedzy2;
                }
                if(redrain>0)
                {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                cout<<"Jeszcze sie nie odnowilo sie\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                goto pomiedzy2;
                } 
                if(mana>=mpdrain)
                {
                                 redrain=6;
                                 zyciem=zyciem-drain;
                                 zycie=zycie+drain;
                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                 cout<<"Wykradles mobowi "<<drain<<" zycia ";
                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                 cout<<endl;
                                 mana=mana-mpdrain;
                                 if(zycie>maxhp)
                                 {
                                             zycie=maxhp;
                                 }
                }
}
                                 
                                 
                                 
                                 
                                 
                                 
                                 
                                 
                                 
                                 
                                 
                                 



if(zyciem<=0)
{
    const int wTab=2;
int czestosc[wTab]={0};
srand(time(0));
	for(int rzut=1; rzut<=10; rzut++)
		++czestosc[1+rand()%2];
	for(int w=1;w<wTab;w++)
	b=czestosc[w];
	if(mocm>100)
	{
                mocm=100;
 }
 if(prm>20)
 prm=20;
 
 
 bonusy=b*10*prm+(mocm*10)+(zyciemm*20)+zycie;

if(exp<10000)
{
            if(bonusy>kasa)
            {
                           bonusy=kasa;
            }
}
            
            
            
            
if(koksiaz=='1')
{
              bonusy=bonusy+50000;
              koks1=1;
}
if(koksiaz=='2')
{
              bonusy=bonusy+100000;
              koks2=1;
}
if(koksiaz=='3')
{
              bonusy=bonusy+250000;
              koks3=1;
}        


            
kasa=kasa+bonusy;
exp=exp+bonusy*b;
cout<<"W tym boju odniosles zwyciestwo\n";
break;
}

                
//tera mob
if(dystans>1)
{
             dystans=dystans-prm;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
             cout<<"Przeciwnik podszedl co ciebie !\n";
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
             if(dystans<1)
             dystans=1;
}
if(dystans==1)
{
              
              if(wluniki==1)
              {
                                const int wTab=2;
                                int czestosc[wTab]={0};
                                srand(time(0));
	                            for(int rzut=1; rzut<=uniki; rzut++)
		                        ++czestosc[1+rand()%2];
	                            for(int w=1;w<wTab;w++)
	                            if(czestosc[1]==2)
	                            {
                                                  unikiszansa=1;
                                }
                                else
                                {
                                    unikiszansa=0;
                                }
              }
              if(unikiszansa==1)
              {
                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
                                 cout<<"Unikles unikiem\n";
                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                 goto porund;
              }
                               
              
              
              if(wljro==0)
              {
                  if(mocm-(redobr+tr)<=0)
                          {
                          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
                          cout<<"Mob ci nic nie zadal\n";
                          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                          }
                          else
                          {
                          zycie=zycie-mocm+redobr+tr;
                          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
                          cout<<"Przeciwnik pozbawia cie "<<mocm-redobr-tr<<" puntow zycia\n";
                          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                          }
              }
              
              
              if(wljro==1)
              {
                          if(mocm-redobr-jro-tr<0)
                          {
                          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
                          cout<<"Mob ci nic nie zadal\n";
                          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                          }
                          else
                          {
                          zycie=zycie-mocm+redobr+jro+tr;
                          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
                          cout<<"Przeciwnik pozbawia cie "<<mocm-redobr-jro-tr<<" puntow zycia\n";
                          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                          }
                           wljro=0;
              }
             
              
}
if(wlbieganie==1)
{
                if(times<=0)
                {
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
                            cout<<"Aura biegania sie skonczyli\n";
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                            wlbieganie=0;
                            speeds=0;
                }            
}
if(wluniki==1)
{
              if(timeuniki<=0)
              {
                           wluniki=0;
                           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
                           cout<<"Uniki sie skonczyli\n";
                           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
             
             }
             timeuniki--;
}
if(wlza==1)
{
           if(za1<=0)
           {
                     wlza=0;
                     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                     cout<<"Zwiekrzony atak sie skonczyl\n";
                     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                     
           }
           za1--;
}

redrain--;
timecrmp--;            
recrmp--;
recrhp--;
reza--;
porund:
reuniki--;
odnawianie--;
odnawianiebiegania--;
times--;
rejro--;
if(rejro<0)
{
           rejro=0;
}
if(odnawianie<0)
{
                odnawianie=0;        
}
if(odnawianiebiegania<0)
{
                         odnawianiebiegania=0;
}
if(reuniki<0)
{
             reuniki=0;
}
if(za1<0)
{
         za1=0;
}
if(reza<0)
{
          reza=0;
}
if(recrmp<0)
{
            recrmp=0;
}
if(recrhp<0)
{
            recrhp=0;
}
if(redrain<=0)
{
              redrain=0;
}



if(wlcrhp==1)
{
            
            if(zycie+crhp<=maxhp)
            {
                                 zycie=zycie+crhp;
                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                 cout<<"Twoje zycie uroslo o "<<crhp;
                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                cout<<"Twoje zycie znowu jest pelne";
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                zycie=maxhp;
            }
            
            
            cout<<endl;
            
            tcrhp--;
            if(tcrhp<=0)
            {            
                         wlcrhp=0;
                         
            }
}
if(wlcrmp==1)
{
             if(mana+crmp<=maxmp)
             {
                                 mana=mana+crmp;
                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                                 cout<<"Twoja mana uroslo o "<<crmp;
                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
             }
             else 
             {
                  mana=maxmp;
                  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                  cout<<"Twoja mana jest pelna";
                  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
             }
             cout<<endl;
             if(timecrmp<=0)
             {
                            wlcrmp=0;
             }
}







// koniec while
}





}
//Moje statystyki
if(powalce=='4')
{

            cout<<"HP "<<maxhp<<" | MP "<<maxmp<<" | Redukcja obrazen "<<redobr<<" | Predkosc - "<<pr;
             cout<<endl;
            cout<<"Ponadto - Bon ma ataku - "<<moc<<" | Jej zasieg wynosi - "<<zasieg<<" | A czas odnawiania - "<<reuse-1;
             cout<<endl;
}
powalce=0;
wybskill=0;
wybskill2=0;   
continue;
}



sapek:
      
              zyciem=zyciem=50000;
              mocm=100;
              prm=15;
              sapekm=2000; 
              wluniki=0;
              wlbieganie=0;
              zycie=maxhp;
              mana=maxmp;
              dystans=15;
              odnawianie=0;
              odnawianiebiegania=0;
              speeds=0;
              rejro=0;
              recrmp=0;
              recrhp=0;
              wlza=0;
              reza=0;
              reuniki=0;
              redrain=0;
              timecrmp=0;
              za1=0;
              timeuniki=0;
              times=0;
              times=0;
              cout<<"Przygotuj sie do dlugiej walki, KEPAS ma 15 predkosci a reszta bedzie dalej\n";
while (135)
{

if(zycie<=0)
{
cout<<"niestety przegrales ta walke\n";
cout<<"Jeszcze raz ??\ntak/nie\n";
cin>>decyzja;
if(decyzja=="tak")
{
break;
}
if(decyzja=="nie")
{
goto koniec;
}
}              
              

cout<<nick<<" masz :";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
cout<<zycie;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
 cout<<" zycia i ";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
cout<<mana;
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
cout<<" Many\n";
cout<<"KEPAS ma :";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
 cout<<zyciem;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
 cout<<" zycia i Many - ";
 cout<<sapekm;
 cout<<endl;
   cout<<"Dystans pomiedzy wami wynosi :";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    cout<<dystans;
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
       cout<<"\n";
pomiedzy3:
          
          
cout<<"Co robisz ?\n1-podchodze | 2-atak odnawianie :";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 21);
cout<<odnawianie;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
cout<<" | 3-odejscie | 4-Nic";
cout<<endl;

cout<<endl;
cout<<"Skille :";
cout<<endl;
if(leczenies>0)
{
               kosztmp=leczenies*10;
               cout<<"a - Leczenie, koszt mp = "<<kosztmp<<" Moc leczenia "<<leczenie<<endl;
               
}
if(bieganies>0)
{
               cout<<"b - Aura biegania, koszt mp = "<<mpbieganie<<" Czas trwania "<<speedtime<<" + Predkosc "<<speed<<" odnawianie : ";
               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 21);
               cout<<odnawianiebiegania;
               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
               cout<<endl;
}
if(jros>0)
{
          cout<<"c - Jednorazowa redukcja obr.koszt mp = "<<mpjro<<" Redukowane obr. = "<<jro<<" Odnawianie = ";
          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 21);
          cout<<rejro;
          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
          cout<<endl;
}
if(unikis>0)
{
            cout<<"d - Uniki, koszt mp = "<<mpuniki<<" Czas = "<<tuniki<<" a szansa na blok to 1/"<<uniki<<" Odnawianie = ";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 21);
            cout<<reuniki;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            cout<<endl;
}
if(zas>0)
{
         cout<<"e - Zwiekrzone atak mp = "<<mpza<<" Czast trawnia "<<tza<<" moc  = "<<za<<" Odnawianie  = ";
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 21);
         cout<<reza;
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
         cout<<endl;
}
if(crhps>0)
{
           cout<<"f - Czasowy regen hp, mp = "<<mpcrhp<<" Czas trwania "<<timecrhp<<" moc leczenia = "<<crhp<<" odnawianie = ";
           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 21);
           cout<<recrhp;
           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
           cout<<endl;
} 
if(crmps>0)
{
           cout<<"g - Czasowy regen mp, mp = 10 Czas trwania "<<tcrmp<<" mana odnawiana "<<crmp<<" odnawianie = ";
           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 21);
           cout<<recrmp;
           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
           cout<<endl;
}
if(hdms>0)
{
          cout<<"h - Hp do Mp, koszt hp = "<<hphdm<<" odnawiana mana = "<<hdm;
          cout<<endl;
}
if(drains>0)
{
            cout<<"i - Wykradanie zycia, mp = "<<mpdrain<<" moc = "<<drain<<" odnawianie =";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 21);
            cout<<redrain;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            cout<<endl;
}


















czynnosc=getch();
if (czynnosc=='1')
{
                dystans=dystans-pr-speeds;
                if(dystans<1)
                dystans=1;
}
if (czynnosc=='2')
{
                               if(dystans>zasieg)
                             {
                                               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                          cout<<"\n\nNiestety jestes umiejscowiony za daleko\n";
                                             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                          goto pomiedzy3;
                             }
                             if(dystans<=zasieg)
                             {
                                                if(odnawianie>0)
                                                {
                                                                cout<<"\n\nNiestety musisz poczekac na odnowienie\n";
                                                                goto pomiedzy3;
                                                }
                                                if(odnawianie<=0)
                                                {
                                                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 300);
                                                                 cout<<"\n\nTwoj przeciwnik otrzymuje obrazenie w wysokosci "<<moc;
                                                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                                                 if(wlza==1)
                                                                 {
                                                                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 300);
                                                                            cout<<" + "<<za;
                                                                            zyciem=zyciem-za;
                                                                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                                                 }
                                                                 zyciem=zyciem-moc;
                                                                 odnawianie=reuse;
                                                                 cout<<endl;
                                           
                                                }
                           
                           
                           }




// koniec czynnosci 2
}

if (czynnosc=='3')
{
                dystans=dystans+pr+speeds;
                }
//koniec czynnosci 3

if(czynnosc=='4')
cout<<"len\n";
//koniec czynnosci 4


//SKILLE !!!!!!!!!

if(czynnosc=='a')
{
                
                if(mana<kosztmp)
                {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                cout<<"Masz za malo punktow mp\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                goto pomiedzy3;
                }
                if(mana>=kosztmp)
                {
                                    if(zycie+leczenie>maxhp)
                                    {
                                                         zycie=maxhp;
                                                         mana=mana-kosztmp;
                                                         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                                         cout<<"Twoje zycie znowu jest pelne\n";
                                                         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                    }
                                    else
                                    {
                                        zycie=zycie+leczenie;
                                        mana=mana-kosztmp;
                                        cout<<"Zyskujesz ";
                                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                        cout<<leczenie;
                                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                        cout<<" punktow zycia\n";
                                    }
                }
               
                
}
if(czynnosc=='b')
{
                if(odnawianiebiegania>0)
                {
                                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                        cout<<"jeszcze sie nie odnowilo\n";
                                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                        goto pomiedzy3;
                }
                if(mana<mpbieganie)
                {
                                   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                   cout<<"Masz za malo punktow mp\n";
                                   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                   goto pomiedzy3;
                }
                if(mana>=mpbieganie)
                {
                                    if(odnawianiebiegania==0)
                                    {
                                                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
                                                            cout<<"Wlaczyles Aure biegania\n";
                                                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                                            mana=mana-mpbieganie;
                                                            wlbieganie=1;
                                                            speeds=speed;
                                                            odnawianiebiegania=16;
                                                            times=speedtime+1;
                                    }
                }
}
if(czynnosc=='c')
{
                if(mana<mpjro)
                {
                              SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                              cout<<"Masz za malo punktow mp\n";
                              SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                              goto pomiedzy3;
                }
                if(rejro>0)
                {
                           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                           cout<<"jeszcze sie nie odnowilo\n";
                           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                           goto pomiedzy3;
                }
                if(mana>=mpjro)
                {
                               if(rejro==0)
                               {
                                           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
                                           cout<<"Wlaczyles jednorazowa redukcje obrazen!";
                                           cout<<endl;
                                           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                           rejro=7;
                                           mana=mana-mpjro;
                                           wljro=1;
                                           goto pomiedzy3;
                               }
                }
}
if(czynnosc=='d')
{
                if(mana<mpuniki)
                {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                cout<<"Masz za malo punktow mp\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                goto pomiedzy3;
                }
                if(reuniki>0)
                {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                cout<<"Jeszcze sie nie odnowilo sie\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                goto pomiedzy3;
                }
                if(mana>=mpuniki)
                {
                                 wluniki=1;
                                 mana=mana-mpuniki;
                                 reuniki=21;
                                 timeuniki=tuniki+1;
                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
                                 cout<<"Wlaczyles uniki\n";
                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                }
}
if(czynnosc=='e')
{
                if(mana<mpza)
                {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                cout<<"Masz za malo punktow mp\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                goto pomiedzy3;
                }
                if(reza>0)
                {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                cout<<"Jeszcze sie nie odnowilo sie\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                goto pomiedzy3;
                }
                if(mana>=mpza)
                {
                                 wlza=1;
                                 mana=mana-mpza;
                                 reza=30;
                                 za1=tza+1;
                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                                 cout<<"Wlaczyles zwiekrzone ataki\n";
                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                
                }
}
if(czynnosc=='f')
{
                if(mana<mpcrhp)
                {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                cout<<"Masz za malo punktow mp\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                goto pomiedzy3;
                }
                if(recrhp>0)
                {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                cout<<"Jeszcze sie nie odnowilo sie\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                goto pomiedzy3;
                }
                if(mana>=mpcrhp)
                {
                                wlcrhp=1;
                                tcrhp=timecrhp+1;
                                mana=mana-mpcrhp;
                                recrhp=60;
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                                cout<<"Wlaczyles Czasowy regen hp\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                }
}
if(czynnosc=='g')
{
                if(mana<10)
                {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                cout<<"Masz za malo punktow mp\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                goto pomiedzy3;
                }
                if(recrmp>0)
                {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                cout<<"Jeszcze sie nie odnowilo sie\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                goto pomiedzy3;
                }        
                if(mana>=10)
                {
                                wlcrmp=1;
                                mana=mana-10;
                                recrmp=60;
                                timecrmp=tcrmp;
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                                cout<<"Wlaczyles Czasowy regen mp\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                }
}
if(czynnosc=='h')
{
                if(zycie<hphdm)
                {
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                            cout<<"Masz za malo punktow hp\n";
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                            goto pomiedzy3;             
                }
                else
                {
                    if(hdm+mana>maxmp)
                    {
                                      mana=maxmp;
                                      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 44);
                                      cout<<"Straciles "<<hphdm<<" Punktow hp, ale masz maksymalna ilosc many ! ";                   
                                      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                      zycie=zycie-hphdm;
                    }
                    else
                    {
                        mana=mana+hdm;
                        zycie=zycie-hphdm;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 44);
                        cout<<"Straciles "<<hphdm<<" Punktow hp, ale zystales "<<hdm<<" punktow mp ! ";                   
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                    }    
                }
                    cout<<endl;
}

if(czynnosc=='i')
{
                if(mana<mpdrain)
                {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                cout<<"Masz za malo punktow mp\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                goto pomiedzy3;
                }
                if(redrain>0)
                {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                cout<<"Jeszcze sie nie odnowilo sie\n";
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                goto pomiedzy3;
                } 
                if(mana>=mpdrain)
                {
                                 redrain=6;
                                 zyciem=zyciem-drain;
                                 zycie=zycie+drain;
                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                 cout<<"Wykradles mobowi "<<drain<<" zycia ";
                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                 cout<<endl;
                                 mana=mana-mpdrain;
                                 if(zycie>maxhp)
                                 {
                                             zycie=maxhp;
                                 }
                }
}
                                 
                                 
                                 
                                 
                                 
                                 
                                 
                                 
                                 
                                 
                                 
                                 



if(zyciem<=0)
{
    const int wTab=2;
int czestosc[wTab]={0};
srand(time(0));
	for(int rzut=1; rzut<=10; rzut++)
		++czestosc[1+rand()%2];
	for(int w=1;w<wTab;w++)
	b=czestosc[w];
	if(mocm>100)
	{
                mocm=100;
 }

 prm=20;
 
 
 bonusy=b*10*prm+(mocm*5)+zyciemm+zycie;
   


            
kasa=kasa+bonusy+2000000;
exp=exp+bonusy*b+5000000;
cout<<"ZABILES KEPASA !! WLASCIWIE PRZESZEDLES TA GRE GRATULACJE\njednak mozesz dalej grac i zabijac zwykle mobki ^^\n";
goto SAPEK;
}

                
//tera mob
if(zyciem<10000)
{
                if(sapekm>0)
                {
               zyciem=zyciem+1000;
               sapekm=sapekm-100;
               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 131);
               cout<<"KEPAS ULECZYL SIE ZA 1000";
               cout<<endl;
               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
               
               }
               
               
               
               
               
               
               
               
               
}


if(dystans>1)
{
             if(dystans>50)
             {
                           if(sapekm>0)
                           {
                           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 99);
                           cout<<"KEPAS teleportowal sie do ciebie";
                           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                           sapekm=sapekm-50;
                           dystans=10;
                           }
             }
                           
                           
                           
             dystans=dystans-prm;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
             cout<<"KEPAS podszedl co ciebie !\n";
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
             if(dystans<1)
             dystans=1;
}
if(dystans==1)
{
              
              if(wluniki==1)
              {
                                const int wTab=2;
                                int czestosc[wTab]={0};
                                srand(time(0));
	                            for(int rzut=1; rzut<=uniki; rzut++)
		                        ++czestosc[1+rand()%2];
	                            for(int w=1;w<wTab;w++)
	                            if(czestosc[1]==2)
	                            {
                                                  unikiszansa=1;
                                }
                                else
                                {
                                    unikiszansa=0;
                                }
              }
              if(unikiszansa==1)
              {
                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
                                 cout<<"Unikles unikiem\n";
                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                                 goto porund2;
              }
                               
              
              
              if(wljro==0)
              {
                  if(mocm-(redobr+tr)<=0)
                          {
                          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
                          cout<<"Mob ci nic nie zadal\n";
                          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                          }
                          else
                          {
                          zycie=zycie-mocm+redobr+tr;
                          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
                          cout<<"Przeciwnik pozbawia cie "<<mocm-redobr-tr<<" puntow zycia\n";
                          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                          }
              }
              
              
              if(wljro==1)
              {
                          if(mocm-redobr-jro-tr<0)
                          {
                          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
                          cout<<"Mob ci nic nie zadal\n";
                          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                          }
                          else
                          {
                          zycie=zycie-mocm+redobr+jro+tr;
                          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
                          cout<<"Przeciwnik pozbawia cie "<<mocm-redobr-jro-tr<<" puntow zycia\n";
                          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                          }
                           wljro=0;
              }
             
              
}
if(wlbieganie==1)
{
                if(times<=0)
                {
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
                            cout<<"Aura biegania sie skonczyli\n";
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                            wlbieganie=0;
                            speeds=0;
                }            
}
if(wluniki==1)
{
              if(timeuniki<=0)
              {
                           wluniki=0;
                           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
                           cout<<"Uniki sie skonczyli\n";
                           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
             
             }
             timeuniki--;
}
if(wlza==1)
{
           if(za1<=0)
           {
                     wlza=0;
                     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                     cout<<"Zwiekrzony atak sie skonczyl\n";
                     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                     
           }
           za1--;
}
porund2:
redrain--;
timecrmp--;            
recrmp--;
recrhp--;
reza--;
reuniki--;
odnawianie--;
odnawianiebiegania--;
times--;
rejro--;
if(rejro<0)
{
           rejro=0;
}
if(odnawianie<0)
{
                odnawianie=0;        
}
if(odnawianiebiegania<0)
{
                         odnawianiebiegania=0;
}
if(reuniki<0)
{
             reuniki=0;
}
if(za1<0)
{
         za1=0;
}
if(reza<0)
{
          reza=0;
}
if(recrmp<0)
{
            recrmp=0;
}
if(recrhp<0)
{
            recrhp=0;
}
if(redrain<=0)
{
              redrain=0;
}



if(wlcrhp==1)
{
            
            if(zycie+crhp<=maxhp)
            {
                                 zycie=zycie+crhp;
                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                                 cout<<"Twoje zycie uroslo o "<<crhp;
                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                cout<<"Twoje zycie znowu jest pelne";
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                zycie=maxhp;
            }
            
            
            cout<<endl;
            
            tcrhp--;
            if(tcrhp<=0)
            {            
                         wlcrhp=0;
                         
            }
}
if(wlcrmp==1)
{
             if(mana+crmp<=maxmp)
             {
                                 mana=mana+crmp;
                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                                 cout<<"Twoja mana uroslo o "<<crmp;
                                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
             }
             else 
             {
                  mana=maxmp;
                  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                  cout<<"Twoja mana jest pelna";
                  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
             }
             cout<<endl;
             if(timecrmp<=0)
             {
                            wlcrmp=0;
             }
}







// koniec while
}
      
      



}

koniec:
cout<<"Nara\n";
getchar();
cin.ignore();
return 0;
}
