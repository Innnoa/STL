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
    auto ma = map<int, double>{};
    ma[3] = 3.14;
    ma[4] = 4.399;
    ma[5] = 5.1;
    for (auto it = ma.begin();it!=ma.end();++it )
        {
            cout<<it->first<<": "<<it->second<<"\n";
        }
    return 0;
}
