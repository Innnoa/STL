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
    auto ma = map<int, int>{{1, 2,}, {4, 5}, {6, 7}};
    cout << "before: " << ma.size()<<"\n";
    ma.clear();
    cout << "after: " << ma.size();
    return 0;
}
