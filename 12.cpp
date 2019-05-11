/*!

@mainpage 
@brief SUMTIME 

@Avtor Makarov M. Punegova E.
@version 1.1
@date May 2019 
@warning . 
*/
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
/*!
\class MyClass
@string surname
@brief 
@Avtor Makarov M. Punegova E.
@version 1
@date May 2019 
@brief
@brief Ð—Ð´ÐµÑÑŒ Ð¼Ñ‹ Ð²Ñ‹Ð²Ð¾Ð´Ð¸Ð¼ Ð½Ð° ÑÐºÑ€Ð°Ð½ Ð¤Ð°Ð¼Ð¸Ð»Ð¸Ñ ÐºÐ¾Ñ‚Ð¾Ñ€Ñ‹Ðµ ÐµÑÑ‚ÑŒ Ð² ÑÐ¿Ð¸ÑÐºÐµ.
@code
int a;
string surname = "1.Makarov\n" "2.Makarov\n" "3.Korolenko\n" "4.Taraseev\n" "5.Akchurina\n"
"6.Arbuzov\n" "7.Bukvina\n " "8.Vilkova\n" "9.Sovkina\n" "10.Nyanina\n" "11.Papaschko\n" "12.Enotov\n"
"13.Dubowick\n" "14.Gadzilov\n" "15.Rubinko\n" "16.Taburetkin\n" "17.Schurgina\n" "18.Shiskina\n" "19.Shine\n"
"20.Kislenko\n";

string result;

result = surname;
cout << result;
@endcode
*/

int main()


