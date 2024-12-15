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

void print_deq(const auto & str,const auto & deq) {

    for (cout<<str<<": {";const auto & i:deq)
        {
            cout<<i<<" ";
        }
    cout<<"}Size: "<<deq.size()<<"\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    deque deq{1,2,3,4};
    print_deq("before",deq);
    deq.clear();
    print_deq("after",deq);
    return 0;
}