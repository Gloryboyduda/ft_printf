#include "ft_printf.h" 
int main(void)
{
        printf(":%%:\n");
        ft_printf(":%%:\n");
        printf(":%c:\n", 'c');
        ft_printf(":%c:\n", 'c');
        printf(":%s:\n", "ola");
        ft_printf(":%s:\n", "ola");
        printf(":%d:\n", 10);
        ft_printf(":%d:\n", 10);
        printf(":%u:\n", UINT_MAX);
        ft_printf(":%u:\n", UINT_MAX);
        printf(":%x:\n", 42);
        ft_printf(":%x:\n", 42);
        printf(":%X:\n", 42);
        ft_printf(":%X:\n", 42);
        printf(":%i:\n", 010);
        ft_printf(":%i:\n", 010);
        printf(":%p %p:\n", (void *)LONG_MIN, (void *)LONG_MAX);
        ft_printf(":%p %p:\n", (void *)LONG_MIN, (void *)LONG_MAX);
        ft_printf(":%d %d:\n", );
	return 0;
}
