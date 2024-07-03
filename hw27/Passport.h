#pragma once
#include <string>
#include "Date.h"

class Passport
{
protected:
	string series;
	string number;
	string lastName;
	string firstName;
	Date birthday;
	string birthplace;
	Date issueDate;
	string issuesBy;
private:
	string middleName;
	string registration;
public:
	Passport();
	Passport(string series, string number, string lastName, string firstName, string middleName, Date birthday, string birthplace, Date issueDate, string issuesBy, string registration);

	void setLastName(string lastName);

	string getSeries() const;
	string getNumber() const;
	string getLastName() const;
	string getFirstName() const;
	string getMiddleName() const;
	Date getBirthDate() const;
	string getBirthPlace() const;
	Date getIssueDate() const;
	string getIssuedBy() const;
	string getRegistration() const;

	void showInfo()const;
};

