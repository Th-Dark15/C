#include <stdio.h>

void fibonacci()
{
    int i, t1 = 0, t2 = 1, proximotermo;
    for (i = 1; i < 10; i++)
    {
        printf("\n %d", t1);
        proximotermo = t1 + t2;
        t1 = t2;
        t2 = proximotermo;
    }
}

int main()
{
    fibonacci();
}