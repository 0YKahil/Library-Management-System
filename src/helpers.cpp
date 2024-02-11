#include <string>
#include <iostream>
#include <unordered_map>

using namespace std;

/*
 * convert string to uppercase 
*/
string to_upper(string &in) {
  for (int i = 0; i < in.length(); i++)
    in[i] = in[i] - 'a' + 'A';
  return in;
}

/*
* returns true if s2 contains all the letters in s1
*/
bool containsLetters(string s1, string s2) {
    // chars1 and 2 will contain the characters in s1 and s2 as the key 
    // and the amount of times they appear as the value (starting at 0)
    unordered_map<char, int> chars1 = {};
    unordered_map<char, int> chars2 = {};

    // if char is in the map, increment its count by one, otherwise add it to the map
    for (int i = 0; i < s1.length(); i++) {
        if (chars1.find(s1[i]) != chars1.end()) {
            chars1[s1[i]] += 1;
        }
        chars1.insert({s1[i], 0});
    }
    for (int i = 0; i < s2.length(); i++) {
        if (chars2.find(s2[i]) != chars2.end()) {
            chars2[s2[i]] += 1;
        }
        chars2.insert({s2[i], 0});
    }

    for (auto it = chars1.begin(); it != chars1.end(); it++) {
        if (chars2.find(it->first) != chars2.end()) {
            if (chars2[it->first] < chars1[it->first]) {
                return false;
            }
        } else {
            return false;
        }
    }

    return true;
}
