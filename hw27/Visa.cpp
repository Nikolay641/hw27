#include "Visa.h"

Visa::Visa()
{
    country = "Empty";
    startDate = Date();
    endDate = startDate + 90;
}

Visa::Visa(string country, Date startDate, Date endDate)
{
    this->country = country;
    this->startDate = startDate;
    if (endDate > startDate) this->endDate = endDate;
    else this->endDate = Date();
}

void Visa::setCountry(string country)
{
    this->country = country;
}

void Visa::setStartDate(Date startDate)
{
    this->startDate = startDate;
}

void Visa::setEndDate(Date endDate)
{
    this->endDate = endDate;
}

string Visa::getCountry() const
{
    return country;
}

Date Visa::getStartDate() const
{
    return startDate;
}

Date Visa::getEndDate() const
{
    return endDate;
}

void Visa::showInfo() const
{
    cout << "Country: " << country << endl;
    cout << "From: " << startDate << " To: " << endDate << endl;
}
