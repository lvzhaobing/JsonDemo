#ifndef PERSON_H
#define PERSON_H

#include <map>
#include <vector>
#include <string>
#include "nlohmann/json.hpp"

using namespace std;

struct Person
{
    string name;
    int age;
    float height;
    float weight;
    map<string, string> propertys;
    vector<string> friends;
    nlohmann::json custom;

    Person(string _name,
     int _age = 0,
     float _height = 0,
     float _weight = 0,
     map<string, string> _propertys = map<string, string>(),
     vector<string> _friends = vector<string>(),
     nlohmann::json _custom = nullptr)
    {
        name = _name;
        age = _age;
        height = _height;
        weight = _weight;
        propertys = _propertys;
        friends = _friends;
        custom = _custom;
    }

    NLOHMANN_DEFINE_TYPE_INTRUSIVE(Person, name, age, height, weight, propertys, friends, custom);
};

#endif //PERSON_H