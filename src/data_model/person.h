#ifndef PERSON_H
#define PERSON_H

#include <map>
#include <vector>
#include <string>
#include "nlohmann/json.hpp"

struct Person
{
    std::string name;
    int age;
    float height;
    float weight;
    std::map<std::string, std::string> propertys;
    std::vector<std::string> friends;
    nlohmann::json custom;

    Person(std::string _name = "",
        int _age = 0,
        float _height = 0,
        float _weight = 0,
        std::map<std::string, std::string> _propertys = std::map<std::string, std::string>(),
        std::vector<std::string> _friends = std::vector<std::string>(),
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