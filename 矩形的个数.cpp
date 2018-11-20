#include"stdio.h"
int main()
{
	long long A, B;
	while (scanf("%ld %ld", &A, &B) != EOF)
    {
		long long sum = (1 + A)*A / 2 * (1 + B)*B / 2;
        printf("%ld\n", sum);
    }
}