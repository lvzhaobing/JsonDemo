#include "person.h"

Person::Person()
{
    this->name = "";
    this->age = 0;
    this->height = 0;
    this->weight = 0;
    this->propertys = map<string, string>();
    this->friends = vector<string>();
    this->value = nlohmann::json();
}

Person::Person(string name, int age, float height, float weight, map<string, string> propertys, vector<string> friends, nlohmann::json value)

{
    this->name = name;
    this->age = age;
    this->height = height;
    this->weight = weight;
    this->propertys = propertys;
    this->friends = friends;
    this->value = value;
}

string Person::getName() const
{
    return name;
}

int Person::getAge() const
{
    return age;
}

float Person::getHeight() const
{
    return height;
}

float Person::getWeight() const
{
    return weight;
}

map<string, string> Person::getPropertys()
{
    return propertys;
}

vector<string> Person::getFriends()
{
    return friends;
}

nlohmann::json Person::getValue()
{
    return value;
}