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
    deque<string> deq{"abc"};
    deq.emplace_front("def");
    string srt = "hzj";
    deq.emplace_front(srt);
    for (cout<<"all deq: ";const auto & i:deq)
        {
            cout<<i<<" ";
        }
    cout<<"\n";
    return 0;
}