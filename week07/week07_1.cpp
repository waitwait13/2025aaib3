/// week07-1a.cpp �G�X�@
/// TAICA NYCU ��߶�����q�j�ǹq���t �����Ҳ�6�D
/// Input: 1-9 ���Ʀr Output: ¶��骺���
/// ex. Input: 3
/// 3 3 3 3 3
/// 3 2 2 2 3
/// 3 2 1 2 3
/// 3 2 2 2 3
/// 3 3 3 3 3 �`�@5�h��
/// Input 2 ��3�h��, Input 3 ��5�h��, Input 4 ��7�h��,Input 5 ��9�h��
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; ///Step01: Input

    for(int i=1; i<2*n; i++){ /// Step03: for�j��, �Ӽh
        for(int j=1; j<2*n; j++){ /// �ĴX��
            if(j>1) cout << " "; /// Step05: �����Y +���[ +���[ +���[ +���[
            cout << n; /// ���æL�Ʀrn(�N�|�)
        }
        cout << "�{�b�O��1��, i:" << i; /// Step04: �Ӽh�N�[(�N�|�)
        cout << endl; /// Step02: Output, ����
    }
}
