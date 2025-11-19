// week11_1a.cpp 挑戰題(笨方法)
// LeetCode 2154. Keep Multiplying Found Values by Two
// 每次乘2倍 把沒有出線的數字 return 出來
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while(1){ // 用while 迴圈一直做
            int found = 0; // 一開始沒找到
            for(int i=0; i<nums.size(); i++){ // 找 original 有沒有在nums 裡
                if(nums[i] == original) found = 1; // 找到了
            }
            if(found==0) break; // 失敗, 離開迴圈
            else original = original * 2; // 有找到 繼續 乘2倍
        }
        return original;
    }
};
