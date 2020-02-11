#include "decision.h"
//Write the function code that returns the product of hours and hourly_rate.

double gross_pay(double hours, double hourly_rate)
{
	double result;
	if (hours <= 40) {
		result = hours * hourly_rate;
	}
	else if (hours > 40) {
		result = 40 * hourly_rate + 1.5 * (hours - 40) *hourly_rate;
	}

	return result;
}
