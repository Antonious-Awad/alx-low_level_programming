#include <unistd.h>

int main(void)
{
	write(0, "Best", 4);
	return 0;
}