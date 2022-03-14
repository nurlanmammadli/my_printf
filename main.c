#include "my_printf.h"

int main(void)
{
	my_printf("Print Character: %c\n", 'a');
	my_printf("Print String: %s\n", "hello");
	my_printf("Print Digits: %d\n", 123456789);
	my_printf("Print Hexadecimals: %x\n", 123456789);
	my_printf("Print Pointer: %p\n", 123456789);
	my_printf("Print Unsigned Digit: %u\n\n", -123456789);

	printf("Original Print Character: %c\n", 'a');
	printf("Original Print String: %s\n", "hello");
	printf("Original Print Digits: %d\n", 123456789);
	printf("Original Print Hexadecimals: %x\n", 123456789);
	printf("Original Print Unsigned Digit: %u\n", -123456789);
	return (0);
}
