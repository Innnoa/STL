/**
 * ClassName: ${NAME}
 * package: ${PACKAGE_NAME}
 * Description:
 * @Author: innno
 * @Create: 2024/2/27 - 21:54
 * @Version: v1.0
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    deque<string> deq{"hello","world"};
    deq.push_back("fuck");
    string a = {"sick"};
    deq.push_back(move(a));
    cout<<"all letters"<<"\n";
    for (const auto & i:deq)
        {
            cout<<quoted(i)<<" ";
        }
    cout<<"\n";
    cout<<quoted(a);
    return 0;
}