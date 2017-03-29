#include "Guild.h"

Guild::Guild(std::string name) : _name(name)
{
}

Guild::~Guild()
{
}

void Guild::AddMage(std::string name)
{
	auto magePtr = std::make_shared<Mage>(name);
	_mages.push_back(magePtr);
}

void Guild::AddPaladin(std::string name)
{
	auto paladin = std::make_shared<Warrior>(name);
	_warriors.push_back(paladin);
}

void Guild::AddRanger(std::string name)
{
	auto ranger = std::make_shared<Warrior>(name);
	_warriors.push_back(ranger);
}

void Guild::AddWarrior(std::string name)
{
	auto warrior = std::make_shared<Warrior>(name);
	_warriors.push_back(warrior);
}
