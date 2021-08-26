#include <iostream>
#include <iomanip>
#include <map>
#include <vector>
#include <string>
#include "nlohmann/json.hpp"
#include "data_model/person.h"

using namespace std;
using json = nlohmann::json;

int main()
{
    Person p = {"Jack", 20, 180, 65, {{"Sex", "Boy"}, {"Favorite", "Coding"}}, {"Bob", "Rose", "Tom"}, 3.14f};

    //serialize
    json j = p;
    cout << j << endl;

    //change property
    j["height"] = 160.0f;

    //deserialize
    p = j.get<Person>();
    cout << "height: " << p.getHeight() << endl;

    auto props = p.getPropertys();
    map<string, string>::iterator iter;
    for (iter = props.begin(); iter != props.end(); iter++)
        cout << iter->first << " -> " << iter->second << endl;

    auto f = p.getFriends();
    for (int i = 0; i < f.size(); i++)
        cout << "friends: " << f[i] << endl;

    
    auto value = p.getValue();
    cout << "value: " << value << endl;

    auto valueF = p.getValue().get<float>();
    cout << "value as float: " << valueF << endl;

    auto valueD = p.getValue().get<double>();
    cout << "value as double: " << valueD << endl;
    


}