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

std::ostream& operator<<(std::ostream& ostr, const std::list<int>& list)
{
    for (auto& i : list)
        ostr << ' ' << i;

    return ostr;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto lis1 = list {1,2,3,4,5};
    auto lis2 = list {3,4,5,7,9};
    auto it = lis1.begin();
    advance(it,2);
    lis1.splice(it,lis2);
    cout<<"lis1: "<<lis1<<"\n";
    cout<<"lis2: "<<lis2<<"\n";
    lis2.splice(lis2.begin(),lis1,it,lis1.end());
    cout<<"lis1: "<<lis1<<"\n";
    cout<<"lis2: "<<lis2<<"\n";
    return 0;
}