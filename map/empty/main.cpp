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
    auto ma = map<int,int> {};
    cout<<"before: "<<ma.empty()<<"\n";
    ma.emplace(12,13);
    cout<<"after: "<<ma.empty();
    return 0;
}