// week03-4a.cpp ��1�ؼg�k,���\!
// LeetCode �ǲ߭p�e��6�D 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans; // �������뵪��, �b��^�h nums
        for(int i = 0; i<nums.size();i++){ // �������@��
            if(nums[i] != 0) ans.push_back(nums[i]);
        } // ���u���O0���ơv�����ƥ��B��쵪�׫᭱
        for(int i=0; i<nums.size();i++){ // �A���@��
            if(i<ans.size()) nums[i] = ans[i]; // ����ƥ�������
            else nums[i] = 0; // ���� ��0����
        }
    }
};
