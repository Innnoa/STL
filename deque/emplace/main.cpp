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
    string s;
    explicit A(string str):s(move(str)){cout<<"Constructed\n";}
    A(const A & a):s(a.s){cout<<"copy Constructed";}
    A(A&& a) noexcept :s(move(a.s)){cout<<"move Constructed";}
    A& operator= (const A& other) {
        s=other.s;
        cout<<"copy assigned\n";
        return *this;
    }
    A& operator= (A&& other)  noexcept {
        s=move(other.s);
        cout<<"move assigned\n";
        return *this;
    }
};

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    deque<A> deq;
    A two("two");
    A three("three");
    cout<<"emplace: \n";
    deq.emplace(deq.end(),"one");
    cout<<"emplace with copy: \n";
    deq.emplace(deq.end(),two);
    cout<<"emplace with move: \n";
    deq.emplace(deq.end(),move(three));
    cout<<"content: \n";
    for (const auto & i:deq)
        {
            cout<<i.s<<" ";
        }
    return 0;
}