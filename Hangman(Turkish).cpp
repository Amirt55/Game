#include<iostream>
#include<string>
using namespace std;
int main()
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

}
