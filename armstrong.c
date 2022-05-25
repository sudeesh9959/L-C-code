#include <stdio.h>
int main()
{
int num, d1, d2, d3, sum, num2;
for (num = 1; num <= 500; num++)
{
d3 = num % 10;
num2 = num / 10;
d2 = num2 % 10;
d1 = num2 / 10;
sum = pow(d1, 3) + pow(d2, 3) + pow(d3, 3);
if (sum == num)
{
printf("%d\n",sum);
}
}
}