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
    const auto ma = map<int,string>{
        {1,"nihao"},
        {2,"hello"},
        {3,"zjy"},
        {4,"where"},
        {5,"xixi"}
    };
    std::cout << "US coins in circulation, largest to smallest denomination:\n";
    for (auto it = ma.rbegin();it!= ma.rend();++it)
        {
            cout<<setw(11)<<it->second<<" :"<<it->first<<"\n";
        }
    return 0;
}