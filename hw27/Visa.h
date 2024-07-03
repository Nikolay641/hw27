#pragma once
#include <string>
#include "Date.h"

class Visa
{
	string country;
	Date startDate;
	Date endDate;

public:
	Visa();
	Visa(string country, Date startDate, Date endDate);

	void setCountry(string country);
	void setStartDate(Date startDate);
	void setEndDate(Date endDate);

	string getCountry()const;
	Date getStartDate()const;
	Date getEndDate()const;

	void showInfo()const;
};

