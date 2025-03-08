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

struct A {
    string str;
    explicit A(string str):str(move(str)){cout<<"constructed\n";}
    A(const A& o):str(o.str){cout<<"copy constructed\n";}
    A(A&& o) noexcept :str(move(o.str)){cout<<"move constructed\n";}
    A& operator=(const A& other) {
        str=other.str;
        cout<<"copy constructed\n";
        return *this;
    }
    A& operator=(A&& other)  noexcept {
        str=move(other.str);
        cout<<"move constructed\n";
        return * this;
    }
};

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto lis = list<A>{};
    cout<<"constructed 2 :\n";
    A lis1{"hello"},lis2{"world"};
    cout<<"emplace:\n";
    lis.emplace(lis.end(),"zjy");
    cout<<"copy emplace:\n";
    lis.emplace(lis.end(),lis1);
    cout<<"move emplace:\n";
    lis.emplace(lis.end(),lis2);
    for (cout<<"all:\n";const auto & i:lis)
        {
            cout<<i.str<<" ";
        }
    cout<<"\n";
    return 0;
}