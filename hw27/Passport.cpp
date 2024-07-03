#include "Passport.h"

Passport::Passport()
{
    series = "Empty";
    number = "Empty";
    lastName = "Empty";
    firstName = "Empty";
    middleName = "Empty";
    birthday = Date();
    birthplace = "Empty";
    issueDate = birthday + 14L;
    issuesBy = "Empty";
    registration = "Empty";
}

Passport::Passport(string series, string number, string lastName, string firstName, string middleName, Date birthday, string birthplace, Date issueDate, string issuesBy, string registration)
{
    this->series = series;
    this->number = number;
    this->lastName = lastName;
    this->firstName = firstName;
    this->middleName = middleName;
    this->birthday = birthday;
    this->birthplace = birthplace;
    if (issueDate > birthday)this->issueDate = issueDate;
    else this->issueDate = Date();
    this->issuesBy = issuesBy;
    this->registration = registration;
}

void Passport::setLastName(string lastName)
{
    this->lastName = lastName;
}

string Passport::getSeries() const
{
    return series;
}

string Passport::getNumber() const
{
    return number;
}

string Passport::getLastName() const
{
    return lastName;
}

string Passport::getFirstName() const
{
    return firstName;
}

string Passport::getMiddleName() const
{
    return middleName;
}

Date Passport::getBirthDate() const
{
    return birthday;
}

string Passport::getBirthPlace() const
{
    return birthplace;
}

Date Passport::getIssueDate() const
{
    return issueDate;
}

string Passport::getIssuedBy() const
{
    return issuesBy;
}

string Passport::getRegistration() const
{
    return registration;
}

void Passport::showInfo() const
{
    cout << "Passport Information:" << endl;
    cout << "Series: " << series << endl;
    cout << "Number: " << number << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Middle Name: " << middleName << endl;
    cout << "Birth Date: " << birthday << endl;
    cout << "Birth Place: " << birthplace << endl;
    cout << "Issue Date: " << issueDate << endl;
    cout << "Issued By: " << issuesBy << endl;
    cout << "Registration: " << registration << endl;
}
