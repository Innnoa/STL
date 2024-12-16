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

template<typename T>
ostream& operator<<(ostream& s,const list<T>& v) {
    s.put('{');
    for (char comma[]{'\0', ' ','\0'};const auto & e:v)
        {
            s<<comma<<e,comma[0]=',';
        }
    return s<<"}\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    list<string> lis1{"the", "frogurt","is","also","cursed"};
    cout<<"1: "<<lis1;
    list lis2(lis1.begin(),lis1.end());
    cout<<"2: "<<lis2;
    list lis3(lis1);
    cout<<"3: "<<lis3;
    list<string> lis4(5,"Mo");
    cout<<"4: "<<lis4;
    auto const rg = {"cat","dog","bird"};
#ifdef __cpp_lib_containers_ranges
    list<string> lis5(from_range,rg);
#else
    list<string> lis5(rg.begin(),rg.end());
#endif
    cout<<"5: "<<lis5;
    return 0;
}