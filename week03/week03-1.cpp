/// week03-1.cpp
/// C++ �}�C vector<int>
#include <iostream> /// cin count �n�Ϊ�
#include <vector> /// ���Ѫ��D�D �}�C vector
using namespace std; /// ���n�ѤF �ϥΩR�W�Ŷ� std
int main()
{
    cout << "�п�J 4 �ӼƦr: ";
    vector<int> a; /// �u���Y�ۦp�v���}�C
    int now;
    for(int i=0;i<4;i++){
        cin >> now; /// �{�b��J1�ӼƦr
        a.push_back(now); ///����a���᭱
    }
    for(int i=0; i<a.size(); i++){ /// �̷Ӱ}�C���j�psize()�ӦL
        cout << a[i] << ' '; /// �Ʀr�᭱���Ů�
    }
    cout << "�{�b�{���X�̡A�S���J�F99 98 ��ӼƦr, ���G�O?\n";

    a.push_back(99); ///����a���̫᭱
    a.push_back(88); ///����a���̫᭱
    for(int i=0;i<a.size();i++){ /// �̷Ӱ}�C���j�psize()�ӦL
        cout << a[i] << ' '; /// �Ʀr�᭱���Ů�
    }
}
