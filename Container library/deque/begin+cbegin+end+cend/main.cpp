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
    deque deq{1,2,3,4,5};
    //Print all:
    ranges::for_each(deq,[](const int n){cout<<n<<" ";});
    cout<<"\n";
    //Sum:
    cout<<accumulate(deq.begin(),deq.end(),0)<<"\n";
    if (!deq.empty())
        {
            cout<<*deq.begin()<<"\n";
        }
    if (deq.begin()!=deq.end())
        {
            cout<<"deque is not empty";
        }
    return 0;
}