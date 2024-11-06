/* BRUTE FORCE APPROACH --> Time Complexity = O(n^2) --> Will give TLE because of the Constraints

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> ans(nums.size(), 1);

        for(int i = 0; i < nums.size(); i++) {
            for(int j = 0; j < nums.size(); j++) {
                if(i != j) {
                    ans[i] *= nums[j];
                }
            }
        }
        return ans;
    }
};

*/


//Optimized Code --> Time Complexity = O(n) --> Space Complexity = O(1)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int n = nums.size();
      vector<int> ans(n,1);

      for(int i = 1; i < n; i++) {
        ans[i] = ans[i-1] * nums[i-1];
      }

      int suffix = 1;

      for(int i = n - 2; i >= 0; i--) {
        suffix *= nums[i+1];
        ans[i] *= suffix;
      }

      return ans;
    }
};