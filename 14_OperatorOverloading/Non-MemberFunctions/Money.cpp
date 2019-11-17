#include "Money.h"

Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars {total/100}, cents{total%100}  {}
   

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR METHOD DEFINITIONS BELOW THIS LINE----
Money operator+(const Money &lhs, const Money &rhs) {
    int tmpDollars = (lhs.dollars + rhs.dollars) + (lhs.cents + rhs.cents)/100;
    int tmpCents = (lhs.cents + rhs.cents)%100;
    Money temp(tmpDollars, tmpCents);
    return temp;
}


//----WRITE YOUR METHOD DEFINITIONS ABOVE THIS LINE----