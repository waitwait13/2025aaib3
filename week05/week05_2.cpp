/// week05_2.cpp
/// �d�� stringstream
#include <iostream> /// ���F cin cout
#include <string> /// ���F�r�� string
#include <sstream> ///(�s��) string��stream���~��
using namespace std; /// ���F���g std::cin
int main()
{
    string line; /// �ǳƩ�u�@���v���r��
    getline( cin,line ); /// �@��Ū�J�@���
    cout << line << endl;

    stringstream ss(line); ///(�s��) string��stream���~��
    string word;
    while( ss >> word ){
        cout << "ssŪ��@�Ӧr: " << word << endl;
    }
}
