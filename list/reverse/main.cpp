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

ostream& operator<<(ostream& ostr, const list<int>& list)
{
    for (auto& i : list)
        ostr << ' ' << i;
    return ostr;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto lis = list {1,2,3,5,7,2,3,4,8,0};
    cout<<"all: "<<lis<<"\n";
    lis.sort();
    cout<<"all: "<<lis<<"\n";
    lis.reverse();
    cout<<"all: "<<lis<<"\n";
    return 0;
}