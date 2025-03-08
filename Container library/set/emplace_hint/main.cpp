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

constexpr int n_operations = 100'500'0;

std::size_t set_emplace() {
    std::set<int> set;
    for (int i = 0; i < n_operations; ++i)
        set.emplace(i);
    return set.size();
}

std::size_t set_emplace_hint() {
    std::set<int> set;
    auto it = set.begin();
    for (int i = 0; i < n_operations; ++i)
        {
            set.emplace_hint(it, i);
            it = set.end();
        }
    return set.size();
}

std::size_t set_emplace_hint_wrong() {
    std::set<int> set;
    auto it = set.begin();
    for (int i = n_operations; i > 0; --i)
        {
            set.emplace_hint(it, i);
            it = set.end();
        }
    return set.size();
}

std::size_t set_emplace_hint_corrected() {
    std::set<int> set;
    auto it = set.begin();
    for (int i = n_operations; i > 0; --i)
        {
            set.emplace_hint(it, i);
            it = set.begin();
        }
    return set.size();
}

std::size_t set_emplace_hint_closest() {
    std::set<int> set;
    auto it = set.begin();
    for (int i = 0; i < n_operations; ++i)
        it = set.emplace_hint(it, i);
    return set.size();
}

double time_it(const std::function<std::size_t()> &set_test,
               const char *what = nullptr,
               const double ratio = 0.0) {
    const auto start = std::chrono::system_clock::now();
    const std::size_t setsize = set_test();
    const auto stop = std::chrono::system_clock::now();
    const std::chrono::duration<double, std::milli> time = stop - start;
    if (what != nullptr && setsize > 0)
        std::cout << std::setw(8) << time << " for " << what << " (ratio: "
                << (ratio == 0.0 ? 1.0 : ratio / time.count()) << ")\n";
    return time.count();
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    std::cout << std::fixed << std::setprecision(2);
    time_it(set_emplace); // cache warmup
    const auto x = time_it(set_emplace, "plain emplace");
    time_it(set_emplace_hint, "emplace with correct hint", x);
    time_it(set_emplace_hint_wrong, "emplace with wrong hint", x);
    time_it(set_emplace_hint_corrected, "corrected emplace", x);
    time_it(set_emplace_hint_closest, "emplace using returned iterator", x);
}
