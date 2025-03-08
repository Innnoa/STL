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

void print(const auto str,const auto &deq) {
    for (cout<<str<<": ";const auto & i:deq)
        {
            cout<<i<<" ";
        }
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    deque deq{1,2,3,4};
    print("1. ",deq);
    deq.resize(5);
    print("2. ",deq);
    deq.resize(2);
    print("3. ",deq);
    deq.resize(7,2);
    print("4. ",deq);
    return 0;
}