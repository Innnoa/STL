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

struct S
{
    int id;

    S(int i, double d, const string& s) : id{i}
    {
        std::cout << "S::S(" << i << ", " << d << ", \"" << s << "\");\n";
    }
    friend bool operator< (S const& x, S const& y) { return x.id < y.id; }
};

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto pq = priority_queue<S>{};
    pq.emplace(1,3.14,"hello");
    cout<<"id: "<<pq.top().id;
    return 0;
}