class Solution {
public:
    bool isCircularSentence(string sentence) {
        bool flag = true;

        if(sentence[0] != sentence[sentence.length()-1]) {
            flag = false;
        }

        for(int i = 0; i < sentence.length(); i++) {
            if(sentence[i]==' ') {
                if(sentence[i-1]!=sentence[i+1]) {
                    flag = false;
                }
            }
        }

        return flag;
    }
};