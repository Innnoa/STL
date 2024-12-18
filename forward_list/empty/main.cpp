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
    auto for_lis =forward_list<int>{};
    cout<<"its empty?"<<for_lis.empty()<<"\n";
    for_lis.push_front(1);
    cout<<"its empty?"<<for_lis.empty();
    return 0;
}