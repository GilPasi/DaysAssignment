/* Assignment: 5
Authors: Lior Poterman, ID: 315368035
		 Gil Pasi,      ID: 206500936
*/
#include "Date.h"

#include <iostream>
using std :: ostream;
using std :: istream;


    //Define consts for tops and bottoms of day, month and year
   // static int const BOT_DAY = 1, TOP_DAY = 30, BOT_MON = 1, TOP_MON = 30, BOT_YR = 1970, TOP_YR = 2099;

Date( int day,  int month,  int year ){

}//Empty and parametric
//Date(const int day = BOT_DAY, const int month = BOT_MON, const int year = BOT_YR);//Empty and parametric



    Date (const Date &other);//Copy
    //Ther is no need for a destructor since all fields are staticly allocated


    //Operators:
    friend ostream& operator<<(ostream& out, const Date d);
    friend istream& operator>>(istream in, const Date d);
    Date operator++();
    Date operator++(int);
    Date operator+=(int);
    bool operator>(Date otr);
    bool operator<(Date otr);
    bool operator==(Date otr);
