// week01-1.cpp LeetCode �ǲ߭p�e �j�����w �b haystack ��� needle
// 28. Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        // �n�ΰj��, ��Ҧ��i�઺��m, ����L�@��
        // ex. sadbutsad �����L �n�� sad
        // i:0 sad ��haystack �˫e��N�Ӧr��
        //     sad
        // i:1 sad
        //     abd
        // i:2 sad ...
        //     dbu
        int H = haystack.length(), N = needle.length();
        for(int i = 0; i <= H - N; i++){
            if( haystack.substr(i, N) == needle) return i;
            // �q i �}�l, �ťX N �Ӧr�� �u���M�ۦP�v ��쵪��!!!
        }
        return -1;// �S����쵪��, �n�^�� -1 �N����
    }
};
