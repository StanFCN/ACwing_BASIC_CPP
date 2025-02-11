#include <iostream>
using namespace std;
int main()
{
    int number, time;
    double money;
    cin >> number >> time;
    cin >> money;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", time * money);

    return 0;
}