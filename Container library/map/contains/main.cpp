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
    auto ma = map<int,int> {{2,3},{3,4},{5,6}};
    for (const auto & i : {1,3})
        {
            if (ma.contains(i))
                {
                    cout<<"have\n";
                }else
                    {
                        cout<<"no\n";
                    }
        }
    return 0;
}