class Solution {
public:
    bool isAnagram(string s, string t) {
        const int lower_nums = 26;

        if (s.length() != t.length()) {
            return false;
        }
        
        int map_s[lower_nums] = {0};
        int map_t[lower_nums] = {0};
        
        int i = 0;
        for (i = 0; i < len; i++) {
            map_s[s[i]-'a']++;
            map_t[t[i]-'a']++;
        }
        
        for (int j = 0; j < lower_nums; j++) {
            if (map_s[j] != map_t[j]) {
                return false;
            }
        }
        
        return true;
    }
};

