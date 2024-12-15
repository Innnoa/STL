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

namespace  stq {
    void println(const auto & str,const auto & deq) {
        cout<<str<<": {";
        for (bool first = true;const auto & i:deq)
            {
                cout<<(first?first=false,"":",")<<i;
            }
        cout<<"}\n";
    }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    deque deq{1,2,3};
    stq::println("1. ",deq);
    int i=1;
    cout<<"pop_back: "<<"\n";
    while (!deq.empty())
        {
            ++i;
            cout<<i<<". ";
            stq::println("",deq);
            deq.pop_back();
        }
    return 0;
}