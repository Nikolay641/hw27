#include <iostream>
#include "Visa.h"
#include "Date.h"
#include "Passport.h"
#include "ForeignPassport.h"

int main()
{
    ForeignPassport passport("ABC", "123456", "Doe", "John", Date(1990, 5, 15), "New York", Date(2020, 10, 20), "In some city"
    );

    Visa visa1("USA", Date(2021, 1, 1), Date(2021, 12, 31));
    Visa visa2("UK", Date(2022, 2, 1), Date(2022, 12, 31));
    passport.addVisa(visa1);
    passport.addVisa(visa2);

    passport.showInfo();
}