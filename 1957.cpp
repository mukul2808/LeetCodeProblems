class Solution {
public:
    string makeFancyString(string s) {
        string newStr = "";
        int n = s.size(), count = 1;
        newStr.push_back(s[0]);

        for(int i = 1; i < n; i++) {
            if(s[i] == newStr.back()) {
                count++;
                if(count < 3) {
                    newStr.push_back(s[i]);
                }
            } else {
                count = 1;
                newStr.push_back(s[i]);
            }
        }
        return newStr;
    }
};