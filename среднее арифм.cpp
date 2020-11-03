
#include <iostream>

int main()
{


    std::puts("please enter 4 numbers");
    float a = 0;
    float b = 0;
    float c = 0;
    float d = 0;

    scanf_s("%f %f %f %f", &a, &b, &c, &d);
    getchar();
    float x = a + b + c + d;
    float f = x / 4;
    std::printf("solution: %f\n", f);
}