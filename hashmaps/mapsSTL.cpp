#include <iostream>
#include <map>
#include <vector>

int main() {
    std::map<std::string, std::vector<int>> myMap;

    myMap["key1"].push_back(1);
    myMap["key1"].push_back(2); // This is an internal collision
    myMap["key1"].push_back(3); // This is an internal collision
    myMap["key1"].push_back(4); // This is an internal collision
    myMap["key1"].push_back(5); // This is an internal collision

    // Print the values associated with "key1"
    for (const int& value : myMap["key1"]) {
        std::cout << value << " ";
    }

    return 0;
}
