/* BRUTE FORCE APPROACH --> Time Complexity = O(n^2) --> Will give Time Limit Exceeded Error because of the contraints in the questions.

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;

        for(int i = 0; i < height.size(); i++) {
            for(int j = i + 1; j < height.size(); j++) {
                int w = j - i;
                int ht = min(height[i], height[j]);
                int currWater = w * ht;

                maxWater = max(maxWater, currWater);
            }
        }
        
        return maxWater;
    }
};

*/

// 2 Pointer Approach --> Time Complexity = O(n)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int lp = 0, rp = n-1, ans = 0, maxWater = 0;

        while(lp < rp) {
            int w = rp - lp;
            int ht = min(height[lp], height[rp]);
            int currWater = w * ht;
            maxWater = max(maxWater, currWater);

            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxWater;
    }
};