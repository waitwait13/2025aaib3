// week07_2.cpp LeetCode�ǲ߭p�e Simulation ��2�D
// 657. Robot Return to Origin ���������H����
// 'U' up���W, 'D' down���U, 'L' left����, 'R'right���k
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0; // �@�}�l����m, �b(0,0)
        //for(int i=0;i<moves.length();i++){ // �ǲΪ�for ���
        //    char c = moves[i];           // ���X�r�����i�Ӧr��
        for(char c : moves){ // C++ �i���j��
            if(c=='U'){ //up���W
                y++;
            }else if(c=='D') {//down���U
                y--;
            }else if(c=='L'){//left����
                x--;
            }else if(c=='R'){//right���k
                x++;
            }
        } // ���}�j���
        if(x==0 && y==0) return true;
        else return false;
    }
};
