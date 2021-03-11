#ifndef PERSON_H
#define PERSON_H

#include <map>
#include <vector>
#include <string>
#include "nlohmann/json.hpp"

using namespace std;

class Person
{
private:
    string name;
    int age;
    float height;
    float weight;
    map<string, string> propertys;
    vector<string> friends;

public:
    Person();
    Person(string name, int age = 0, float height = 0, float weight = 0, map<string, string> propertys = map<string, string>(), vector<string> friends = vector<string>());

    string getName() const;
    int getAge() const;
    float getHeight() const;
    float getWeight() const;
    map<string, string> getPropertys();
    vector<string> getFriends();

    NLOHMANN_DEFINE_TYPE_INTRUSIVE(Person, name, age, height, weight, propertys, friends);
};

#endif //PERSON_H