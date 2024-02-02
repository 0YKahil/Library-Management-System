#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;


int main() {
    unordered_map<int, string> map = {};
    map.insert({3, "test"});
    cout << map[3] << endl;
    return 0;
}