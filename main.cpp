#include <iostream>
#include <stdio.h>
//using namespace std;

int main(void)
{
    //using namespace 命名空间名称
    /*
     * 这里的std其实就是个命名空间标示符
     * ，C++标准库中的函数或者对象都是在命名空间std中定义的。
     * 这里用了这句using namespace std;
     * 就相当于直接把它的命名空间的壳拆了，
     * 也就是可以直接访问里边的所有函数和对象，如cout、cin、endl……
     */
    using namespace std;
    cout << "Come uo and cpp me some time.";
    cout << endl;
    cout << "You will not regret it!" << endl;
    printf("666");

    return 0;
}
