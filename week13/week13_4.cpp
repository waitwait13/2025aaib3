// week13_4.cpp 聖誕節倒數寫程式 Advent of Code 2025
// 第1題 --- Day 1: Secret Entrance --- 神秘的入口
int main() {
    char c; // 每一行, 有一個英文
    int d; // 有一個數字
    int now = 50; // 現在的可度是在50
    int ans = 0; // 刻度有指到幾次0
    while(cin >> c >> d){
        //if(c=='L') cout << "往左轉" << d << "格\n";
        //if(c=='R') cout << "往左轉" << d << "格\n";

        if(c=='L') now -= d; // 往左轉, 減掉他
        if(c=='R') now += d; // 往右轉, 加上他

        now = (now % 100 + 100) % 100; // 取餘數 + 100 再取餘數 得到0-99間
        if(now==0) ans++; // 刻度有指到幾次0
        //cout << "現在到達格子刻度" << now << "\n";
    }
    cout << "答案是:" << ans; // 每個人會有自己的答案
}
//先把題目的 Input 貼到右下角
/*
L68
L30
R48
L5
R60
L55
L1
L99
R14
L82
*/
