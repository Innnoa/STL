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

void print_container(const vector<int>& c) {
    for (const auto & i:c)
        cout<<i<<" ";
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    vector c{0,1,2,3,4,5,6,7,8,9};
    print_container(c);
    c.erase(c.begin());
    print_container(c);
    c.erase(c.begin()+2,c.begin()+5);
    print_container(c);
    for (auto it=c.begin();it!=c.end();)
        {
            if (*it%2==0)
                {
                    it=c.erase(it);
                }
            else
                ++it;
        }
    print_container(c);
    return 0;
}