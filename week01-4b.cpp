/// week01-4b.cpp 使用 C++語言寫
#include <stdio.h> /// 使用C++語言外掛
using namespace std; /// 使用C++語言的命名空間
int main()
{
    int a, b;
    cin >> a >> b; /// C++語言 讀資料
    int ans = 0;
    for(int i=a; i<=b; i++){
        if(i%3==0) ans += i;
    }
    cout << ans; /// C++語言 印資料
}
