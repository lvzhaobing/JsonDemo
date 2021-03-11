#include <iostream>
#include <iomanip>
#include <string>
#include "nlohmann/json.hpp"
#include "data_model/person.h"

using json = nlohmann::json;

int main()
{
    Person p = {"张三", 20};
    json j = p;

    std::cout << j << std::endl;
    
}