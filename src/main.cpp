#include <iostream>
#include <iomanip>
#include <map>
#include <vector>
#include <string>
#include "nlohmann/json.hpp"
#include "data_model/person.h"
#include "data_model/payload_info.h"

using namespace std;
using json = nlohmann::json;

int main()
{
    Person p = {"Jack", 20, 180, 65, {{"Sex", "Boy"}, {"Favorite", "Coding"}}, {"Bob", "Rose", "Tom"}, 123};

    //serialize
    json j = p;
    cout << j << endl;

    //change property
    j["height"] = 160.0f;


    auto jj = json::parse("{\"value\": 123, \"valid\": true, \"unit\": \"\", \"relative\": false, \"time\": 0, \"extension\": null}");
    //deserialize
    PayloadInfo payload = jj.get<PayloadInfo>();
    cout << (payload.value == 123 ? "TRUE" : "FALSE") << endl;
}