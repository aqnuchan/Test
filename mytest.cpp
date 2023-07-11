// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
string name, otvet1, otvet2, otvet3,otvet4,
otvet5,otvet6,otvet7,otvet8,otvet9,otvet10,otvet11,otvet12,otvet13,otvet14,otvet15 ;
int point=0;
cout << "what is your name?" << endl;
cin >> name;
cout << "okay " << name << " let's start" << endl;
cout << "1.maknae of EXO?" << endl;
cin >> otvet1;
if (otvet1=="Sehun")
point=point+1;
else
point=point+0;
cout << "2.Main vocalist on the group BTS?" << endl;
cin >> otvet2;
if (otvet2=="Jungkook")
point=point+1;
else
point=point+0;
cout << "3.In which year BTS made their debut?" << endl;
cin >> otvet3;
if (otvet3=="2013")
point=point+1;
else
point=point+0;
cout << "4.Company of group Got7?" << endl;
cin >> otvet4;
if (otvet4=="JYP ")
point=point+1;
else
point=point+0;
cout << "5.Which group was made their debut on the 8th of august in 2016 year?" <<endl;
cin >> otvet5;
if (otvet5=="blackpink")
point=point+1;
else
point=point+0;
cout << "6.J.B. was born in …?" << endl;
cin >> otvet6;
if (otvet6=="South Korea")
point=point+1;
else
point=point+0;
cout << "7.The favourite colour of jin is …?" << endl;
cin >> otvet7;
if (otvet7=="pink")
point=point+1;
else
point=point+0;
cout << "8.Who sings the song Serendipity?" << endl;
cin >> otvet8;
if (otvet8=="Jimin")
point=point+1;
else
point=point+0;
cout << "9.Real name of D.O.?" << endl;
cin >> otvet9;
if (otvet9==" kyungsoo")
point=point+1;
else
point=point+0;
cout << "10..Which member of EXO was born on 6th of May?" << endl;
cin >> otvet10;
if (otvet10=="Baekhyun")
point=point+1;
else
point=point+0;
cout << "11. The position of Suga in the group BTS?" << endl;
cin >> otvet11;
if (otvet11=="rapper")
point=point+1;
else
point=point+0;
cout << "12..Who has name as Golden Maknae?" << endl;
cin >> otvet12;
if (otvet12=="Jungkook")
point=point+1;
else
point=point+0;
cout << "13.The famous song of Twice?" << endl;
cin >> otvet13;
if (otvet13=="Cheer up")
point=point+1;
else
point=point+0;
cout << "14..Which song of EXO is soundtrack of dorama Moo Lovers?" << endl;
cin >> otvet14;
if (otvet14=="For you ")
point=point+1;
else
point=point+0;
cout << "15..In which dorama play all members of EXO?" << endl;
cin >> otvet15;
if (otvet15=="EXO next door")
point=point+1;
else
point=point+0;
cout<<"your score is:"<<point;
return 0;
}