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

namespace stq {
    void println(const auto & str,const auto & deq) {
        bool first = true;
        for (cout<<str<<": {";const auto & i:deq)
            {
                cout<<(first?first=false,"":",")<<i;
            }
        cout<<"}\n";
    }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    deque deq1{1,2,3,4};
    stq::println("1. ",deq1);
    auto pos = deq1.begin();
    deq1.insert(pos,4);
    stq::println("2. ",deq1);
    deq1.insert(pos,2,5);
    stq::println("3. ",deq1);
    pos = deq1.begin();
    deque deq2{7,7};
    deq1.insert(pos,deq2.begin(),deq2.end());
    stq::println("4. ",deq1);
    pos = deq1.begin();
    int arr[]= {8,8,8};
    deq1.insert(pos,arr,arr+size(arr));
    stq::println("5. ",deq1);
    deq1.insert(deq1.end(),{10,10,10});
    stq::println("6. ",deq1);
    return 0;
}