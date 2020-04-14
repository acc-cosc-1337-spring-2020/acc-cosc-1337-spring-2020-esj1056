//temperature_data.h
#include "temperature.h"
#include <fstream>
#include <vector>
#include <string>
#ifndef TEMPERATURE_DATA_H
#define TEMPERATURE_DATA_H

class Temperature_Data {
public:
	void save_temps(std::vector<Temperature>& ts);
	std::vector<Temperature> get_temps()const;
private:
	const std::string file_name{ "temperature.dat" };
};

#endif // Temp data h