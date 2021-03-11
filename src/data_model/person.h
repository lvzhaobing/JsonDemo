#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "nlohmann/json.hpp"

class Person
{
private:
    std::string name;
    int age;
    float height;
    float weight;

public:
    Person();
    Person(std::string name, int age = 0, float height = 0, float weight = 0);

    std::string getName() const;
    int getAge() const;
    float getHeight() const;
    float getWeight() const;

    NLOHMANN_DEFINE_TYPE_INTRUSIVE(Person, name, age, height, weight);
};

#endif //PERSON_H