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

struct S {
    int x;
    S(int i): x(i) { cout << "S{" << i << "} "; }
    bool operator<(S const s) const { return x < s.x; }
};

struct R {
    int x;
    R(int i): x(i) { cout << "R{" << i << "}"; }
    bool operator<(R const r) const { return x < r.x; }
};

bool operator<(R const &r, int i) { return r.x < i; }
bool operator<(int i, R const &r) { return i < r.x; }

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto se = set{1, 2, 3, 4, 5};
    cout << se.count(1) << " " << se.count(4) << "\n";
    auto se1 = set<S>{2, 3, 4, 1, 2};
    cout << se.count(2) << " " << se.count(4) << "\n";
    auto se2 = set<R, less<> >{3, 2, 4, 5, 1};
    cout << se.count(2) << " " << se.count(3) << "\n";
    return 0;
}
