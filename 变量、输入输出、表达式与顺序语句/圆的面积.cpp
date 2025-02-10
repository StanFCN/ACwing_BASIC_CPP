#include <iostream>

using namespace std;

#define PI 3.14159

int main()
{
    double R = 0.00;
    double S = 0;
    scanf("%lf", &R);
    S = PI * R * R;
    printf("A=%.4lf", S);
    return 0;
}