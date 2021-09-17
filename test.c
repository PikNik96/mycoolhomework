#include <stdint.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
	double b = 5.5;
	long int* a = (long int*)&b;
	printf("double was 0x%lx\n", *(long*)&b);

	*a = 1111111;
	printf("double now 0x%lx\n", *(long*)&b);


	printf("%lu, %lu\n", sizeof(long), sizeof(double));

	printf("a = %p, &b = %p, b = %lf, *a = %ld\n", a, &b, b, *a);

	return 0;
}
