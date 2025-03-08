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

struct LightKey {
    int x;
};

struct Fatkey {
    int x;
    int data[1000];
};

bool operator<(const LightKey &lk, const Fatkey &fk) { return lk.x < fk.x; }
bool operator<(const Fatkey &fk, const LightKey &lk) { return fk.x < lk.x; }
bool operator<(const Fatkey &fk1, const Fatkey &fk2) { return fk1.x < fk2.x; }

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto se = set{1, 2, 3, 4};
    if (const auto search = se.find(2); search != se.end())
        {
            cout << "Found:" << (*search);
        } else
        {
            cout << "not found\n";
        }
    auto se1 = set<Fatkey, less<> >{{1, {}}, {2, {}}, {3, {}}, {4, {}}};
    constexpr LightKey lk {2};
    if (const auto search = se1.find(Fatkey{lk.x,{}});search!=se1.end())
        {
            cout<<"Found:"<<(search->x)<<"\n";
        }else
            {
                cout<<"not found\n";
            }
    return 0;
}
