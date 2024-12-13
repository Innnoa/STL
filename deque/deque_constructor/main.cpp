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

template<typename T>
ostream& operator<<(ostream& s,const deque<T>& v) {
    s.put('{');
    for (char comma[]{'\0',' ','\0'};const auto & i:v)
        {
            s<<comma<<i,comma[0]=',';
        }
    return s<<"}\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    //c++11 initializer list syntax:
    deque<string> words1{"the","frogurt","is","also","cursed"};
    cout<<"1: "<<words1;
    //words2 == words1
    deque words2(words1.begin(),words1.end());
    cout<<"2: "<<words2;
    //words3 == words1
    deque words3(words1);
    cout<<"3: "<<words3;
    //words4 is {"Mo","Mo","Mo","Mo","Mo"}
    deque<string> words4 {5,"Mo"};
    cout<<"4: "<<words4;

    auto const rg = {"cat", "cow", "crow"};
#ifdef __cpp_lib_containers_ranges
    std::deque<std::string> words5(std::from_range, rg); // overload (11)
#else
    std::deque<std::string> words5(rg.begin(), rg.end()); // overload (5)
#endif
    std::cout << "5: " << words5;
    return 0;
}