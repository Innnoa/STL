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

void print_deque(const auto & deq) {
    for (const auto & i:deq)
        {
            cout<<i<<" ";
        }
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    deque deq{1,2,3,4,5,6,7,8,9};
    print_deque(deq);
    deq.erase(deq.begin());
    print_deque(deq);
    deq.erase(deq.begin(),deq.begin()+2);
    print_deque(deq);
    for (auto i = deq.begin();i != deq.end();)
        {
            if (*i%2==0)
                {
                    i= deq.erase(i);
                }
            else
                {
                    ++i;
                }
        }
    print_deque(deq);
    return 0;
}