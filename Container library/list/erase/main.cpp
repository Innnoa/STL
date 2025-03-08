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

void print_list(const auto & str) {
    for (const auto &i:str)
        {
            cout<<i<<" ";
        }
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto lis =list{1,2,3,4,5,6,7,8,9};
    print_list(lis);
    lis.erase(lis.begin());
    print_list(lis);
    auto lis_begin = lis.begin();
    auto lis_end = lis.begin();
    advance(lis_begin,2);
    advance(lis_end,5);
    lis.erase(lis_begin,lis_end);
    print_list(lis);
    for (auto it =lis.begin();it!=lis.end();)
        {
            if (*it%2==0)
                {
                    it =lis.erase(it);
                }else
                    {
                        ++it;
                    }
        }
    print_list(lis);
    return 0;
}