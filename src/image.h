#pragma once

#include <string>
typedef std::basic_string<char> string;
class image
{
public:
	void setName(string name);
	string getName();
private:
	string ImageName;

};
