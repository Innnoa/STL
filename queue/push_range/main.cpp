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

template<typename Adaptor>
    requires(ranges::input_range<typename Adaptor::container_type>)
void println(auto, const Adaptor &adaptor) {
    struct Container : Adaptor {
        [[nodiscard]] const auto & container() const { return this->c; }
    };
    for (auto const &elem: static_cast<const Container &>(adaptor).container())
        cout << elem << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto que = queue<int>{};
    const auto li = {1, 2, 3, 4, 5};
#ifdef __cpp_lib_containers_ranges
    que.push_range(li);
#else
    ranges::for_each(li, [&que](auto e) { que.push(e); });
#endif
    println("{}", que);
    return 0;
}