{

int a;
string surname = "1.Makarov\n" "2.Makarov\n" "3.Korolenko\n" "4.Taraseev\n" "5.Akchurina\n" /// tring.
"6.Arbuzov\n" "7.Bukvina\n " "8.Vilkova\n" "9.Sovkina\n" "10.Nyanina\n" "11.Papaschko\n" "12.Enotov\n"
"13.Dubowick\n" "14.Gadzilov\n" "15.Rubinko\n" "16.Taburetkin\n" "17.Schurgina\n" "18.Shiskina\n" "19.Shine\n"
"20.Kislenko\n";

string result;
cout << "Hello world" << endl;
result = surname;
cout << result;
cout << "Vedite Nomer do 20 ili 21 dlay vixoda =";
cin >> a;
while (a >= 22)
{
cout << "Oshibka" << endl;
cout << "Vedite zanovo =" << endl;
cin >> a;
if (a == 21)
break;
}
/*!
\class MyClass
@brief Ñ‚ÑƒÑ‚ Ð¼Ñ‹ ÑÑ‡Ð¸Ñ‚Ñ‹Ð²Ð°ÐµÐ¼ Ð¸Ð· Ñ„Ð°Ð¹Ð»Ð° Ð¸Ð½Ñ„Ð¾Ñ€Ð¼Ð°Ñ†Ð¸ÑŽ Ð¸ Ð·Ð°Ð¾Ð´Ð½Ð¾ Ð¿Ñ€Ð¾Ð²ÐµÑ€ÑÐµÐ¼ Ð½Ð° Ð½Ð°Ð»Ð¸Ñ‡Ð¸Ðµ Ð¾Ñ‚ÐºÑ€Ñ‹Ñ‚Ð¸Ñ Ñ„Ð°Ð¹Ð»Ð°.
@brief ÐµÑÐ»Ð¸ Ñ„Ð°Ð¹Ð» Ð½Ðµ Ð½Ð°Ð¹Ð´ÐµÐ½ Ð²Ñ‹Ð²Ð¾Ð´Ð¸Ñ‚ Ð¾ÑˆÐ¸Ð±ÐºÑƒ ÐµÑÐ»Ð¸ Ð¶Ðµ Ð½Ð°ÐµÐ´ÐµÐ½ Ñ‚Ð¾ Ð¾Ñ‚ÐºÑ€Ñ‹Ð²Ð°ÐµÑ‚ ÐµÐ³Ð¾.
@param[in] Path Path Ð­Ñ‚Ð¾ Ð¿ÑƒÑ‚ÑŒ.
@param[in] addfile.txt addfile.txt Ð­Ñ‚Ð¾ Ð½Ð°Ð·Ð²Ð°Ð½Ð¸Ðµ Ñ„Ð°Ð¹Ð»Ð°.
@code
if (a == 1)
{
string path = "addfile.txt";

ifstream fin;
fin.open(path);

if (!fin.is_open())
{
cout << "Error file is not open!" << endl;
}
else
{
cout << "File open:" << endl;
char str[92];
while (!fin.eof())
{
fin.getline(str, 92);
cout << str << endl;
break;
fin.close();
}

}
@endcode 
*/

if (a == 1)
{
string path = "addfile.txt";

ifstream fin;
fin.open(path);

if (!fin.is_open())
{
cout << "Error file is not open!" << endl;
}
else
{
cout << "File open:" << endl;
char str[92];
while (!fin.eof())
{
fin.getline(str, 92);
cout << str << endl;
break;
fin.close();
}

}
}
/*!
\Class list
@brief Ð¡Ñ‡Ð¸Ñ‚Ñ‹Ð²Ð°ÐµÑ‚ Ñ„Ð°Ð¹Ð» Ð¸ Ð²Ñ‹Ð²Ð¾Ð´Ð¸Ñ‚ Ð¸Ð½Ñ„Ð¾Ñ€Ð¼Ð°Ñ†Ð¸ÑŽ.
@code 
string path = "addfile.txt";

ifstream fin;
fin.open(path);
cout << "File open:" << endl;
while (!fin.eof())
{
fin.getline(str, 92);
cout << str << endl;
break;
fin.close();
}
@endcode
*/
if (a == 2)
{
string path = "addfile.txt";

ifstream fin;
fin.open(path);

char str1[100];
char str2[100];
while (!fin.eof())
{
fin.getline(str1, 100);
fin.getline(str2, 100);

cout << str2 << endl;
break;
}
fin.close();
}
if (a == 3)
{
string path = "addfile.txt";

ifstream fin;
fin.open(path);

char str1[100];
char str2[100];
char str3[100];
while (!fin.eof())
{
fin.getline(str1, 100);
fin.getline(str2, 100);
fin.getline(str3, 100);

cout << str3 << endl;
break;
}
fin.close();
}
if (a == 4)
{
string path = "addfile.txt";

ifstream fin;
fin.open(path);

char str1[100];
char str2[100];
char str3[100];
char str4[100];
while (!fin.eof())
{
fin.getline(str1, 100);
fin.getline(str2, 100);
fin.getline(str3, 100);
fin.getline(str4, 100);

cout << str4 << endl;
break;
}
fin.close();
}
if (a == 5)
{
string path = "addfile.txt";

ifstream fin;
fin.open(path);

char str1[100];
char str2[100];
char str3[100];
char str4[100];
char str5[100];
while (!fin.eof())
{
fin.getline(str1, 100);
fin.getline(str2, 100);
fin.getline(str3, 100);
fin.getline(str4, 100);
fin.getline(str5, 100);

cout << str5 << endl;
break;
}
fin.close();
}
if (a == 6)
{
string path = "addfile.txt";

ifstream fin;
fin.open(path);

char str1[100];
char str2[100];
char str3[100];
char str4[100];
char str5[100];
char str6[100];
while (!fin.eof())
{
fin.getline(str1, 100);
fin.getline(str2, 100);
fin.getline(str3, 100);
fin.getline(str4, 100);
fin.getline(str5, 100);
fin.getline(str6, 100);
cout << str6 << endl;
break;
}
fin.close();
}
if (a == 7)
{
string path = "addfile.txt";

ifstream fin;
fin.open(path);

char str1[100];
char str2[100];
char str3[100];
char str4[100];
char str5[100];
char str6[100];
char str7[100];
while (!fin.eof())
{
fin.getline(str1, 100);
fin.getline(str2, 100);
fin.getline(str3, 100);
fin.getline(str4, 100);
fin.getline(str5, 100);
fin.getline(str6, 100);
fin.getline(str7, 100);
cout << str7 << endl;
break;
}
fin.close();
}
if (a == 8)
{
string path = "addfile.txt";

ifstream fin;
fin.open(path);

char str1[100];
char str2[100];
char str3[100];
char str4[100];
char str5[100];
char str6[100];
char str7[100];
char str8[100];
while (!fin.eof())
{
fin.getline(str1, 100);
fin.getline(str2, 100);
fin.getline(str3, 100);
fin.getline(str4, 100);
fin.getline(str5, 100);
fin.getline(str6, 100);
fin.getline(str7, 100);
fin.getline(str8, 100);
cout << str8 << endl;
break;
}
fin.close();
}
if (a == 9)
{
string path = "addfile.txt";

ifstream fin;
fin.open(path);

char str1[100];
char str2[100];
char str3[100];
char str4[100];
char str5[100];
char str6[100];
char str7[100];
char str8[100];
char str9[100];
while (!fin.eof())
{
fin.getline(str1, 100);
fin.getline(str2, 100);
fin.getline(str3, 100);
fin.getline(str4, 100);
fin.getline(str5, 100);
fin.getline(str6, 100);
fin.getline(str7, 100);
fin.getline(str8, 100);
fin.getline(str9, 100);
cout << str9 << endl;
break;
}
fin.close();
}
if (a == 10)
{
string path = "addfile.txt";

ifstream fin;
fin.open(path);

char str1[100];
char str2[100];
char str3[100];
char str4[100];
char str5[100];
char str6[100];
char str7[100];
char str8[100];
char str9[100];
char str10[100];
while (!fin.eof())
{
fin.getline(str1, 100);
fin.getline(str2, 100);
fin.getline(str3, 100);
fin.getline(str4, 100);
fin.getline(str5, 100);
fin.getline(str6, 100);
fin.getline(str7, 100);
fin.getline(str8, 100);
fin.getline(str9, 100);
fin.getline(str10, 100);
cout << str10 << endl;
break;
}
fin.close();
}
if (a == 11)
{
string path = "addfile.txt";

ifstream fin;
fin.open(path);

char str1[100];
char str2[100];
char str3[100];
char str4[100];
char str5[100];
char str6[100];
char str7[100];
char str8[100];
char str9[100];
char str10[100];
char str11[100];
while (!fin.eof())
{
fin.getline(str1, 100);
fin.getline(str2, 100);
fin.getline(str3, 100);
fin.getline(str4, 100);
fin.getline(str5, 100);
fin.getline(str6, 100);
fin.getline(str7, 100);
fin.getline(str8, 100);
fin.getline(str9, 100);
fin.getline(str10, 100);
fin.getline(str11, 100);
cout << str11 << endl;
break;
}
fin.close();
}
if (a == 12)
{
string path = "addfile.txt";

ifstream fin;
fin.open(path);

char str1[100];
char str2[100];
char str3[100];
char str4[100];
char str5[100];
char str6[100];
char str7[100];
char str8[100];
char str9[100];
char str10[100];
char str11[100];
char str12[100];
while (!fin.eof())
{
fin.getline(str1, 100);
fin.getline(str2, 100);
fin.getline(str3, 100);
fin.getline(str4, 100);
fin.getline(str5, 100);
fin.getline(str6, 100);
fin.getline(str7, 100);
fin.getline(str8, 100);
fin.getline(str9, 100);
fin.getline(str10, 100);
fin.getline(str11, 100);
fin.getline(str12, 100);
cout << str12 << endl;
break;
}
fin.close();
}
if (a == 13)
{
string path = "addfile.txt";

ifstream fin;
fin.open(path);

char str1[100];
char str2[100];
char str3[100];
char str4[100];
char str5[100];
char str6[100];
char str7[100];
char str8[100];
char str9[100];
char str10[100];
char str11[100];
char str12[100];
char str13[100];
while (!fin.eof())
{
fin.getline(str1, 100);
fin.getline(str2, 100);
fin.getline(str3, 100);
fin.getline(str4, 100);
fin.getline(str5, 100);
fin.getline(str6, 100);
fin.getline(str7, 100);
fin.getline(str8, 100);
fin.getline(str9, 100);
fin.getline(str10, 100);
fin.getline(str11, 100);
fin.getline(str12, 100);
fin.getline(str13, 100);
cout << str13 << endl;
break;
}
fin.close();
}
if (a == 14)
{
string path = "addfile.txt";

ifstream fin;
fin.open(path);

char str1[100];
char str2[100];
char str3[100];
char str4[100];
char str5[100];
char str6[100];
char str7[100];
char str8[100];
char str9[100];
char str10[100];
char str11[100];
char str12[100];
char str13[100];
char str14[100];
while (!fin.eof())
{
fin.getline(str1, 100);
fin.getline(str2, 100);
fin.getline(str3, 100);
fin.getline(str4, 100);
fin.getline(str5, 100);
fin.getline(str6, 100);
fin.getline(str7, 100);
fin.getline(str8, 100);
fin.getline(str9, 100);
fin.getline(str10, 100);
fin.getline(str11, 100);
fin.getline(str12, 100);
fin.getline(str13, 100);
fin.getline(str14, 100);
cout << str14 << endl;
break;
}
fin.close();
}

if (a == 15)
{
string path = "addfile.txt";

ifstream fin;
fin.open(path);

char str1[100];
char str2[100];
char str3[100];
char str4[100];
char str5[100];
char str6[100];
char str7[100];
char str8[100];
char str9[100];
char str10[100];
char str11[100];
char str12[100];
char str13[100];
char str14[100];
char str15[100];
while (!fin.eof())
{
fin.getline(str1, 100);
fin.getline(str2, 100);
fin.getline(str3, 100);
fin.getline(str4, 100);
fin.getline(str5, 100);
fin.getline(str6, 100);
fin.getline(str7, 100);
fin.getline(str8, 100);
fin.getline(str9, 100);
fin.getline(str10, 100);
fin.getline(str11, 100);
fin.getline(str12, 100);
fin.getline(str13, 100);
fin.getline(str14, 100);
fin.getline(str15, 100);
cout << str15 << endl;
break;
}
fin.close();
}
if (a == 16)
{
string path = "addfile.txt";

ifstream fin;
fin.open(path);

char str1[100];
char str2[100];
char str3[100];
char str4[100];
char str5[100];
char str6[100];
char str7[100];
char str8[100];
char str9[100];
char str10[100];
char str11[100];
char str12[100];
char str13[100];
char str14[100];
char str15[100];
char str16[100];
while (!fin.eof())
{
fin.getline(str1, 100);
fin.getline(str2, 100);
fin.getline(str3, 100);
fin.getline(str4, 100);
fin.getline(str5, 100);
fin.getline(str6, 100);
fin.getline(str7, 100);
fin.getline(str8, 100);
fin.getline(str9, 100);
fin.getline(str10, 100);
fin.getline(str11, 100);
fin.getline(str12, 100);
fin.getline(str13, 100);
fin.getline(str14, 100);
fin.getline(str15, 100);
fin.getline(str16, 100);
cout << str16 << endl;
break;
}
fin.close();
}
if (a == 17)
{
string path = "addfile.txt";

ifstream fin;
fin.open(path);

char str1[100];
char str2[100];
char str3[100];
char str4[100];
char str5[100];
char str6[100];
char str7[100];
char str8[100];
char str9[100];
char str10[100];
char str11[100];
char str12[100];
char str13[100];
char str14[100];
char str15[100];
char str16[100];
char str17[100];
while (!fin.eof())
{
fin.getline(str1, 100);
fin.getline(str2, 100);
fin.getline(str3, 100);
fin.getline(str4, 100);
fin.getline(str5, 100);
fin.getline(str6, 100);
fin.getline(str7, 100);
fin.getline(str8, 100);
fin.getline(str9, 100);
fin.getline(str10, 100);
fin.getline(str11, 100);
fin.getline(str12, 100);
fin.getline(str13, 100);
fin.getline(str14, 100);
fin.getline(str15, 100);
fin.getline(str16, 100);
fin.getline(str17, 100);
cout << str17 << endl;
break;
}
fin.close();
}
if (a == 18)
{
string path = "addfile.txt";

ifstream fin;
fin.open(path);

char str1[100];
char str2[100];
char str3[100];
char str4[100];
char str5[100];
char str6[100];
char str7[100];
char str8[100];
char str9[100];
char str10[100];
char str11[100];
char str12[100];
char str13[100];
char str14[100];
char str15[100];
char str16[100];
char str17[100];
char str18[100];
while (!fin.eof())
{
fin.getline(str1, 100);
fin.getline(str2, 100);
fin.getline(str3, 100);
fin.getline(str4, 100);
fin.getline(str5, 100);
fin.getline(str6, 100);
fin.getline(str7, 100);
fin.getline(str8, 100);
fin.getline(str9, 100);
fin.getline(str10, 100);
fin.getline(str11, 100);
fin.getline(str12, 100);
fin.getline(str13, 100);
fin.getline(str14, 100);
fin.getline(str15, 100);
fin.getline(str16, 100);
fin.getline(str17, 100);
fin.getline(str18, 100);
cout << str18 << endl;
break;
}
fin.close();
}
if (a == 19)
{
string path = "addfile.txt";

ifstream fin;
fin.open(path);

char str1[100];
char str2[100];
char str3[100];
char str4[100];
char str5[100];
char str6[100];
char str7[100];
char str8[100];
char str9[100];
char str10[100];
char str11[100];
char str12[100];
char str13[100];
char str14[100];
char str15[100];
char str16[100];
char str17[100];
char str18[100];
char str19[100];
while (!fin.eof())
{
fin.getline(str1, 100);
fin.getline(str2, 100);
fin.getline(str3, 100);
fin.getline(str4, 100);
fin.getline(str5, 100);
fin.getline(str6, 100);
fin.getline(str7, 100);
fin.getline(str8, 100);
fin.getline(str9, 100);
fin.getline(str10, 100);
fin.getline(str11, 100);
fin.getline(str12, 100);
fin.getline(str13, 100);
fin.getline(str14, 100);
fin.getline(str15, 100);
fin.getline(str16, 100);
fin.getline(str17, 100);
fin.getline(str18, 100);
fin.getline(str19, 100);
cout << str19 << endl;
break;
}
fin.close();
}
if (a == 20)
{
string path = "addfile.txt";

ifstream fin;
fin.open(path);

char str1[100];
char str2[100];
char str3[100];
char str4[100];
char str5[100];
char str6[100];
char str7[100];
char str8[100];
char str9[100];
char str10[100];
char str11[100];
char str12[100];
char str13[100];
char str14[100];
char str15[100];
char str16[100];
char str17[100];
char str18[100];
char str19[100];
char str20[100];
while (!fin.eof())
{
fin.getline(str1, 100);
fin.getline(str2, 100);
fin.getline(str3, 100);
fin.getline(str4, 100);
fin.getline(str5, 100);
fin.getline(str6, 100);
fin.getline(str7, 100);
fin.getline(str8, 100);
fin.getline(str9, 100);
fin.getline(str10, 100);
fin.getline(str11, 100);
fin.getline(str12, 100);
fin.getline(str13, 100);
fin.getline(str14, 100);
fin.getline(str15, 100);
fin.getline(str16, 100);
fin.getline(str17, 100);
fin.getline(str18, 100);
fin.getline(str19, 100);
fin.getline(str20, 100);
cout << str20 << endl;
break;
}
fin.close();
}
_gettch();
return 0;

}