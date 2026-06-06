#include <unordered_map>
#include <string>

class Solution {
public:
    int romanToInt(std::string s) {
        std::unordered_map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int result = 0;

        for (int i = 0; i < s.size(); i++) {
            if (roman[s[i+1]] > roman[s[i]] && i + 1 < s.size()) {
                result = result - roman[s[i]];
            } else {
                result += roman[s[i]];
            }
        }
        return result;
    }
};