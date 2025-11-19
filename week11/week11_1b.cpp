// week11_1b.cpp 挑戰題 二合一聰明的方法 用到沒教過的 HashMap or HashSet
// LeetCode 2154. Keep Multiplying Found Values by Two
// 每次乘2倍 把沒有出線的數字 return 出來
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> numSet; // HashSet 可以快速找到「有沒有這個數」
        for(int num : nums)numSet.insert(num); // C++的進階迴圈
        // 請問 original 有沒有在 numSet 裡? 有的話 繼續一直做
        while( numSet.find(original) != numSet.end()){ // 沒有「沒有找到」
            original = original * 2;
        }
        return original;
    }
};
