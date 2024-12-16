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
    auto lis = list<int>{};
    cout<<"before:"<<lis.empty()<<"\n";
    lis.assign(1,2);
    cout<<"after:"<<lis.empty();
    return 0;
}