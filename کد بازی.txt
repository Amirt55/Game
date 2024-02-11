#include <iostream> //cout & cin & << & >>
#include <conio.h> //getch
#include <string>
#include <string.h>
#include <strings.h>
#include <stdio.h> //null
#include <stdlib.h> //rand & srand
#include <math.h>
#include <time.h> //time
#include <windows.h> //Sleep based on mili second

using namespace std;

int puzzle();
void word_cookies();
void word_cookies_va();
int word_cookies_vb();
int word_cookies_step1(int );
int word_cookies_step2(int );
int word_cookies_step3(int );
int word_cookies_step4(int );
int word_cookies_step5(int );
int word_cookies_step6(int );
int word_cookies_step7(int );
int word_cookies_step8(int );
int word_cookies_step9(int );
int word_cookies_step10(int );
int word_cookies_step11(int );
void hangman();
int hangman_eng();
int hangman_turk();

int main()
{
    cout<<endl<<endl<<endl;
    cout<<"                                                               |-----------------------------------------------------------------|"<<endl;
    cout<<"                                                               |-----|              In The Name Of God                     |-----|"<<endl;
    cout<<"                                                               |-----|  Iran University of Science and Technology (Tehran) |-----|"<<endl;
    cout<<"                                                               |-----|             Professor Zahirpour                     |-----|"<<endl;
    cout<<"                                                               |-----------------------------------------------------------------|"<<endl;
    cout<<"                                                               |>>>>>>         The group of TIRED CODERS presents          <<<<<<|"<<endl;
    cout<<"                                                               |>>>>>>              The name of members:                   <<<<<<|"<<endl;
    cout<<"                                                               |>>>>>>         Mohammad Mohsen Ebrahimi Seyghalan          <<<<<<|"<<endl;
    cout<<"                                                               |>>>>>>               Amir Taha Aghasi                      <<<<<<|"<<endl;
    cout<<"                                                               |>>>>>>          Sajjad Jabbarzade Ghandilou                <<<<<<|"<<endl;
    cout<<"                                                               |-----------------------------------------------------------------|"<<endl;
    cout<<"                                                               |-----| Welcome to the play room                            |-----|"<<endl;
    cout<<"                                                               |-----| Game 1: Puzzle                                      |-----|"<<endl;
    cout<<"                                                               |-----| Game 2: Word Cookies                                |-----|"<<endl;
    cout<<"                                                               |-----| Game 3: Hangman                                     |-----|"<<endl;
    cout<<"                                                               |-----------------------------------------------------------------|"<<endl;
    cout<<endl;
    cout<<"|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
    getch();
    string c;
    string e;
    string e2;
    string e3;
    int i;
    for(i=0;;)
    {
        cout<<"    _ _ _                                                                     _ _ _"<<endl;
        cout<<"|---_-_-_- Please enter what do you want to play it?                         -_-_-_---|"<<endl;
        cout<<"    _ _ _                                                                     _ _ _"<<endl;
        cout<<"|---_-_-_- Selection options:                                                -_-_-_---|"<<endl;
        cout<<"  _ _          _ _   _ _                 _ _   _ _           _ _   _ _            _ _"<<endl;
        cout<<"|-_-_- Puzzle -_-_-|-_-_- Word Cookies  -_-_-|-_-_- Hangman -_-_-|-_-_-   Exit   -_-_-|"<<endl;
        cin>>c;
        if((c=="Puzzle")||(c=="puzzle")||(c=="p")) {puzzle();i++;}
        if((c=="Word")||(c=="word")||(c=="w")) {word_cookies();i++;}
        if((c=="Hangman")||(c=="hangman")||(c=="Hang")||(c=="hang")||(c=="h")) {hangman();i++;}
        if((c=="Exit")||(c=="exit")||(c=="e"))
        {
            cout<<"Are you sure?"<<endl;
            cin>>e;
            if((e=="yes")||(e=="y"))
            {
                cout<<"In order that we can improve our program, please send your comments to group's E-mail."<<endl;
                cout<<"|-----------------------------------------------------------------|"<<endl;
                break;
            }
            if((e=="no")||(e=="n")) continue;
        }
        if((c!="Hangman")&&(c!="hangman")&&(c!="Hang")&&(c!="hang")&&(c!="h")&&(c!="Puzzle")&&(c!="puzzle")&&(c!="p")&&(c!="Word")&&(c!="word")&&(c!="w")&&(c!="Exit")&&(c!="exit")&&(c!="e")) cout<<"selection entered is invalid. Please try again."<<endl;
        if(i>=1)
        {
            cout<<"Are you want to continue games with other games or same as previous game?"<<endl;
            cin>>e2;
            if((e2=="yes")||(e2=="y")) continue;
            if((e2=="no")||(e2=="n"))
            {
                cout<<"Are you sure?"<<endl;
                cin>>e3;
                if((e3=="yes")||(e3=="y"))
                {
                    cout<<"In order that we can improve our program, please send your comments to group's E-mail."<<endl;
                    cout<<"|-----------------------------------------------------------------|"<<endl;
                    break;
                }
                if((e3=="no")||(e3=="n")) continue;
            }
        }
    }
    return 0;
}
int puzzle()
{
cout<<"                    PPPPPPPPPPPPPPPPP        UUUUUUUU     UUUUUUUU     ZZZZZZZZZZZZZZZZZZZ     ZZZZZZZZZZZZZZZZZZZ     LLLLLLLLLLL                  EEEEEEEEEEEEEEEEEEEEEE\n";
cout<<"                    P::::::::::::::::P       U::::::U     U::::::U     Z:::::::::::::::::Z     Z:::::::::::::::::Z     L:::::::::L                  E::::::::::::::::::::E\n";
cout<<"                    P::::::PPPPPP:::::P      U::::::U     U::::::U     Z:::::::::::::::::Z     Z:::::::::::::::::Z     L:::::::::L                  E::::::::::::::::::::E\n";
cout<<"                    PP:::::P     P:::::P     UU:::::U     U:::::UU     Z:::ZZZZZZZZ:::::Z      Z:::ZZZZZZZZ:::::Z      LL:::::::LL                  EE::::::EEEEEEEEE::::E\n";
cout<<"                      P::::P     P:::::P      U:::::U     U:::::U      ZZZZZ     Z:::::Z       ZZZZZ     Z:::::Z         L:::::L                      E:::::E       EEEEEE\n";
cout<<"                      P::::P     P:::::P      U:::::D     D:::::U              Z:::::Z                 Z:::::Z           L:::::L                      E:::::E             \n";
cout<<"                      P::::PPPPPP:::::P       U:::::D     D:::::U             Z:::::Z                 Z:::::Z            L:::::L                      E::::::EEEEEEEEEE   \n";
cout<<"                      P:::::::::::::PP        U:::::D     D:::::U            Z:::::Z                 Z:::::Z             L:::::L                      E:::::::::::::::E   \n";
cout<<"                      P::::PPPPPPPPP          U:::::D     D:::::U           Z:::::Z                 Z:::::Z              L:::::L                      E:::::::::::::::E   \n";
cout<<"                      P::::P                  U:::::D     D:::::U          Z:::::Z                 Z:::::Z               L:::::L                      E::::::EEEEEEEEEE   \n";
cout<<"                      P::::P                  U:::::D     D:::::U         Z:::::Z                 Z:::::Z                L:::::L                      E:::::E             \n";
cout<<"                      P::::P                  U::::::U   U::::::U      ZZZ:::::Z     ZZZZZ     ZZZ:::::Z     ZZZZZ       L:::::L         LLLLLL       E:::::E       EEEEEE\n";
cout<<"                    PP::::::PP                U:::::::UUU:::::::U      Z::::::ZZZZZZZZ:::Z     Z::::::ZZZZZZZZ:::Z     LL:::::::LLLLLLLLL:::::L     EE::::::EEEEEEEE:::::E\n";
cout<<"                    P::::::::P                 UU:::::::::::::UU       Z:::::::::::::::::Z     Z:::::::::::::::::Z     L::::::::::::::::::::::L     E::::::::::::::::::::E\n";
cout<<"                    P::::::::P                   UU:::::::::UU         Z:::::::::::::::::Z     Z:::::::::::::::::Z     L::::::::::::::::::::::L     E::::::::::::::::::::E\n";
cout<<"                    PPPPPPPPPP                     UUUUUUUUU           ZZZZZZZZZZZZZZZZZZZ     ZZZZZZZZZZZZZZZZZZZ     LLLLLLLLLLLLLLLLLLLLLLLL     EEEEEEEEEEEEEEEEEEEEEE\n";
cout<<"\n\n\n                                                                  ";
cout<<"         do you want start the game ?((y)es/(n)o) \n\n";
cout<<"                                                                                  asnwer:";
string s;
int g=0;
while(g<=0)
{cin>>s;
if(s=="n")
{   //system("cls");
    return 0;
}
if(s=="y")
    {
        g++;
    }
}
//system("cls");
    int n;
 cout<<"Enter the dimensions of puzzle: ";
    cin>>n;
     int p[n][n],cp[n][n];
    int h[n*n*n+1];
   for(int i=0;i<n;i++)
   {for(int j=0;j<n;j++)
   {p[i][j]=j+i*n+1;}}
   int w=0,l=0,r=0,q=0;
   srand(time(NULL));
   int x=n-1,y=n-1;

while(l<n*n*n)
  {w=rand()%4+1;   //bala
  if(w==1&&y>0&&h[r]!=2)
        {p[y][x]=p[y-1][x];
         p[y-1][x]=n*n;
         y=y-1;
         h[r+1]=1;
         r++;
         l++; }

  if(w==2&&y<(n-1)&&h[r]!=1)  //pain
        {p[y][x]=p[y+1][x];
         p[y+1][x]=n*n;
         y=y+1;
         h[r+1]=2;
         r++;
         l++; }

  if(w==3&&x>0&&h[r]!=4)   //chap
        {p[y][x]=p[y][x-1];
         p[y][x-1]=n*n;
         x=x-1;
         h[r+1]=3;
         r++;
         l++; }

  if(w==4&&x<(n-1)&&h[r]!=3)  //rast
        {p[y][x]=p[y][x+1];
         p[y][x+1]=n*n;
         x=x+1;
         h[r+1]=4;
         r++;
         l++; }}

  for(int a=0;a<n;a++)
    {for(int b=0;b<n;b++)
        {cp[a][b]=p[a][b];}}
  int cx=x,cy=y;
int TIME1=time(NULL);
     while(true) //chap
  {cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n      Help comment : Complete the puzzle by moving puzzles house with the keys below\n";
   cout<<"             ________ \n";
   cout<<"            |        |\n";
   cout<<"            |  Up(8) |\n";
   cout<<"    ________|________|________\n";
   cout<<"   |        |        |        |\n";
   cout<<"   | left(4)| down(5)|Right(6)|\n";
   cout<<"   |________|________|________|\n\n\n\n";
      for(int k=0;k<n;k++)
    {cout<<"________";}
     cout<<endl;
     for(int i=0;i<n;i++)
       {for(int j=0;j<n;j++)
            {if(p[i][j]==p[y][x])
            {
                cout<<" \t|";
                continue;
            }
                cout<<" "<<p[i][j]<<"\t|";}
             cout<<endl;
        for(int k=0;k<n;k++)
           {cout<<"________";}
            cout<<endl;}
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

      string wm;
      cin>>wm; //harekat khane
  if(wm=="5"&&y>0)
        {p[y][x]=p[y-1][x];
         p[y-1][x]=n*n;
         y=y-1;}

  if(wm=="8"&&y<(n-1))
        {p[y][x]=p[y+1][x];
         p[y+1][x]=n*n;
         y=y+1;}

  if(wm=="6"&&x>0)
        {p[y][x]=p[y][x-1];
         p[y][x-1]=n*n;
         x=x-1;}

  if(wm=="4"&&x<(n-1))
        {p[y][x]=p[y][x+1];
         p[y][x+1]=n*n;
         x=x+1;}
if((wm=="Solve")||(wm=="solve")||(wm=="s"))
{

int l=0,r1=n*n*n;
while(true)
    {for(int k=0;k<n;k++)
         {cout<<"________";}
     cout<<endl;
     for(int i=0;i<n;i++)
         {for(int j=0;j<n;j++)
            {if(cp[i][j]==cp[cy][cx])
               {cout<<" \t|";            //chap
                continue;}
             cout<<" "<<cp[i][j]<<"\t|";}
          cout<<endl;
          for(int k=0;k<n;k++)
             {cout<<"________";}
           cout<<endl;}
      cout<<endl<<endl;
      int w=h[r1];
      if(w==2)
        {cp[cy][cx]=cp[cy-1][cx];
         cp[cy-1][cx]=n*n;
         cy=cy-1;
         r1--;}

      if(w==1)
        {cp[cy][cx]=cp[cy+1][cx];
         cp[cy+1][cx]=n*n;
         cy=cy+1;
         r1--;}

      if(w==4)
        {cp[cy][cx]=cp[cy][cx-1];
         cp[cy][cx-1]=n*n;
         cx=cx-1;
         r1--;}

    if(w==3)
        {cp[cy][cx]=cp[cy][cx+1];
         cp[cy][cx+1]=n*n;
         cx=cx+1;
         r1--;}

    if(r1==0)
      {for(int k=0;k<n;k++)
          {cout<<"________";}
       cout<<endl;
       for(int i=0;i<n;i++)
          {for(int j=0;j<n;j++)
              {if(cp[i][j]==cp[cy][cx])
                 {cout<<" \t|";
                  continue;}
              cout<<" "<<cp[i][j]<<"\t|";}
            cout<<endl;
            for(int k=0;k<n;k++)
               {cout<<"________";}
            cout<<endl;}
            return 0;
      }}}
         //etmam bazi
    int v1=0;
       for(int i=0;i<n;i++)
          {int v=0;
           for(int j=0;j<n;j++)
          {if(p[i][j]==j+i*n+1)
            {v++;}
            if(v==n)
                {v1++;}
            }
if(v1==n&&n*n*60>=time(NULL)-TIME1)
{
      cout<<"\n\n\n\n\n\n\n\n\n";
      cout<<"YYYYYYY       YYYYYYY                                                                                           iiii                     \n";
      cout<<"Y:::::Y       Y:::::Y                                                                                          i::::i                    \n";
      cout<<"Y:::::Y       Y:::::Y                                                                                           iiii                     \n";
      cout<<"Y::::::Y     Y::::::Y                                                                                                                    \n";
      cout<<"YYY:::::Y   Y:::::YYY   ooooooooooo     uuuuuu    uuuuuu           wwwwwww           wwwww           wwwwwww  iiiiiii  nnnn  nnnnnnnn    \n";
      cout<<"   Y:::::Y Y:::::Y    oo:::::::::::oo   u::::u    u::::u            w:::::w         w:::::w         w:::::w   i:::::i  n:::nn::::::::nn  \n";
      cout<<"    Y:::::Y:::::Y    o:::::::::::::::o  u::::u    u::::u             w:::::w       w:::::::w       w:::::w     i::::i  n::::::::::::::nn \n";
      cout<<"     Y:::::::::Y     o:::::ooooo:::::o  u::::u    u::::u              w:::::w     w:::::::::w     w:::::w      i::::i  nn:::::::::::::::n\n";
      cout<<"      Y:::::::Y      o::::o     o::::o  u::::u    u::::u               w:::::w   w:::::w:::::w   w:::::w       i::::i    n:::::nnnn:::::n\n";
      cout<<"       Y:::::Y       o::::o     o::::o  u::::u    u::::u                w:::::w w:::::w w:::::w w:::::w        i::::i    n::::n    n::::n\n";
      cout<<"       Y:::::Y       o::::o     o::::o  u::::u    u::::u                 w:::::w:::::w   w:::::w:::::w         i::::i    n::::n    n::::n\n";
      cout<<"       Y:::::Y       o::::o     o::::o  u:::::uuuu:::::u                  w:::::::::w     w:::::::::w          i::::i    n::::n    n::::n\n";
      cout<<"       Y:::::Y       o:::::ooooo:::::o  u:::::::::::::::uu                 w:::::::w       w:::::::w          i::::::i   n::::n    n::::n\n";
      cout<<"    YYYY:::::YYYY    o:::::::::::::::o   u:::::::::::::::u                  w:::::w         w:::::w           i::::::i   n::::n    n::::n\n";
      cout<<"    Y:::::::::::Y     oo:::::::::::oo     uu::::::::uu:::u                   w:::w           w:::w            i::::::i   n::::n    n::::n\n";
      cout<<"    YYYYYYYYYYYYY       ooooooooooo         uuuuuuuu  uuuu                    www             www             iiiiiiii   nnnnnn    nnnnnn\n";
      for(int k=0;k<n;k++)
         {cout<<"--------";}
     cout<<endl;
     for(int i=0;i<n;i++)
        {for(int j=0;j<n;j++)
            {cout<<" "<<p[i][j]<<"\t|";}
         cout<<endl;
         for(int k=0;k<n;k++)
            {cout<<"--------";}
         cout<<endl;}
     cout<<"\n\n\n\n\n\n\n\n\n";
     return 0;}

if(n*n*60<time(NULL)-TIME1){
      cout<<"        GGGGGGGGGGGGG                                                                              OOOOOOOOO                                                                               !!! \n";
      cout<<"     GGG::::::::::::G                                                                            OO:::::::::OO                                                                            !!:!!\n";
      cout<<"   GG:::::::::::::::G                                                                          OO:::::::::::::OO                                                                          !:::!\n";
      cout<<"  G:::::GGGGGGGG::::G                                                                         O:::::::OOO:::::::O                                                                         !:::!\n";
      cout<<" G:::::G       GGGGGG    aaaaaaaaaaaaa        mmmmmmm    mmmmmmm         eeeeeeeeeeee         O::::::O   O::::::O  vvvvvvv           vvvvvvv   eeeeeeeeeeee      rrrrr   rrrrrrrrr        !:::!\n";
      cout<<"G:::::G                  a::::::::::::a     mm:::::::m  m:::::::mm     ee::::::::::::ee       O:::::O     O:::::O   v:::::v         v:::::v  ee::::::::::::ee    r::::rrr:::::::::r       !:::!\n";
      cout<<"G:::::G                  aaaaaaaaa:::::a   m::::::::::mm::::::::::m   e::::::eeeee:::::ee     O:::::O     O:::::O    v:::::v       v:::::v  e::::::eeeee:::::ee  r:::::::::::::::::r      !:::!\n";
      cout<<"G:::::G    GGGGGGGGGG             a::::a   m::::::::::::::::::::::m  e::::::e     e:::::e     O:::::O     O:::::O     v:::::v     v:::::v  e::::::e     e:::::e  rr::::::rrrrr::::::r     !:::!\n";
      cout<<"G:::::G    G::::::::G      aaaaaaa:::::a   m:::::mmm::::::mmm:::::m  e:::::::eeeee::::::e     O:::::O     O:::::O      v:::::v   v:::::v   e:::::::eeeee::::::e   r:::::r     r:::::r     !:::!\n";
      cout<<"G:::::G    GGGGG::::G    aa::::::::::::a   m::::m   m::::m   m::::m  e:::::::::::::::::e      O:::::O     O:::::O       v:::::v v:::::v    e:::::::::::::::::e    r:::::r     rrrrrrr     !:::!\n";
      cout<<"G:::::G        G::::G   a::::aaaa::::::a   m::::m   m::::m   m::::m  e::::::eeeeeeeeeee       O:::::O     O:::::O        v:::::v:::::v     e::::::eeeeeeeeeee     r:::::r                 !!:!!\n";
      cout<<" G:::::G       G::::G  a::::a    a:::::a   m::::m   m::::m   m::::m  e:::::::e                O::::::O   O::::::O         v:::::::::v      e:::::::e              r:::::r                  !!! \n";
      cout<<"  G:::::GGGGGGGG::::G  a::::a    a:::::a   m::::m   m::::m   m::::m  e::::::::e               O:::::::OOO:::::::O          v:::::::v       e::::::::e             r:::::r                      \n";
      cout<<"   GG:::::::::::::::G  a:::::aaaa::::::a   m::::m   m::::m   m::::m   e::::::::eeeeeeee        OO:::::::::::::OO            v:::::v         e::::::::eeeeeeee     r:::::r                  !!! \n";
      cout<<"     GGG::::::GGG:::G   a::::::::::aa:::a  m::::m   m::::m   m::::m    ee:::::::::::::e          OO:::::::::OO               v:::v           ee:::::::::::::e     r:::::r                 !!:!!\n";
      cout<<"        GGGGGG   GGGG    aaaaaaaaaa  aaaa  mmmmmm   mmmmmm   mmmmmm      eeeeeeeeeeeeee            OOOOOOOOO                  vvv             eeeeeeeeeeeeee      rrrrrrr                  !!! \n";
      return 0;}}}
    return 0;
}
char letters[][11]={{'m','g','y'},{'e','e','r','d'},{'e','a','c','f'},{'o','h','s','t'},{'a','s','v','e'},{'e','m','i','l'},{'d','l','a','y'},{'r','d','i','n','k'},{'w','s','a','h'},{'s','f','f','a','t'},{'l','l','o','a','c'}};
void word_cookies()
{
    cout<<"Welcome to Word cookies game."<<endl;
    int i, j;
    string v;
    string e;
    string e2;
    for(i=0,j=0;(i<=2)&&(j<=2);)
    {
        cout<<"Please select a version:"<<endl;
        cout<<"a.Version A"<<endl<<"b.Version B"<<endl;
        cin>>v;
        if((v=="a")||(v=="A"))
        {
            word_cookies_va();
            i++;
        }
        if((v=="b")||(v=="B"))
        {
            word_cookies_vb();
            j++;
        }
        if((v=="Exit")||(v=="exit")||(v=="e")) break;
        if((v!="a")&&(v!="A")&&(v!="b")&&(v!="B")&&(v!="Exit")&&(v!="exit")&&(v!="e"))
        {
            cout<<"selection entered is invalid. Please try again."<<endl;
            continue;
        }
        if(i==1)
        {
            cout<<"Are you want to play the other version of Word cookies?"<<endl;
            cin>>e;
            if((e=="yes")||(e=="y"))
            {
                word_cookies_vb();
                j++;
            }
            if((e=="no")||(e=="n")) break;
        }
        if(j==1)
        {
            cout<<"Are you want to play the other version of Word cookies?"<<endl;
            cin>>e;
            if((e=="yes")||(e=="y"))
            {
                word_cookies_va();
                i++;
            }
            if((e=="no")||(e=="n")) break;
        }
        if((i==1)&&(j==1))
        {
            cout<<"Are you want to play Word cookies again?"<<endl;
            cin>>e2;
            if((e=="yes")||(e=="y")) {i=0;j=0;}
            if((e=="no")||(e=="n")) break;
        }
    }
}
void word_cookies_va()
{
    cout<<"\n\n\n\n\n\n"<<endl;
    cout<<"          _____                   _______                  _______                   _____                    _____                    _____                    _____  "<<endl;
    cout<<"         /\\    \\                 /::\\    \\                /::\\    \\                 /\\    \\                  /\\    \\                  /\\    \\                  /\\    \\  "<<endl;
    cout<<"        /::\\    \\               /::::\\    \\              /::::\\    \\               /::\\____\\                /::\\    \\                /::\\    \\                /::\\    \\  "<<endl;
    cout<<"       /::::\\    \\             /::::::\\    \\            /::::::\\    \\             /:::/    /                \\:::\\    \\              /::::\\    \\              /::::\\    \\ "<<endl;
    cout<<"      /::::::\\    \\           /::::::::\\    \\          /::::::::\\    \\           /:::/    /                  \\:::\\    \\            /::::::\\    \\            /::::::\\    \\ "<<endl;
    cout<<"     /:::/\\:::\\    \\         /:::/~~\\:::\\    \\        /:::/~~\\:::\\    \\         /:::/    /                    \\:::\\    \\          /:::/\\:::\\    \\          /:::/\\:::\\    \\ "<<endl;
    cout<<"    /:::/  \\:::\\    \\       /:::/    \\:::\\    \\      /:::/    \\:::\\    \\       /:::/____/                      \\:::\\    \\        /:::/__\\:::\\    \\        /:::/__\\:::\\    \\ "<<endl;
    cout<<"   /:::/    \\:::\\    \\     /:::/    / \\:::\\    \\    /:::/    / \\:::\\    \\     /::::\\    \\                      /::::\\    \\      /::::\\   \\:::\\    \\       \\:::\\   \\:::\\    \\ "<<endl;
    cout<<"  /:::/    / \\:::\\    \\   /:::/____/   \\:::\\____\\  /:::/____/   \\:::\\____\\   /::::::\\____\\________    ____    /::::::\\    \\    /::::::\\   \\:::\\    \\    ___\\:::\\   \\:::\\    \\ "<<endl;
    cout<<" /:::/    /   \\:::\\    \\ |:::|    |     |:::|    ||:::|    |     |:::|    | /:::/\\:::::::::::\\    \\  /\\   \\  /:::/\\:::\\    \\  /:::/\\:::\\   \\:::\\    \\  /\\   \\:::\\   \\:::\\    \\ "<<endl;
    cout<<"/:::/____/     \\:::\\____\\|:::|____|     |:::|    ||:::|____|     |:::|    |/:::/  |:::::::::::\\____\\/::\\   \\/:::/  \\:::\\____\\/:::/__\\:::\\   \\:::\\____\\/::\\   \\:::\\   \\:::\\____\\ "<<endl;
    cout<<"\\:::\\    \\      \\::/    / \\:::\\    \\   /:::/    /  \\:::\\    \\   /:::/    / \\::/   |::|~~~|~~~~~     \\:::\\  /:::/    \\::/    /\\:::\\   \\:::\\   \\::/    /\\:::\\   \\:::\\   \\::/    / "<<endl;
    cout<<" \\:::\\    \\      \\/____/   \\:::\\    \\ /:::/    /    \\:::\\    \\ /:::/    /   \\/____|::|   |           \\:::\\/:::/    / \\/____/  \\:::\\   \\:::\\   \\/____/  \\:::\\   \\:::\\   \\/____/ "<<endl;
    cout<<"  \\:::\\    \\                \\:::\\    /:::/    /      \\:::\\    /:::/    /          |::|   |            \\::::::/    /            \\:::\\   \\:::\\    \\       \\:::\\   \\:::\\    \\ "<<endl;
    cout<<"   \\:::\\    \\                \\:::\\__/:::/    /        \\:::\\__/:::/    /           |::|   |             \\::::/____/              \\:::\\   \\:::\\____\\       \\:::\\   \\:::\\____\\ "<<endl;
    cout<<"    \\:::\\    \\                \\::::::::/    /          \\::::::::/    /            |::|   |              \\:::\\    \\               \\:::\\   \\::/    /        \\:::\\  /:::/    / "<<endl;
    cout<<"     \\:::\\    \\                \\::::::/    /            \\::::::/    /             |::|   |               \\:::\\    \\               \\:::\\   \\/____/          \\:::\\/:::/    / "<<endl;
    cout<<"      \\:::\\    \\                \\::::/    /              \\::::/    /              |::|   |                \\:::\\    \\               \\:::\\    \\               \\::::::/    / "<<endl;
    cout<<"       \\:::\\____\\                \\::/____/                \\::/____/               \\::|   |                 \\:::\\____\\               \\:::\\____\\               \\::::/    / "<<endl;
    cout<<"        \\::/    /                 ~~                       ~~                      \\:|   |                  \\::/    /                \\::/    /                \\::/    / "<<endl;
    cout<<"         \\/____/                                                                    \\|___|                   \\/____/                  \\/____/                  \\/____/ "<<endl;
    cout<<endl;
    cout<<"          _____                   _______                   _____                    _____                    _____  "<<endl;
    cout<<"         /\\    \\                 /::\\    \\                 /\\    \\                  /\\    \\                  /\\    \\  "<<endl;
    cout<<"        /::\\__ _\\               /::::\\    \\               /::\\    \\                /::\\    \\                /::\\    \\ "<<endl;
    cout<<"       /:::/    /              /::::::\\    \\             /::::\\    \\              /::::\\    \\              /::::\\    \\ "<<endl;
    cout<<"      /:::/   _/___           /::::::::\\    \\           /::::::\\    \\            /::::::\\    \\            /::::::\\    \\ "<<endl;
    cout<<"     /:::/   /\\    \\         /:::/~~\\:::\\    \\         /:::/\\:::\\    \\          /:::/\\:::\\    \\          /:::/\\:::\\    \\ "<<endl;
    cout<<"    /:::/   /::\\____\\       /:::/    \\:::\\    \\       /:::/__\\:::\\    \\        /:::/  \\:::\\    \\        /:::/__\\:::\\    \\ "<<endl;
    cout<<"   /:::/   /:::/    /      /:::/    / \\:::\\    \\     /::::\\   \\:::\\    \\      /:::/    \\:::\\    \\       \\:::\\   \\:::\\    \\ "<<endl;
    cout<<"  /:::/   /:::/   _/___   /:::/____/   \\:::\\____\\   /::::::\\   \\:::\\    \\    /:::/    / \\:::\\    \\    ___\\:::\\   \\:::\\    \\ "<<endl;
    cout<<" /:::/___/:::/   /\\    \\ |:::|    |     |:::|    | /:::/\\:::\\   \\:::\\____\\  /:::/    /   \\:::\\ ___\\  /\\   \\:::\\   \\:::\\    \\ "<<endl;
    cout<<"|:::|   /:::/   /::\\____\\|:::|____|     |:::|    |/:::/  \\:::\\   \\:::|    |/:::/____/     \\:::|    |/::\\   \\:::\\   \\:::\\____\\ "<<endl;
    cout<<"|:::|__/:::/   /:::/    / \\:::\\    \\   /:::/    / \\::/   |::::\\  /:::|____|\\:::\\    \\     /:::|____|\\:::\\   \\:::\\   \\::/    / "<<endl;
    cout<<" \\:::\\/:::/   /:::/    /   \\:::\\    \\ /:::/    /   \\/____|:::::\\/:::/    /  \\:::\\    \\   /:::/    /  \\:::\\   \\:::\\   \\/____/ "<<endl;
    cout<<"  \\::::::/   /:::/    /     \\:::\\    /:::/    /          |:::::::::/    /    \\:::\\    \\ /:::/    /    \\:::\\   \\:::\\    \\ "<<endl;
    cout<<"   \\::::/___/:::/    /       \\:::\\__/:::/    /           |::|\\::::/    /      \\:::\\    /:::/    /      \\:::\\   \\:::\\____\\ "<<endl;
    cout<<"    \\:::\\__/:::/    /         \\::::::::/    /            |::| \\::/____/        \\:::\\  /:::/    /        \\:::\\  /:::/    / "<<endl;
    cout<<"     \\::::::::/    /           \\::::::/    /             |::|  ~|               \\:::\\/:::/    /          \\:::\\/:::/    / "<<endl;
    cout<<"      \\::::::/    /             \\::::/    /              |::|   |                \\::::::/    /            \\::::::/    / "<<endl;
    cout<<"       \\::::/    /               \\::/____/               \\::|   |                 \\::::/    /              \\::::/    / "<<endl;
    cout<<"        \\::/____/                 ~~                      \\:|   |                  \\::/____/                \\::/    / "<<endl;
    cout<<"         ~~                                                \\|___|                   ~~                       \\/____/ "<<endl;
    cout<<endl;
    cout<<"Welcome to Word cookies v.a"<<endl;
    cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
    cout<<"| If you want to give help in this game, enter Help or help or h to go to the Help System.                                    |"<<endl;
    cout<<"|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|"<<endl;
    cout<<"Are you ready to start the game?"<<endl;
    string an;
    cin>>an;
    if((an=="Yes")||(an=="yes")||(an=="y"))
    {
        int coin=30;
        word_cookies_step1(coin);
    }
}
int word_cookies_step1(int coin)
{
    cout<<"|----------------------------------------------------------------------------------------------------------|"<<endl;
    cout<<"Easy level\tStep 1"<<endl<<"Enter 1 two-letter word and 1 three-letter word with"<<endl;
    cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
    for(int i=0;letters[0][i]!='\0';i++)
    {
        cout<<"|              "<<letters[0][i]<<"                |"<<endl;
    }
    cout<<"|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|"<<endl;
    int n=0,a=0,b=0;
    string x;
	string s;
	while(n<2)
	{
	    cout<<"Your coins: "<<coin<<endl;
	    cout<<"Your answer: ";
		cin>>s;
		if(s=="my")
		{
			if(a==0)
			{
				cout<<"Excellent! you get 5 coins."<<endl;
				a=1;
				coin+=5;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
		}

		if(s=="gym")
		{
			if(b==0)
			{
				cout<<"Excellent! you get 10 coins."<<endl;
				b=1;
				coin+=10;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
		}
        if((s=="Help")||(s=="help")||(s=="h"))
        {
            cout<<"|---------------------------------------------------------------------------------------|"<<endl;
            cout<<"|>>>>>                               HELP SYSTEM                                   <<<<<|"<<endl;
            cout<<"|---------------------------------------------------------------------------------------|"<<endl;
            if(coin>=40)
            {
                cout<<"We get your 40 coins and show one of the answer. Are you sure?"<<endl;
                cin>>x;
                if((x=="yes")||(x=="y"))
                {
                    if(a==0)
                    {
                        cout<<"The answer was my."<<endl;
                        n++;coin-=40;a=1;
                    }
                    else if(b==0)
                    {
                        cout<<"The answer was gym."<<endl;
                        n++;coin-=40;b=1;
                    }
                }
                if((x=="no")||(x=="n"))
                {
                    cout<<"Am I joke to you?!"<<endl<<"The help system was canceled."<<endl;
                    coin-=5;
                }
                if((x!="yes")&&(x!="y")&&(x!="no")&&(x!="n")) cout<<"Selection entered is invalid. Please try again."<<endl;
            }
            else cout<<"You do not have enough coins."<<endl;
        }
        if((s=="Exit")||(s=="exit")||(s=="e"))
        {
            cout<<"Your coins: "<<coin<<endl;
            return 0;
        }
        if((s!="my")&&(s!="gym")&&(s!="Help")&&(s!="help")&&(s!="h")&&(s!="Exit")&&(s!="exit")&&(s!="e")) cout<<"That is WRONG."<<endl;
    }
    cout<<"Congratulation! You pass the first step. Lets go to second step..."<<endl;
    cout<<"|----------------------------------------------------------------------------------------------------------|"<<endl;
    word_cookies_step2(coin);
    return 0;
}
int word_cookies_step2(int coin)
{
    cout<<"Easy level\tStep 2"<<endl<<"Enter 1 three-letter word and 2 four-letter words with"<<endl;
    cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
    for(int i=0;letters[1][i]!='\0';i++)
    {
        cout<<"|              "<<letters[1][i]<<"                |"<<endl;
    }
    cout<<"|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|"<<endl;
    int n=0,a=0,b=0,c=0;
    string x;
	string s;
	while(n<3)
	{
	    cout<<"Your coins: "<<coin<<endl;
	    cout<<"Your answer: ";
		cin>>s;
		if(s=="red")
		{
			if(a==0)
			{
				cout<<"Excellent! you get 10 coins."<<endl;
				a=1;
				coin+=10;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
		}

		if(s=="reed")
		{
			if(b==0)
			{
				cout<<"Excellent! you get 15 coins."<<endl;
				b=1;
				coin+=15;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
		}
		if(s=="deer")
		{
			if(c==0)
			{
				cout<<"Excellent! you get 15 coins."<<endl;
				c=1;
				coin+=15;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
        }
        if((s=="Help")||(s=="help")||(s=="h"))
        {
            cout<<"|---------------------------------------------------------------------------------------|"<<endl;
            cout<<"|>>>>>                               HELP SYSTEM                                   <<<<<|"<<endl;
            cout<<"|---------------------------------------------------------------------------------------|"<<endl;
            if(coin>=40)
            {
                cout<<"We get your 40 coins and show one of the answer. Are you sure?"<<endl;
                cin>>x;
                if((x=="yes")||(x=="y"))
                {
                    if(a==0)
                    {
                        cout<<"The answer was red."<<endl;
                        n++;coin-=40;a=1;
                    }
                    else if(b==0)
                    {
                        cout<<"The answer was reed."<<endl;
                        n++;coin-=40;b=1;
                    }
                    else if(c==0)
                    {
                        cout<<"The answer was deer."<<endl;
                        n++;coin-=40;c=1;
                    }
                }
                if((x=="no")||(x=="n"))
                {
                    cout<<"Am I joke to you?!"<<endl<<"The help system was canceled."<<endl;
                    coin-=5;
                }
                if((x!="yes")&&(x!="y")&&(x!="no")&&(x!="n")) cout<<"Selection entered is invalid. Please try again."<<endl;
            }
            else cout<<"You do not have enough coins."<<endl;
        }
        if((s=="Exit")||(s=="exit")||(s=="e"))
        {
            cout<<"Your coins: "<<coin<<endl;
            return 0;
        }
        if((s!="red")&&(s!="reed")&&(s!="deer")&&(s!="Help")&&(s!="help")&&(s!="h")&&(s!="Exit")&&(s!="exit")&&(s!="e")) cout<<"That is WRONG."<<endl;
    }
    cout<<"Congratulation! You pass the second step. Lets go to third step..."<<endl;
    cout<<"|----------------------------------------------------------------------------------------------------------|"<<endl;
    word_cookies_step3(coin);
    return 0;
}
int word_cookies_step3(int coin)
{
    cout<<"Easy level\tStep 3"<<endl<<"Enter 1 three-letter word and 2 four-letter words with"<<endl;
    cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
    for(int i=0;letters[2][i]!='\0';i++)
    {
        cout<<"|              "<<letters[2][i]<<"                |"<<endl;
    }
    cout<<"|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|"<<endl;
    int n=0,a=0,b=0,c=0;
    string x;
	string s;
	while(n<3)
	{
	    cout<<"Your coins: "<<coin<<endl;
	    cout<<"Your answer: ";
		cin>>s;
		if(s=="ace")
		{
			if(a==0)
			{
				cout<<"Excellent! you get 10 coins."<<endl;
				a=1;
				coin+=10;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
		}

		if(s=="face")
		{
			if(b==0)
			{
				cout<<"Excellent! you get 15 coins."<<endl;
				b=1;
				coin+=15;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
		}
		if(s=="cafe")
		{
			if(c==0)
			{
				cout<<"Excellent! you get 15 coins."<<endl;
				c=1;
				coin+=15;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
        }
        if((s=="Help")||(s=="help")||(s=="h"))
        {
            cout<<"|---------------------------------------------------------------------------------------|"<<endl;
            cout<<"|>>>>>                               HELP SYSTEM                                   <<<<<|"<<endl;
            cout<<"|---------------------------------------------------------------------------------------|"<<endl;
            if(coin>=40)
            {
                cout<<"We get your 40 coins and show one of the answer. Are you sure?"<<endl;
                cin>>x;
                if((x=="yes")||(x=="y"))
                {
                    if(a==0)
                    {
                        cout<<"The answer was ace."<<endl;
                        n++;coin-=40;a=1;
                    }
                    else if(b==0)
                    {
                        cout<<"The answer was face."<<endl;
                        n++;coin-=40;b=1;
                    }
                    else if(c==0)
                    {
                        cout<<"The answer was cafe."<<endl;
                        n++;coin-=40;c=1;
                    }
                }
                if((x=="no")||(x=="n"))
                {
                    cout<<"Am I joke to you?!"<<endl<<"The help system was canceled."<<endl;
                    coin-=5;
                }
                if((x!="yes")&&(x!="y")&&(x!="no")&&(x!="n")) cout<<"Selection entered is invalid. Please try again."<<endl;
            }
            else cout<<"You do not have enough coins."<<endl;
        }
        if((s=="Exit")||(s=="exit")||(s=="e"))
        {
            cout<<"Your coins: "<<coin<<endl;
            return 0;
        }
        if((s!="ace")&&(s!="face")&&(s!="cafe")&&(s!="Help")&&(s!="help")&&(s!="h")&&(s!="Exit")&&(s!="exit")&&(s!="e")) cout<<"That is WRONG."<<endl;
    }
    cout<<"Congratulation! You pass the third step. Lets go to fourth step..."<<endl;
    cout<<"|----------------------------------------------------------------------------------------------------------|"<<endl;
    word_cookies_step4(coin);
    return 0;
}
int word_cookies_step4(int coin)
{
    cout<<"Easy level\tStep 4"<<endl<<"Enter 1 three-letter word and 2 four-letter words with"<<endl;
    cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
    for(int i=0;letters[3][i]!='\0';i++)
    {
        cout<<"|              "<<letters[3][i]<<"                |"<<endl;
    }
    cout<<"|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|"<<endl;
    int n=0,a=0,b=0,c=0;
    string x;
	string s;
	while(n<3)
	{
	    cout<<"Your coins: "<<coin<<endl;
	    cout<<"Your answer: ";
		cin>>s;
		if(s=="hot")
		{
			if(a==0)
			{
				cout<<"Excellent! you get 10 coins."<<endl;
				a=1;
				coin+=15;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
		}

		if(s=="host")
		{
			if(b==0)
			{
				cout<<"Excellent! you get 15 coins."<<endl;
				b=1;
				coin+=15;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
		}
		if(s=="shot")
		{
			if(c==0)
			{
				cout<<"Excellent! you get 15 coins."<<endl;
				c=1;
				coin+=15;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
        }
        if((s=="Help")||(s=="help")||(s=="h"))
        {
            cout<<"|---------------------------------------------------------------------------------------|"<<endl;
            cout<<"|>>>>>                               HELP SYSTEM                                   <<<<<|"<<endl;
            cout<<"|---------------------------------------------------------------------------------------|"<<endl;
            if(coin>=40)
            {
                cout<<"We get your 40 coins and show one of the answer. Are you sure?"<<endl;
                cin>>x;
                if((x=="yes")||(x=="y"))
                {
                    if(a==0)
                    {
                        cout<<"The answer was hot."<<endl;
                        n++;coin-=40;a=1;
                    }
                    else if(b==0)
                    {
                        cout<<"The answer was host."<<endl;
                        n++;coin-=40;b=1;
                    }
                    else if(c==0)
                    {
                        cout<<"The answer was shot."<<endl;
                        n++;coin-=40;c=1;
                    }
                }
                if((x=="no")||(x=="n"))
                {
                    cout<<"Am I joke to you?!"<<endl<<"The help system was canceled."<<endl;
                    coin-=5;
                }
                if((x!="yes")&&(x!="y")&&(x!="no")&&(x!="n")) cout<<"Selection entered is invalid. Please try again."<<endl;
            }
            else cout<<"You do not have enough coins."<<endl;
        }
        if((s=="Exit")||(s=="exit")||(s=="e"))
        {
            cout<<"Your coins: "<<coin<<endl;
            return 0;
        }
        if((s!="hot")&&(s!="host")&&(s!="shot")&&(s!="Help")&&(s!="help")&&(s!="h")&&(s!="Exit")&&(s!="exit")&&(s!="e")) cout<<"That is WRONG."<<endl;
    }
    cout<<"Congratulation! You pass the fourth step. Lets go to fifth step..."<<endl;
    cout<<"|----------------------------------------------------------------------------------------------------------|"<<endl;
    word_cookies_step5(coin);
    return 0;
}
int word_cookies_step5(int coin)
{
    cout<<"Medium level\tStep 1"<<endl<<"Enter 1 two-letter word and 1 three-letter word and 2 four-letter words with"<<endl;
    cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
    for(int i=0;letters[4][i]!='\0';i++)
    {
        cout<<"|              "<<letters[4][i]<<"                |"<<endl;
    }
    cout<<"|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|"<<endl;
    int n=0,a=0,b=0,c=0,d=0;
    string x;
	string s;
	while(n<4)
	{
	    cout<<"Your coins: "<<coin<<endl;
	    cout<<"Your answer: ";
		cin>>s;
		if(s=="as")
		{
			if(a==0)
			{
				cout<<"Excellent! you get 5 coins."<<endl;
				a=1;
				coin+=5;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
		}

		if(s=="sea")
		{
			if(b==0)
			{
				cout<<"Excellent! you get 10 coins."<<endl;
				b=1;
				coin+=10;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
		}
		if(s=="save")
		{
			if(c==0)
			{
				cout<<"Excellent! you get 15 coins."<<endl;
				c=1;
				coin+=15;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
        }
        if(s=="vase")
		{
			if(d==0)
			{
				cout<<"Excellent! you get 15 coins."<<endl;
				d=1;
				coin+=15;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
        }
        if((s=="Help")||(s=="help")||(s=="h"))
        {
            cout<<"|---------------------------------------------------------------------------------------|"<<endl;
            cout<<"|>>>>>                               HELP SYSTEM                                   <<<<<|"<<endl;
            cout<<"|---------------------------------------------------------------------------------------|"<<endl;
            if(coin>=40)
            {
                cout<<"We get your 40 coins and show one of the answer. Are you sure?"<<endl;
                cin>>x;
                if((x=="yes")||(x=="y"))
                {
                    if(a==0)
                    {
                        cout<<"The answer was as."<<endl;
                        n++;coin-=40;a=1;
                    }
                    else if(b==0)
                    {
                        cout<<"The answer was sea."<<endl;
                        n++;coin-=40;b=1;
                    }
                    else if(c==0)
                    {
                        cout<<"The answer was save."<<endl;
                        n++;coin-=40;c=1;
                    }
                    else if(d==0)
                    {
                        cout<<"The answer was vase."<<endl;
                        n++;coin-=40;d=1;
                    }
                }
                if((x=="no")||(x=="n"))
                {
                    cout<<"Am I joke to you?!"<<endl<<"The help system was canceled."<<endl;
                    coin-=5;
                }
                if((x!="yes")&&(x!="y")&&(x!="no")&&(x!="n")) cout<<"Selection entered is invalid. Please try again."<<endl;
            }
            else cout<<"You do not have enough coins."<<endl;
        }
        if((s=="Exit")||(s=="exit")||(s=="e"))
        {
            cout<<"Your coins: "<<coin<<endl;
            return 0;
        }
        if((s!="as")&&(s!="sea")&&(s!="save")&&(s!="vase")&&(s!="Help")&&(s!="help")&&(s!="h")&&(s!="Exit")&&(s!="exit")&&(s!="e")) cout<<"That is WRONG."<<endl;
    }
    cout<<"Congratulation! You pass the fifth step. Lets go to sixth step..."<<endl;
    cout<<"|----------------------------------------------------------------------------------------------------------|"<<endl;
    word_cookies_step6(coin);
    return 0;
}
int word_cookies_step6(int coin)
{
    cout<<"Medium level\tStep 2"<<endl<<"Enter 1 two-letter word and 1 three-letter word and 2 four-letter words with"<<endl;
    cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
    for(int i=0;letters[5][i]!='\0';i++)
    {
        cout<<"|              "<<letters[5][i]<<"                |"<<endl;
    }
    cout<<"|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|"<<endl;
    int n=0,a=0,b=0,c=0,d=0;
    string x;
	string s;
	while(n<4)
	{
	    cout<<"Your coins: "<<coin<<endl;
	    cout<<"Your answer: ";
		cin>>s;
		if(s=="me")
		{
			if(a==0)
			{
				cout<<"Excellent! you get 5 coins."<<endl;
				a=1;
				coin+=5;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
		}

		if(s=="lie")
		{
			if(b==0)
			{
				cout<<"Excellent! you get 10 coins."<<endl;
				b=1;
				coin+=10;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
		}
		if(s=="lime")
		{
			if(c==0)
			{
				cout<<"Excellent! you get 15 coins."<<endl;
				c=1;
				coin+=15;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
        }
        if(s=="mile")
		{
			if(d==0)
			{
				cout<<"Excellent! you get 15 coins."<<endl;
				d=1;
				coin+=15;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
        }
        if((s=="Help")||(s=="help")||(s=="h"))
        {
            cout<<"|---------------------------------------------------------------------------------------|"<<endl;
            cout<<"|>>>>>                               HELP SYSTEM                                   <<<<<|"<<endl;
            cout<<"|---------------------------------------------------------------------------------------|"<<endl;
            if(coin>=40)
            {
                cout<<"We get your 40 coins and show one of the answer. Are you sure?"<<endl;
                cin>>x;
                if((x=="yes")||(x=="y"))
                {
                    if(a==0)
                    {
                        cout<<"The answer was me."<<endl;
                        n++;coin-=40;a=1;
                    }
                    else if(b==0)
                    {
                        cout<<"The answer was lie."<<endl;
                        n++;coin-=40;b=1;
                    }
                    else if(c==0)
                    {
                        cout<<"The answer was lime."<<endl;
                        n++;coin-=40;c=1;
                    }
                    else if(d==0)
                    {
                        cout<<"The answer was mile."<<endl;
                        n++;coin-=40;d=1;
                    }
                }
                if((x=="no")||(x=="n"))
                {
                    cout<<"Am I joke to you?!"<<endl<<"The help system was canceled."<<endl;
                    coin-=5;
                }
                if((x!="yes")&&(x!="y")&&(x!="no")&&(x!="n")) cout<<"Selection entered is invalid. Please try again."<<endl;
            }
            else cout<<"You do not have enough coins."<<endl;
        }
        if((s=="Exit")||(s=="exit")||(s=="e"))
        {
            cout<<"Your coins: "<<coin<<endl;
            return 0;
        }
        if((s!="me")&&(s!="lie")&&(s!="lime")&&(s!="mile")&&(s!="Help")&&(s!="help")&&(s!="h")&&(s!="Exit")&&(s!="exit")&&(s!="e")) cout<<"That is WRONG."<<endl;
    }
    cout<<"Congratulation! You pass the sixth step. Lets go to seventh step..."<<endl;
    cout<<"|----------------------------------------------------------------------------------------------------------|"<<endl;
    word_cookies_step7(coin);
    return 0;
}
int word_cookies_step7(int coin)
{
    cout<<"Medium level\tStep 3"<<endl<<"Enter 3 three-letter words and 1 four-letter word with"<<endl;
    cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
    for(int i=0;letters[6][i]!='\0';i++)
    {
        cout<<"|              "<<letters[6][i]<<"                |"<<endl;
    }
    cout<<"|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|"<<endl;
    int n=0,a=0,b=0,c=0,d=0;
    string x;
	string s;
	while(n<4)
	{
	    cout<<"Your coins: "<<coin<<endl;
	    cout<<"Your answer: ";
		cin>>s;
		if(s=="lad")
		{
			if(a==0)
			{
				cout<<"Excellent! you get 10 coins."<<endl;
				a=1;
				coin+=10;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
		}

		if(s=="lay")
		{
			if(b==0)
			{
				cout<<"Excellent! you get 10 coins."<<endl;
				b=1;
				coin+=10;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
		}
		if(s=="day")
		{
			if(c==0)
			{
				cout<<"Excellent! you get 10 coins."<<endl;
				c=1;
				coin+=10;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
        }
        if(s=="lady")
		{
			if(d==0)
			{
				cout<<"Excellent! you get 15 coins."<<endl;
				d=1;
				coin+=15;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
        }
        if((s=="Help")||(s=="help")||(s=="h"))
        {
            cout<<"|---------------------------------------------------------------------------------------|"<<endl;
            cout<<"|>>>>>                               HELP SYSTEM                                   <<<<<|"<<endl;
            cout<<"|---------------------------------------------------------------------------------------|"<<endl;
            if(coin>=40)
            {
                cout<<"We get your 40 coins and show one of the answer. Are you sure?"<<endl;
                cin>>x;
                if((x=="yes")||(x=="y"))
                {
                    if(a==0)
                    {
                        cout<<"The answer was lad."<<endl;
                        n++;coin-=40;a=1;
                    }
                    else if(b==0)
                    {
                        cout<<"The answer was lay."<<endl;
                        n++;coin-=40;b=1;
                    }
                    else if(c==0)
                    {
                        cout<<"The answer was day."<<endl;
                        n++;coin-=40;c=1;
                    }
                    else if(d==0)
                    {
                        cout<<"The answer was lady."<<endl;
                        n++;coin-=40;d=1;
                    }
                }
                if((x=="no")||(x=="n"))
                {
                    cout<<"Am I joke to you?!"<<endl<<"The help system was canceled."<<endl;
                    coin-=5;
                }
                if((x!="yes")&&(x!="y")&&(x!="no")&&(x!="n")) cout<<"Selection entered is invalid. Please try again."<<endl;
            }
            else cout<<"You do not have enough coins."<<endl;
        }
        if((s=="Exit")||(s=="exit")||(s=="e"))
        {
            cout<<"Your coins: "<<coin<<endl;
            return 0;
        }
        if((s!="lad")&&(s!="lay")&&(s!="day")&&(s!="lady")&&(s!="Help")&&(s!="help")&&(s!="h")&&(s!="Exit")&&(s!="exit")&&(s!="e")) cout<<"That is WRONG."<<endl;
    }
    cout<<"Congratulation! You pass the seventh step. Lets go to eighth step..."<<endl;
    cout<<"|----------------------------------------------------------------------------------------------------------|"<<endl;
    word_cookies_step8(coin);
    return 0;
}
int word_cookies_step8(int coin)
{
    cout<<"Medium level\tStep 4"<<endl<<"Enter 1 three-letter word and 1 four-letter word and 1 five-letter word with"<<endl;
    cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
    for(int i=0;letters[7][i]!='\0';i++)
    {
        cout<<"|              "<<letters[7][i]<<"                |"<<endl;
    }
    cout<<"|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|"<<endl;
    int n=0,a=0,b=0,c=0;
    string x;
	string s;
	while(n<3)
	{
	    cout<<"Your coins: "<<coin<<endl;
	    cout<<"Your answer: ";
		cin>>s;
		if(s=="kin")
		{
			if(a==0)
			{
				cout<<"Excellent! you get 10 coins."<<endl;
				a=1;
				coin+=10;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
		}

		if(s=="rink")
		{
			if(b==0)
			{
				cout<<"Excellent! you get 15 coins."<<endl;
				b=1;
				coin+=15;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
		}
		if(s=="drink")
		{
			if(c==0)
			{
				cout<<"Excellent! you get 20 coins."<<endl;
				c=1;
				coin+=20;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
        }
        if((s=="Help")||(s=="help")||(s=="h"))
        {
            cout<<"|---------------------------------------------------------------------------------------|"<<endl;
            cout<<"|>>>>>                               HELP SYSTEM                                   <<<<<|"<<endl;
            cout<<"|---------------------------------------------------------------------------------------|"<<endl;
            if(coin>=40)
            {
                cout<<"We get your 40 coins and show one of the answer. Are you sure?"<<endl;
                cin>>x;
                if((x=="yes")||(x=="y"))
                {
                    if(a==0)
                    {
                        cout<<"The answer was kin."<<endl;
                        n++;coin-=40;a=1;
                    }
                    else if(b==0)
                    {
                        cout<<"The answer was rink."<<endl;
                        n++;coin-=40;b=1;
                    }
                    else if(c==0)
                    {
                        cout<<"The answer was drink."<<endl;
                        n++;coin-=40;c=1;
                    }
                }
                if((x=="no")||(x=="n"))
                {
                    cout<<"Am I joke to you?!"<<endl<<"The help system was canceled."<<endl;
                    coin-=5;
                }
                if((x!="yes")&&(x!="y")&&(x!="no")&&(x!="n")) cout<<"Selection entered is invalid. Please try again."<<endl;
            }
            else cout<<"You do not have enough coins."<<endl;
        }
        if((s=="Exit")||(s=="exit")||(s=="e"))
        {
            cout<<"Your coins: "<<coin<<endl;
            return 0;
        }
        if((s!="kin")&&(s!="rink")&&(s!="drink")&&(s!="Help")&&(s!="help")&&(s!="h")&&(s!="Exit")&&(s!="exit")&&(s!="e")) cout<<"That is WRONG."<<endl;
    }
    cout<<"Congratulation! You pass the eighth step. Lets go to ninth step..."<<endl;
    cout<<"|----------------------------------------------------------------------------------------------------------|"<<endl;
    word_cookies_step9(coin);
    return 0;
}
int word_cookies_step9(int coin)
{
    cout<<"Hard level\tStep 1"<<endl<<"Enter 3 three-letter words and 2 four-letter words with"<<endl;
    cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
    for(int i=0;letters[8][i]!='\0';i++)
    {
        cout<<"|              "<<letters[8][i]<<"                |"<<endl;
    }
    cout<<"|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|"<<endl;
    int n=0,a=0,b=0,c=0,d=0,e=0;
    string x;
	string s;
	while(n<5)
	{
	    cout<<"Your coins: "<<coin<<endl;
	    cout<<"Your answer: ";
		cin>>s;
		if(s=="was")
		{
			if(a==0)
			{
				cout<<"Excellent! you get 10 coins."<<endl;
				a=1;
				coin+=10;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
		}

		if(s=="saw")
		{
			if(b==0)
			{
				cout<<"Excellent! you get 10 coins."<<endl;
				b=1;
				coin+=10;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
		}
		if(s=="haw")
		{
			if(c==0)
			{
				cout<<"Excellent! you get 10 coins."<<endl;
				c=1;
				coin+=10;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
        }
        if(s=="wash")
		{
			if(d==0)
			{
				cout<<"Excellent! you get 15 coins."<<endl;
				d=1;
				coin+=15;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
        }
        if(s=="shaw")
		{
			if(e==0)
			{
				cout<<"Excellent! you get 15 coins."<<endl;
				e=1;
				coin+=15;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
        }
        if((s=="Help")||(s=="help")||(s=="h"))
        {
            cout<<"|---------------------------------------------------------------------------------------|"<<endl;
            cout<<"|>>>>>                               HELP SYSTEM                                   <<<<<|"<<endl;
            cout<<"|---------------------------------------------------------------------------------------|"<<endl;
            if(coin>=40)
            {
                cout<<"We get your 40 coins and show one of the answer. Are you sure?"<<endl;
                cin>>x;
                if((x=="yes")||(x=="y"))
                {
                    if(a==0)
                    {
                        cout<<"The answer was was."<<endl;
                        n++;coin-=40;a=1;
                    }
                    else if(b==0)
                    {
                        cout<<"The answer was saw."<<endl;
                        n++;coin-=40;b=1;
                    }
                    else if(c==0)
                    {
                        cout<<"The answer was haw."<<endl;
                        n++;coin-=40;c=1;
                    }
                    else if(d==0)
                    {
                        cout<<"The answer was wash."<<endl;
                        n++;coin-=40;d=1;
                    }
                    else if(e==0)
                    {
                        cout<<"The answer was shaw."<<endl;
                        n++;coin-=40;e=1;
                    }
                }
                if((x=="no")||(x=="n"))
                {
                    cout<<"Am I joke to you?!"<<endl<<"The help system was canceled."<<endl;
                    coin-=5;
                }
                if((x!="yes")&&(x!="y")&&(x!="no")&&(x!="n")) cout<<"Selection entered is invalid. Please try again."<<endl;
            }
            else cout<<"You do not have enough coins."<<endl;
        }
        if((s=="Exit")||(s=="exit")||(s=="e"))
        {
            cout<<"Your coins: "<<coin<<endl;
            return 0;
        }
        if((s!="was")&&(s!="saw")&&(s!="haw")&&(s!="wash")&&(s!="shaw")&&(s!="Help")&&(s!="help")&&(s!="h")&&(s!="Exit")&&(s!="exit")&&(s!="e")) cout<<"That is WRONG."<<endl;
    }
    cout<<"Congratulation! You pass the ninth step. Lets go to tenth step..."<<endl;
    cout<<"|----------------------------------------------------------------------------------------------------------|"<<endl;
    word_cookies_step10(coin);
    return 0;
}
int word_cookies_step10(int coin)
{
    cout<<"Hard level\tStep 2"<<endl<<"Enter 3 three-letter words and 1 four-letter word and 1 five-letter word with"<<endl;
    cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
    for(int i=0;letters[9][i]!='\0';i++)
    {
        cout<<"|              "<<letters[9][i]<<"                |"<<endl;
    }
    cout<<"|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|"<<endl;
    int n=0,a=0,b=0,c=0,d=0,e=0;
    string x;
	string s;
	while(n<5)
	{
	    cout<<"Your coins: "<<coin<<endl;
	    cout<<"Your answer: ";
		cin>>s;
		if(s=="fat")
		{
			if(a==0)
			{
				cout<<"Excellent! you get 10 coins."<<endl;
				a=1;
				coin+=10;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
		}

		if(s=="sat")
		{
			if(b==0)
			{
				cout<<"Excellent! you get 10 coins."<<endl;
				b=1;
				coin+=10;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
		}
		if(s=="fas")
		{
			if(c==0)
			{
				cout<<"Excellent! you get 10 coins."<<endl;
				c=1;
				coin+=10;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
        }
        if(s=="fast")
		{
			if(d==0)
			{
				cout<<"Excellent! you get 15 coins."<<endl;
				d=1;
				coin+=15;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
        }
        if(s=="staff")
		{
			if(e==0)
			{
				cout<<"Excellent! you get 20 coins."<<endl;
				e=1;
				coin+=20;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
        }
        if((s=="Help")||(s=="help")||(s=="h"))
        {
            cout<<"|---------------------------------------------------------------------------------------|"<<endl;
            cout<<"|>>>>>                               HELP SYSTEM                                   <<<<<|"<<endl;
            cout<<"|---------------------------------------------------------------------------------------|"<<endl;
            if(coin>=40)
            {
                cout<<"We get your 40 coins and show one of the answer. Are you sure?"<<endl;
                cin>>x;
                if((x=="yes")||(x=="y"))
                {
                    if(a==0)
                    {
                        cout<<"The answer was fat."<<endl;
                        n++;coin-=40;a=1;
                    }
                    else if(b==0)
                    {
                        cout<<"The answer was sat."<<endl;
                        n++;coin-=40;b=1;
                    }
                    else if(c==0)
                    {
                        cout<<"The answer was fas."<<endl;
                        n++;coin-=40;c=1;
                    }
                    else if(d==0)
                    {
                        cout<<"The answer was fast."<<endl;
                        n++;coin-=40;d=1;
                    }
                    else if(e==0)
                    {
                        cout<<"The answer was staff."<<endl;
                        n++;coin-=40;e=1;
                    }
                }
                if((x=="no")||(x=="n"))
                {
                    cout<<"Am I joke to you?!"<<endl<<"The help system was canceled."<<endl;
                    coin-=5;
                }
                if((x!="yes")&&(x!="y")&&(x!="no")&&(x!="n")) cout<<"Selection entered is invalid. Please try again."<<endl;
            }
            else cout<<"You do not have enough coins."<<endl;
        }
        if((s=="Exit")||(s=="exit")||(s=="e"))
        {
            cout<<"Your coins: "<<coin<<endl;
            return 0;
        }
        if((s!="fat")&&(s!="sat")&&(s!="fas")&&(s!="fast")&&(s!="staff")&&(s!="Help")&&(s!="help")&&(s!="h")&&(s!="Exit")&&(s!="exit")&&(s!="e")) cout<<"That is WRONG."<<endl;
    }
    cout<<"Congratulation! You pass the tenth step. Lets go to eleventh step..."<<endl;
    cout<<"|----------------------------------------------------------------------------------------------------------|"<<endl;
    word_cookies_step11(coin);
    return 0;
}
int word_cookies_step11(int coin)
{
    cout<<"Hard level\tStep 3"<<endl<<"Enter 2 three-letter words and 2 four-letter words and 1 five-letter word with"<<endl;
    cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
    for(int i=0;letters[10][i]!='\0';i++)
    {
        cout<<"|              "<<letters[10][i]<<"                |"<<endl;
    }
    cout<<"|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|"<<endl;
    int n=0,a=0,b=0,c=0,d=0,e=0;
    string x;
	string s;
	while(n<5)
	{
	    cout<<"Your coins: "<<coin<<endl;
	    cout<<"Your answer: ";
		cin>>s;
		if(s=="all")
		{
			if(a==0)
			{
				cout<<"Excellent! you get 10 coins."<<endl;
				a=1;
				coin+=10;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
		}

		if(s=="lac")
		{
			if(b==0)
			{
				cout<<"Excellent! you get 10 coins."<<endl;
				b=1;
				coin+=10;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
		}
		if(s=="call")
		{
			if(c==0)
			{
				cout<<"Excellent! you get 15 coins."<<endl;
				c=1;
				coin+=15;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
        }
        if(s=="coal")
		{
			if(d==0)
			{
				cout<<"Excellent! you get 15 coins."<<endl;
				d=1;
				coin+=15;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
        }
        if(s=="local")
		{
			if(e==0)
			{
				cout<<"Excellent! you get 20 coins."<<endl;
				e=1;
				coin+=20;
				n++;
			}
			else cout<<"This word is duplicate. Please try other word."<<endl;
        }
        if((s=="Help")||(s=="help")||(s=="h"))
        {
            cout<<"|---------------------------------------------------------------------------------------|"<<endl;
            cout<<"|>>>>>                               HELP SYSTEM                                   <<<<<|"<<endl;
            cout<<"|---------------------------------------------------------------------------------------|"<<endl;
            if(coin>=40)
            {
                cout<<"We get your 40 coins and show one of the answer. Are you sure?"<<endl;
                cin>>x;
                if((x=="yes")||(x=="y"))
                {
                    if(a==0)
                    {
                        cout<<"The answer was all."<<endl;
                        n++;coin-=40;a=1;
                    }
                    else if(b==0)
                    {
                        cout<<"The answer was lac."<<endl;
                        n++;coin-=40;b=1;
                    }
                    else if(c==0)
                    {
                        cout<<"The answer was call."<<endl;
                        n++;coin-=40;c=1;
                    }
                    else if(d==0)
                    {
                        cout<<"The answer was coal."<<endl;
                        n++;coin-=40;d=1;
                    }
                    else if(e==0)
                    {
                        cout<<"The answer was local."<<endl;
                        n++;coin-=40;e=1;
                    }
                }
                if((x=="no")||(x=="n"))
                {
                    cout<<"Am I joke to you?!"<<endl<<"The help system was canceled."<<endl;
                    coin-=5;
                }
                if((x!="yes")&&(x!="y")&&(x!="no")&&(x!="n")) cout<<"Selection entered is invalid. Please try again."<<endl;
            }
            else cout<<"You do not have enough coins."<<endl;
        }
        if((s=="Exit")||(s=="exit")||(s=="e"))
        {
            cout<<"Your coins: "<<coin<<endl;
            return 0;
        }
        if((s!="all")&&(s!="lac")&&(s!="call")&&(s!="coal")&&(s!="local")&&(s!="Help")&&(s!="help")&&(s!="h")&&(s!="Exit")&&(s!="exit")&&(s!="e")) cout<<"That is WRONG."<<endl;
    }
    cout<<"|----->>>>>                Congratulation!                <<<<<-----|"<<endl;
    cout<<"|----->>>>>           You pass all of the steps.          <<<<<-----|"<<endl;
    cout<<"|----->>>>> You got "<<coin<<" before the game was ended. <<<<<-----|"<<endl;
    cout<<"YYYYYYY       YYYYYYY                                                                                           iiii                     \n";
    cout<<"Y:::::Y       Y:::::Y                                                                                          i::::i                    \n";
    cout<<"Y:::::Y       Y:::::Y                                                                                           iiii                     \n";
    cout<<"Y::::::Y     Y::::::Y                                                                                                                    \n";
    cout<<"YYY:::::Y   Y:::::YYY   ooooooooooo     uuuuuu    uuuuuu           wwwwwww           wwwww           wwwwwww  iiiiiii  nnnn  nnnnnnnn    \n";
    cout<<"   Y:::::Y Y:::::Y    oo:::::::::::oo   u::::u    u::::u            w:::::w         w:::::w         w:::::w   i:::::i  n:::nn::::::::nn  \n";
    cout<<"    Y:::::Y:::::Y    o:::::::::::::::o  u::::u    u::::u             w:::::w       w:::::::w       w:::::w     i::::i  n::::::::::::::nn \n";
    cout<<"     Y:::::::::Y     o:::::ooooo:::::o  u::::u    u::::u              w:::::w     w:::::::::w     w:::::w      i::::i  nn:::::::::::::::n\n";
    cout<<"      Y:::::::Y      o::::o     o::::o  u::::u    u::::u               w:::::w   w:::::w:::::w   w:::::w       i::::i    n:::::nnnn:::::n\n";
    cout<<"       Y:::::Y       o::::o     o::::o  u::::u    u::::u                w:::::w w:::::w w:::::w w:::::w        i::::i    n::::n    n::::n\n";
    cout<<"       Y:::::Y       o::::o     o::::o  u::::u    u::::u                 w:::::w:::::w   w:::::w:::::w         i::::i    n::::n    n::::n\n";
    cout<<"       Y:::::Y       o::::o     o::::o  u:::::uuuu:::::u                  w:::::::::w     w:::::::::w          i::::i    n::::n    n::::n\n";
    cout<<"       Y:::::Y       o:::::ooooo:::::o  u:::::::::::::::uu                 w:::::::w       w:::::::w          i::::::i   n::::n    n::::n\n";
    cout<<"    YYYY:::::YYYY    o:::::::::::::::o   u:::::::::::::::u                  w:::::w         w:::::w           i::::::i   n::::n    n::::n\n";
    cout<<"    Y:::::::::::Y     oo:::::::::::oo     uu::::::::uu:::u                   w:::w           w:::w            i::::::i   n::::n    n::::n\n";
    cout<<"    YYYYYYYYYYYYY       ooooooooooo         uuuuuuuu  uuuu                    www             www             iiiiiiii   nnnnnn    nnnnnn\n";
    return 0;
}
void hangman()
{
    cout<<"\n\n\n\n\n\n"<<endl;
    cout<<"HHHHHHHHH     HHHHHHHHH "<<endl;
    cout<<"H:::::::H     H:::::::H "<<endl;
    cout<<"H:::::::H     H:::::::H "<<endl;
    cout<<"HH::::::H     H::::::HH "<<endl;
    cout<<"  H:::::H     H:::::H    aaaaaaaaaaaaa   nnnn  nnnnnnnn       ggggggggg   ggggg   mmmmmmm    mmmmmmm     aaaaaaaaaaaaa   nnnn  nnnnnnnn "<<endl;
    cout<<"  H:::::H     H:::::H    a::::::::::::a  n:::nn::::::::nn    g:::::::::ggg::::g mm:::::::m  m:::::::mm   a::::::::::::a  n:::nn::::::::nn "<<endl;
    cout<<"  H::::::HHHHH::::::H    aaaaaaaaa:::::a n::::::::::::::nn  g:::::::::::::::::gm::::::::::mm::::::::::m  aaaaaaaaa:::::a n::::::::::::::nn "<<endl;
    cout<<"  H:::::::::::::::::H             a::::a nn:::::::::::::::ng::::::ggggg::::::ggm::::::::::::::::::::::m           a::::a nn:::::::::::::::n "<<endl;
    cout<<"  H:::::::::::::::::H      aaaaaaa:::::a   n:::::nnnn:::::ng:::::g     g:::::g m:::::mmm::::::mmm:::::m    aaaaaaa:::::a   n:::::nnnn:::::n "<<endl;
    cout<<"  H::::::HHHHH::::::H    aa::::::::::::a   n::::n    n::::ng:::::g     g:::::g m::::m   m::::m   m::::m  aa::::::::::::a   n::::n    n::::n "<<endl;
    cout<<"  H:::::H     H:::::H   a::::aaaa::::::a   n::::n    n::::ng:::::g     g:::::g m::::m   m::::m   m::::m a::::aaaa::::::a   n::::n    n::::n "<<endl;
    cout<<"  H:::::H     H:::::H  a::::a    a:::::a   n::::n    n::::ng::::::g    g:::::g m::::m   m::::m   m::::ma::::a    a:::::a   n::::n    n::::n "<<endl;
    cout<<"HH::::::H     H::::::HHa::::a    a:::::a   n::::n    n::::ng:::::::ggggg:::::g m::::m   m::::m   m::::ma::::a    a:::::a   n::::n    n::::n "<<endl;
    cout<<"H:::::::H     H:::::::Ha:::::aaaa::::::a   n::::n    n::::n g::::::::::::::::g m::::m   m::::m   m::::ma:::::aaaa::::::a   n::::n    n::::n "<<endl;
    cout<<"H:::::::H     H:::::::H a::::::::::aa:::a  n::::n    n::::n  gg::::::::::::::g m::::m   m::::m   m::::m a::::::::::aa:::a  n::::n    n::::n "<<endl;
    cout<<"HHHHHHHHH     HHHHHHHHH  aaaaaaaaaa  aaaa  nnnnnn    nnnnnn    gggggggg::::::g mmmmmm   mmmmmm   mmmmmm  aaaaaaaaaa  aaaa  nnnnnn    nnnnnn "<<endl;
    cout<<"                                                                       g:::::g "<<endl;
    cout<<"                                                           gggggg      g:::::g "<<endl;
    cout<<"                                                           g:::::gg   gg:::::g "<<endl;
    cout<<"                                                            g::::::ggg:::::::g "<<endl;
    cout<<"                                                             gg:::::::::::::g "<<endl;
    cout<<"                                                               ggg::::::ggg "<<endl;
    cout<<"                                                                  gggggg "<<endl;
    cout<<endl;
    cout<<"Welcome to the Hangman game."<<endl;
    cout<<"Please select one language among English or Turkish: "<<endl;
    string s;
    string e;
    string e2;
    int i;
    for(i=0;;)
    {
        cin>>s;
        if((s=="English")||(s=="english")||(s=="e"))
        {
            hangman_eng();
            i++;
        }
        if((s=="Turkish")||(s=="turkish")||(s=="t"))
        {
            hangman_turk();
            i++;
        }
        if((s!="English")&&(s!="english")&&(s!="e")&&(s!="Turkish")&&(s!="turkish")&&(s!="t")) cout<<"language entered is invalid. Please try again."<<endl;
        if(i==1)
        {
            cout<<"Are you want to play Hangman with other language?"<<endl;
            cin>>e;
            if((e=="no")||(e=="n")) break;
        }
        if(i==2)
        {
            cout<<"Are you want to play Hangman again?"<<endl;
            cin>>e2;
            if((e=="yes")||(e=="y")) i=0;
            if((e=="no")||(e=="n")) break;
        }
    }
}
int hangman_eng()
{
    int n=0,b=0;
    char a;
	cout<<"welcome to English hangman game"<<endl<<endl;
    cout<<".....step 1....."<<endl<<endl;
    cout<<"a special food for Italians?  (- - - - -)"<<endl;
    while(n<5)
    {
        cin>>a;
        if(a=='p')
        {
            cout<<"great!!!the first letter of word is p"<<endl;
            b++;
            if(b==4)
            {
                cout<<"congratulation!!!you pass the first step the answer was pasta. be successful in second step"<<endl<<endl;
                break;}
        }
        if(a=='a')
        {
            cout<<"great!!!the second letter and last letter of word is a"<<endl;
            b++;
            if(b==4)
            {
                cout<<"congratulation!!!you pass the first step the answer was pasta. be successful in second step"<<endl<<endl;
                break;}
        }
		if(a=='s')
	{
    cout<<"great!!!the third letter of word is s"<<endl;

        b++;
            if(b==4)
    {
    cout<<"congratulation!!!you pass the first step the answer was pasta. be successful in second step"<<endl<<endl;
    break;}
        }
            if(a=='t')
        {
    cout<<"great!!!the fourth letter of word is t"<<endl;
        b++;
            if(b==4)
    {
    cout<<endl<<"congratulation!!!you pass the first step the answer was pasta. be successful in second step"<<endl<<endl;
    break;}
        }
    if(a!='p'&&a!='a'&&a!='s'&&a!='t')
        {
        cout<<"that's wrong'"<<endl;
        n++;}
    }
    if(b!=4)
    {
    cout<<"you lose!!! try again"<<endl;
    return 1;}
    n=0,b=0;
    cout<<".....step 2....."<<endl<<endl;
    cout<<"when we want to sleep we say together sweat (- - - - - -)"<<endl;
    while(n<6)
    {
        cin>>a;
        if(a=='d')
        {
    cout<<"great!!!the first letter of word is d"<<endl;

        b++;
            if(b==6)
    {
    cout<<"congratulation!!!you pass the second step. the answer was dreams. be successful in third step"<<endl<<endl;
    break;}
        }
        if(a=='r')
        {
            cout<<"great!!!the second letter of word is r"<<endl;
            b++;
            if(b==6)
    {
    cout<<"congratulation!!!you pass the second step. the answer was dreams. be successful in third step"<<endl<<endl;
    break;}
        }
            if(a=='e')
        {
    cout<<"great!!!the third letter of word is e"<<endl;

        b++;
            if(b==6)
    {
    cout<<"congratulation!!!you pass the second step. the answer was dreams. be successful in third step"<<endl<<endl;
    break;}
        }
            if(a=='a')
        {
    cout<<"great!!!the fourth letter of word is a"<<endl;

        b++;
            if(b==6)
    {
    cout<<endl<<"congratulation!!!you pass the second step. the answer was dreams. be successful in third step"<<endl<<endl;
    break;}
        }
            if(a=='m')
        {
    cout<<"great!!!the fifth letter of word is m"<<endl;

        b++;
            if(b==6)
    {
    cout<<endl<<"congratulation!!!you pass the second step the answer was dreams. be successful in third step"<<endl<<endl;
    break;}
        }
            if(a=='s')
        {
    cout<<"great!!!the sixth letter of word is p"<<endl;
        b++;
            if(b==6)
    {
    cout<<endl<<"congratulation!!!you pass the second step the answer was dreams. be successful in third step"<<endl<<endl;
    break;}
        }
    if(a!='d'&&a!='a'&&a!='r'&&a!='m'&&a!='s'&&a!='e')
        {
        cout<<"that's wrong'"<<endl;
        n++;}
    }
    if(b!=6)
    {
    cout<<"you lose!!! try again"<<endl;
    return 1;}
        n=0,b=0;
    cout<<".....step 3....."<<endl<<endl;
    cout<<"when we want to notice somebody from something we say be careful or (- - - - -) out "<<endl;
    while(n<5)
    {
        cin>>a;
        if(a=='w')
        {
    cout<<"great!!!the first letter of word is w"<<endl;

        b++;
            if(b==5)
    {
    cout<<"congratulation!!!you pass the third step. the answer was watch (out).you finish all the steps!!!"<<endl<<endl;
    break;}
        }
        if(a=='a')
        {
            cout<<"great!!!the second letter of word is a"<<endl;
            b++;
            if(b==5)
    {
    cout<<"congratulation!!!you pass the third step. the answer was watch (out).you finish all the steps!!!"<<endl<<endl;
    break;}
        }
            if(a=='t')
        {
    cout<<"great!!!the first letter of word is t"<<endl;

        b++;
            if(b==5)
    {
    cout<<"congratulation!!!you pass the third step. the answer was watch (out).you finish all the steps!!!"<<endl<<endl;
    break;}
        }
            if(a=='c')
        {
    cout<<"great!!!the first letter of word is c"<<endl;

        b++;
            if(b==5)
    {
    cout<<endl<<"congratulation!!!you pass the third step. the answer was watch (out).you finish all the steps!!!"<<endl<<endl;
    break;}
        }
            if(a=='h')
        {
    cout<<"great!!!the first letter of word is h"<<endl;

        b++;
            if(b==5)
    {
    cout<<endl<<"congratulation!!!you pass the third step. the answer was watch (out).you finish all the steps!!!"<<endl<<endl;
    break;}
        }

    if(a!='w'&&a!='a'&&a!='t'&&a!='c'&&a!='h')
        {
        cout<<"that's wrong'"<<endl;
        n++;}
    }
    if(b!=5)
    {
    cout<<"you lose!!! try again"<<endl;
    return 1;}
    cout<<"how was the game?"<<endl;
    cout<<"5-that was amazing!!!"<<endl;
    cout<<"4-it was very good!!!"<<endl;
    cout<<"3-it was not bad!!!"<<endl;
    cout<<"2-it was boring!!!"<<endl;
    cout<<"1-it was awful!!!"<<endl<<endl;
    string s;
    int x;
    cout<<"give your rate from 1 to 5 "<<endl;
    cin>>x;
    if(x>=3&&x<=5)
    cout<<"thank you very much have nice time goodbye!"<<endl;
    if (x==2||x==1)
    {cout<<"why don't you like it write your command in next line"<<endl;
    cin>>s;
    cout<<"thank you for your commands we will be good with your commands goodbye!"<<endl;}
    return 0;
}
int hangman_turk()
{
	int n=0,b=0;
    char a;
    cout<<"kelime oyununa hosh geldiniz size basharilar dilerim"<<endl<<endl;
    cout<<".....ilk seviye....."<<endl<<endl;
    cout<<"Yenilebilir bir  shey ki patladikhja buluta benzior!!!!?(onun adi nedir?)   (- - - - -)"<<endl;
    while(n<5)
    {
        cin>>a;
        if(a=='m')
        {
    cout<<"doru efendim !!!kelimenin ilk yazisi m dir"<<endl;

        b++;
            if(b==4)
    {
    cout<<"tebrikler ilk seviyeni bashardiniz kelime misirimish!!! ikingi seviye basharilar dilerim!!!"<<endl<<endl;
    break;}
        }
        if(a=='i')
        {
            cout<<"doru efendim !!!kelimenin ikinji v dordunji yazisi i dir"<<endl;
            b++;
            if(b==4)
    {
    cout<<"tebrikler ilk seviyeni bashardiniz kelime misirimish!!! ikingi seviye basharilar dilerim!!!"<<endl<<endl;
    break;}
        }
            if(a=='s')
        {
    cout<<"doru efendim !!!kelimenin uchunji yazisi s dir"<<endl;

        b++;
            if(b==4)
    {
    cout<<"tebrikler ilk seviyeni bashardiniz kelime misirimish!!! ikingi seviye basharilar dilerim!!!"<<endl<<endl;
    break;}
        }
            if(a=='r')
        {
    cout<<"doru efendim !!!kelimenin son yazisi r dir"<<endl;

        b++;
            if(b==4)
    {
    cout<<endl<<"tebrikler ilk seviyeni bashardiniz kelime misirimish!!! ikingi seviye basharilar dilerim!!!"<<endl<<endl;
    break;}
        }
    if(a!='m'&&a!='i'&&a!='s'&&a!='r')
        {
        cout<<"doru deir"<<endl;
        n++;}
    }
    if(b!=4)
    {
    cout<<"malesef yenildiniz yeniden bashlayin"<<endl;
    return 1;}
     n=0,b=0;
    cout<<".....ikingi seviye....."<<endl<<endl;
    cout<<"azerbaijani turkjesinde ekmeke ne denir(onun adi nedir?)   (- - - - - -)"<<endl;
    while(n<6)
    {
        cin>>a;
        if(a=='c')
        {
    cout<<"doru efendim !!!kelimenin ilk yazisi c dir"<<endl;
        b++;
        if(b==5)
    {
    cout<<"tebrikler ikinji seviyeni bashardiniz kelime churah dir!!! uchunji seviye basharilar dilerim!!!"<<endl<<endl;
    break;}
        }
        if(a=='h')
        {
            cout<<"doru efendim!!! kelimenin ikinji v son yazisi h dir"<<endl;
            b++;
            if(b==5)
    {
    cout<<"tebrikler ikinji seviyeni bashardiniz kelime churah dir!!! uchunji seviye basharilar dilerim!!!"<<endl<<endl;
    break;}
        }
            if(a=='u')
        {
    cout<<"doru efendim !!!kelimenin uchungi yazisi u dir"<<endl<<endl;

        b++;
            if(b==5)
    {
    cout<<"tebrikler ikinji seviyeni bashardiniz kelime churah dir!!! uchunji seviye basharilar dilerim!!!"<<endl<<endl;
    break;}
        }
            if(a=='r')
        {
    cout<<"doru efendim !!!kelimenin son yazisi r dir"<<endl;

        b++;
            if(b==5)
    {
    cout<<endl<<"tebrikler ikinji seviyeni bashardiniz kelime churah dir!!! uchunji seviye basharilar dilerim!!!"<<endl<<endl;
    break;}
        }
            if(a=='a')
        {
    cout<<"doru efendim !!!kelimenin son yazisi a dir"<<endl;

        b++;
            if(b==5)
    {
    cout<<endl<<"tebrikler ikinji seviyeni bashardiniz kelime churah dir!!! uchunji seviye basharilar dilerim!!!"<<endl<<endl;
    break;}
        }
    if(a!='c'&&a!='h'&&a!='u'&&a!='r'&&a!='a')
        {
        cout<<"doru deir"<<endl;
        n++;}
    }
    if(b!=5)
    {
    cout<<"malesef yenildiniz yeniden bashlayin"<<endl;
    return 1;}
     n=0,b=0;
    cout<<".....uchunji  seviye....."<<endl<<endl;
    cout<<"hangi oda da buzdolabaci v bullashic makinesi v...var?(onun adi nedir?)   (- - - - - -)"<<endl;
    while(n<6)
    {
        cin>>a;
        if(a=='m')
        {
    cout<<"doru efendim !!!kelimenin ilk yazisi m dir"<<endl;

        b++;
        if(b==6)
    {
    cout<<"tebrikler ikinji seviyeni bashardiniz kelime churah dir!!!  oyun sona geldi!!!"<<endl<<endl;
    break;}
        }
        if(a=='u')
        {
            cout<<"doru efendim!!! kelimenin ikinji yazisi u dir"<<endl;
            b++;
            if(b==6)
    {
    cout<<"tebrikler ikinji seviyeni bashardiniz kelime churah dir!!!  oyun sona geldi!!!"<<endl<<endl;
    break;}
        }
            if(a=='t')
        {
    cout<<"doru efendim !!!kelimenin uchungi yazisi t dir"<<endl<<endl;

        b++;
            if(b==6)
    {
    cout<<"tebrikler ikinji seviyeni bashardiniz kelime churah dir!!!  oyun sona geldi!!!"<<endl<<endl;
    break;}
        }
            if(a=='v')
        {
    cout<<"doru efendim !!!kelimenin son yazisi v dir"<<endl;

        b++;
            if(b==6)
    {
    cout<<endl<<"tebrikler ikinji seviyeni bashardiniz kelime churah dir!!! oyun sona geldi!!!"<<endl<<endl;
    break;}
        }
            if(a=='a')
        {
    cout<<"doru efendim !!!kelimenin son yazisi a dir"<<endl;

        b++;
            if(b==6)
    {
    cout<<endl<<"tebrikler ikinji seviyeni bashardiniz kelime churah dir!!!  oyun sona geldi!!!"<<endl<<endl;
    break;}}
        if(a=='k')
        {
    cout<<"doru efendim !!!kelimenin son yazisi k dir"<<endl;

        b++;
            if(b==6)
    {
    cout<<endl<<"tebrikler uchunji seviyeni bashardiniz kelime  mutvak!!! oyun sona geldi!!!"<<endl<<endl;
    break;}
        }
    if(a!='m'&&a!='u'&&a!='t'&&a!='v'&&a!='a'&&a!='k')
        {
        cout<<"doru deir"<<endl;
        n++;}
    }
    if(b!=6)
    {
    cout<<"malesef yenildiniz yeniden bashlayin"<<endl;
    return 1;}
    cout<<"bu oyuno nasil buldunuz?"<<endl;
    cout<<"5-chok eilenjeli bir oyun!!!"<<endl;
    cout<<"4-guzel bir oyun!!!"<<endl;
    cout<<"3- ei bir oyun!!!"<<endl;
    cout<<"2-sevmedim!!!"<<endl;
    cout<<"1-chok kotu bir oyun!!!"<<endl<<endl;
    string s;
    int x;
    cout<<"beshdan bira kadar istediniz numarani yazin "<<endl;
    cin>>x;
    if(x>=3&&x<=5)
    cout<<"teshekkurler effendim hoshja kalin!"<<endl;
    if (x==2||x==1)
    {cout<<"neden beyenmediz? shu altda yazin"<<endl;
    cin>>s;
    cout<<"verdiniz bilgi ichin teshekkurler hoshja kalin"<<endl;}
    return 0;
}
int word_cookies_vb()
{
    cout<<"Welcome to Word cookies v.b"<<endl;
    int coin=50,mk=0;
    string level1[5][4]={{"my","gym"},{"cup","up"},{"at","tab","bat"},{"go","of","fog"},{"on","no","so","son"}};
    string cpylevel1[5][4]={{"my","gym"},{"cup","up"},{"at","tab","bat"},{"go","of","fog"},{"on","no","so","son"}};
    int tk[5]={2,2,3,3,4};
    char horof1[5][3]={{'g','y','m'},{'c','u','p'},{'b','a','t'},{'f','o','g'},{'s','o','n'}};
    string x;
    int i=0;
    while(true)
    {
    cout<<endl;
    cout<<"                  ooo OOO OOO ooo\n";
    cout<<"               oOO                 OOo\n";
    cout<<"           oOO             "<<horof1[i][0]<<"           OOo\n";
    cout<<"        oOO                               OOo\n";
    cout<<"      oOO                                   OOo\n";
    cout<<"    oOO                                       OOo\n";
    cout<<"   oOO                                         OOo\n";
    cout<<"  oOO                                           OOo\n";
    cout<<" oOO                                             OOo\n";
    cout<<" oOO                                             OOo\n";
    cout<<" oOO                                             OOo\n";
    cout<<" oOO                                             OOo\n";
    cout<<" oOO                                             OOo\n";
    cout<<"  oOO                                           OOo\n";
    cout<<"   oOO        "<<horof1[i][1];
    cout<<"                        "<<horof1[i][2]<<"        OOo\n";
    cout<<"    oOO                                       OOo\n";
    cout<<"      oOO                                   OOo\n";
    cout<<"        oO                                OOo\n";
    cout<<"           oOO                         OOo\n";
    cout<<"               oOO                 OOo\n";
    cout<<"                  ooo OOO OOO ooo\n";
    cin>>x;
    if((x=="Exit")||(x=="exit")||(x=="e")) return 0;
    for(int j=0;j<tk[i];j++)
    {if(x==cpylevel1[i][j])
    {   coin+=5;
        cout<<"\n\n\n\n\n\n\n\nExellent!thats true\n"<<"your coins:"<<coin<<endl;
        cpylevel1[i][j]="0";
        mk++;}}
    if(mk==tk[i])
    {   cout<<"\npayan marhale"<<i+1;
        i++;
        mk=0;
    }
    if(i==5)
    {   cout<<"\nyou finished the game";
        return 0;
    }
    if((x=="Help")||(x=="help")||(x=="h"))
    {//system("cls");
    cout<<"Help:\n1cancle\n2-rad kardan marhale:30 coins\n3-rahnamaii yek kalame:15 coins\ngozineye morede nazar khod ra vared konid(1,2,3):";
    int a;
    cin>>a;
    cout<<endl;
    switch(a)
    {
    case 1:
        {break;}

    case 2:
        {if(coin>=30)
        {coin-=30;
            for(int j=0;j<tk[i];j++)
            {if("0"!=cpylevel1[i][j])
                {cout<<cpylevel1[i][j]<<endl;

                 cpylevel1[i][j]="0";}}
                 mk=0;
                 i++;}
				 else
				 {cout<<"coin kafi nist";
				 }cout<<"\nyour coin : "<<coin;break;}
    case 3:
        {if(coin>=15)
        {coin-=15;
         for(int j=0;j<tk[i];j++)
            {if("0"!=cpylevel1[i][j])
                {cout<<cpylevel1[i][j]<<endl;
                 cpylevel1[i][j]="0";
				  j=tk[i];

                 mk++;
                 }}
                 if(mk==tk[i])
                 {cout<<"\npayan marhale"<<i+1;
                     mk=0;
                     i++;
                 }
    }else
    {cout<<"coin kafi nist";}
    }break;}
    }}
    Sleep(10);
}
