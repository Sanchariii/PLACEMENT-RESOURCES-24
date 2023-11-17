#include <iostream>
#include <algorithm>

long long times, budgets[500001], max1 = 0, current;
using namespace std;
void swap(int i, int j)
{
    int temp = budgets[i];
    budgets[i] = budgets[j];
    budgets[j] = temp;
}
int main()
{
    scanf("%lld", &times);
    for (int i = 0; i < times; ++i)
    {
        scanf("%lld", &budgets[i]);
    }

    sort(budgets, budgets + times);

    // for (int i = 0; i < times; ++i)
    // {
    //     for (int j = i + 1; j < times; ++j)
    //         if (budgets[i] > budgets[j])
    //             swap(i, j);
    // }
    for (int i = 0; i < times; ++i)
        if (budgets[i] * (times - i) > max1)
            max1 = budgets[i] * (times - i);

    printf("%lld", max1);
    return 0;
}