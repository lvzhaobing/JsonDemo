#include <iostream>
#include <iomanip>
#include <string>
#include "nlohmann/json.hpp"
#include "data_model/person.h"

using json = nlohmann::json;

int main()
{
    Person p = {"张三", 20};
    
    //serialize
    json j = p;
    std::cout << j << std::endl;

    //change property
    j["height"] = 180.0f;
    
    //deserialize
    p = j.get<Person>();
    std::cout << "height: "<< p.getHeight() << std::endl;
    
}