#pragma once
#include <vector>
#include "Passport.h"
#include "Visa.h"

class ForeignPassport : public Passport
{
	vector<Visa> visas;
public:
	ForeignPassport();
	ForeignPassport(string series, string number, string lastName, string firstName, Date birthday, string birthplace, Date issueDate, string issuesBy);


	void addVisa(Visa visa);
	void showInfo()const;
};

