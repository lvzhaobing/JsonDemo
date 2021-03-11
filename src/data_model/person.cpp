#include "person.h"

Person::Person()
{
    this->name = "";
    this->age = 0;
    this->height = 0;
    this->weight = 0;
}

Person::Person(std::string name, int age, float height, float weight)
{
    this->name = name;
    this->age = age;
    this->height = height;
    this->weight = weight;
}

std::string Person::getName() const
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