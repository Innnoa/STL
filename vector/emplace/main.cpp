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
    explicit A(auto str): s(move(str)) { cout << " constructed\n"; }
    A(const A &o): s(o.s) { cout << " copy constructed\n"; }
    A(A &&o) noexcept : s(move(o.s)) { cout << " move constructed\n"; }

    A &operator=(const A &other) {
        s = other.s;
        cout << " copy assigned\n";
        return *this;
    }

    A &operator=(A &&other) noexcept {
        s = move(other.s);
        cout << " move assigned\n";
        return *this;
    }
};

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    vector<A> container;
    container.reserve(10);
    cout << "construct 2 time A :\n";
    A two("two");
    A three("three");
    cout << "emplace\n";
    container.emplace(container.end(), "one");
    cout << "emplace with A& :\n";
    container.emplace(container.end(), two);
    cout << "emplace with A&& :\n";
    container.emplace(container.end(), move(three));
    cout << "content :\n";
    for (const auto &i: container)
        {
            cout << " " << i.s;
        }
    cout << endl;
    return 0;
}
