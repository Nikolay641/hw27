#include "ForeignPassport.h"

ForeignPassport::ForeignPassport()
{
}

ForeignPassport::ForeignPassport(string series, string number, string lastName, string firstName, Date birthday, string birthplace, Date issueDate, string issuesBy)
{
    this->series = series;
    this->number = number;
    this->lastName = lastName;
    this->firstName = firstName;
    this->birthday = birthday;
    this->birthplace = birthplace;
    if (issueDate > birthday)this->issueDate = issueDate;
    else this->issueDate = Date();
    this->issuesBy = issuesBy;
}


void ForeignPassport::addVisa(Visa visa)
{
    visas.push_back(visa);
}

void ForeignPassport::showInfo() const
{
    cout << "Passport Information:" << endl;
    cout << "Series: " << series << endl;
    cout << "Number: " << number << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Birth Date: " << birthday << endl;
    cout << "Birth Place: " << birthplace << endl;
    cout << "Issue Date: " << issueDate << endl;
    cout << "Issued By: " << issuesBy << endl;
    cout << "Visas:\n" << endl;
    for (auto visa : visas) {
        visa.showInfo();
        cout << endl; 
    }
}
