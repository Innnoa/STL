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
    auto for_lis = forward_list {1,2,3,4};
    for (;!for_lis.empty();for_lis.pop_front())
        {
            cout<<" front :"<<for_lis.front()<<" ";
        }
    return 0;
}