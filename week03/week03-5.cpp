// week03-5.cpp
// LeetCode �ǲ߭p�e ��9�D 1502. Can Make Arithmetic Progression From Sequence
// ��Ʀr�u�p�ƨ�j�v�O���O�u�۾F���t�@�˪��Ʀr�v
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end()); // ��}�C �p��j �Ʀn

        int d = arr[1] - arr[0]; // ��Ʈtd
        for(int i = 1 ; i<arr.size();i++){ // �j��q1�}�l �]�n���e�@��
            if(arr[i] - arr[i-1] != d) return false;
        } // �p�G�u�ᶵ-�e���v���O d ���� �N����
        return true;
    }

};
