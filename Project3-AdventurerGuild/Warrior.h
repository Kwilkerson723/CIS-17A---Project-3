#pragma once
#include <string>
class Warrior
{
private:
	std::string _name;
public:
	Warrior(std::string name);
	~Warrior();

	std::string GetName() const { return _name; }
};

