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
    deque<char> ch;
    auto print_deque = [&]() {
        for (const auto & i:ch)
            {
                cout<<i;
            }
        cout<<"\n";
    };
    ch.assign(5,'a');
    print_deque();
    const string extra(6,'b');
    ch.assign(extra.begin(),extra.end());
    print_deque();
    ch.assign({'C','+','+','1','1'});
    print_deque();
    return 0;
}