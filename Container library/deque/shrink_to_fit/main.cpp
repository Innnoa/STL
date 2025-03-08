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

//Minimal c++11 allocator with debug output.
template<class Tp>
struct NAlloc
{
    typedef Tp value_type;
    NAlloc() = default;
    template<class T> explicit NAlloc(const NAlloc<T>&) {}

    static Tp* allocate(size_t n) {
        n*=sizeof(Tp);
        cout<<"allocating"<<n<<" bytes\n";
        return static_cast<Tp*>(::operator new(n));
    }

    static void deallocate(Tp* p,std::size_t n) {
        cout<<"deallocating "<<n*sizeof*p<<" bytes\n";
        ::operator delete(p);
    }
};

template<class T,class U>
bool operator == (const NAlloc<T>&,const NAlloc<U>&){return true;}
template<class T,class U>
bool operator != (const NAlloc<T>&,const NAlloc<U>&){return false;}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    cout<<"Default-construct deque:\n";
    deque<int,NAlloc<int>> deq;
    cout<<"\nAdd 300 elements:\n";
    for (auto i=1000;i<1300;i++)
        {
            deq.push_back(i);
        }
    cout<<"\npop 100 elements:\n";
    for (auto i=0;i<100;i++)
        {
            deq.pop_front();
        }
    cout<<"\nRun shrink_to_fit:\n";
    deq.shrink_to_fit();
    cout<<"\nDestory deque as it goes out of scope:\n";

    return 0;
}