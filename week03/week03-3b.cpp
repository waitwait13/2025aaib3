// week03-3b.cpp
// LeetCode �ǲ߭p�e 1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; // 1���W�����,�N��M�ܦ��u����ơv
        // ����g int ans = 0; �]��0 ���W�����,�|�ܦ�0
        for(int i=0; i<nums.size();i++){
            if(nums[i]>0) ans *= +1;
            if(nums[i]<0) ans *= -1;
            if(nums[i]==0) ans *= 0;
        } // �Ʀr�V���V�j, �N�z���F �u�୼ +1, -1, 0
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
