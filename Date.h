/* Assignment: 5
Authors: Lior Poterman, ID: 315368035
		 Gil Pasi,      ID: 206500936
*/


#ifndef ASSIGNMENT_6_DATE_H
#define ASSIGNMENT_6_DATE_H

#include <iostream>
using std :: ostream;
using std :: istream;

class Date {
    int day;
    int month;
    int year;



    //Constructors:

    Date( int day,  int month,  int year);//Empty and parametric
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

};

#endif //ASSIGNMENT_6_DATE_H
