#include <stdio.h>
#include <memory>
#include <vector>
#include <string.h>

/*
shared_ptr 管理动态内存
*/
using namespace std;
struct T_TEST_INFO
{
    int type;
    int value;
    int index;
    T_TEST_INFO()
    {
        index = 0;
    }
    T_TEST_INFO(int index)
    {
        this->index = index;
    }
    ~T_TEST_INFO()
    {
        // printf("delete T_TEST_INFO-%d\n", index);
    }
};

int main()
{
    T_TEST_INFO testInfo;
    memset(&testInfo, 0x00, sizeof(T_TEST_INFO));
    shared_ptr<vector<T_TEST_INFO>> sptr = make_shared<vector<T_TEST_INFO>>();
    for (int i = 0; i < 10; i++)
    {
        testInfo.type = i % 2;
        testInfo.value = i * i;
        testInfo.index = i;
        sptr->push_back(testInfo);
        printf("index:%d vecAddr = %p  vecdataAddr = %p\n", i, sptr.get(), &sptr->at(0));
    }
    return 0;
}
