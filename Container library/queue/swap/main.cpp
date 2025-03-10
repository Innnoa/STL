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
    requires (std::ranges::input_range<typename Adaptor::container_type>)
void print(std::string_view name, const Adaptor &adaptor) {
    struct Printer : Adaptor // to use protected Adaptor::Container c;
    {
        void print(const std::string_view name) const {
            std::cout << name << " [" << std::size(this->c) << "]: ";
            for (auto const &elem: this->c)
                std::cout << elem << ' ';
            std::cout << '\n';
        }
    };
    static_cast<Printer const &>(adaptor).print(name);
}

int main() {
    std::vector<std::string>
            v1{"1", "2", "3", "4"},
            v2{"a", "b", "c", "d", "e"};

    std::queue s1(std::move(v1));
    std::queue s2(std::move(v2));

    print("s1", s1);
    print("s2", s2);

    s1.swap(s2);

    print("s1", s1);
    print("s2", s2);
}
