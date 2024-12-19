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

class Dew {
private:
    int a, b, c;

public:
    Dew(int _a, int _b, int _c): a(_a), b(_b), c(_c) {
    }

    bool operator<(const Dew &other) const {
        return (a < other.a) || (a == other.a && b < other.b) || (b == other.b && c < other.c);
    }
};

constexpr int nof_operations{101};

size_t set_emplace() {
    set<Dew> set;
    for (int i = 0; i < nof_operations; i++)
        {
            for (int j = 0; j < nof_operations; j++)
                {
                    for (int k = 0; k < nof_operations; k++)
                        {
                            set.emplace(i, j, k);
                        }
                }
        }
    return set.size();
}

size_t set_insert() {
    set<Dew> set;
    for (int i = 0; i < nof_operations; ++i)
        for (int j = 0; j < nof_operations; ++j)
            for (int k = 0; k < nof_operations; ++k)
                set.insert(Dew(i, j, k));
    return set.size();
}

void time_it(const function<int()> &set_test, const string &what = "") {
    const auto start = chrono::system_clock::now();
    const auto the_size = set_test();
    const auto stop = chrono::system_clock::now();
    const chrono::duration<double, milli> time = stop - start;
    if (!what.empty() && the_size)
        {
            cout << fixed << setprecision(2)
            << time << " for " << what << "\n";
        }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    time_it(set_insert, "cache warming...");
    time_it(set_insert, "insert");
    time_it(set_insert, "insert");
    time_it(set_emplace, "emplace");
    time_it(set_emplace, "emplace");
    return 0;
}
