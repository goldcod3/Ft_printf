#include "printf.h"

int main(void)
{
    int size_ft;
    int size;

    char *string;
    char c;
    int num;
    int unum;

    c = 'N';
    string = "Hola mundo, que tal?";
    num = -1293769182;
    unum = 12340;
    
    size = 0;
    size_ft = 0;

    ft_printf("TEST CHAR ft_printf: char -> ");
    size_ft = ft_printf("%c", c);
    printf("\n%i\n", size_ft);
    
    ft_printf("TEST CHAR printf: char -> ");
    size = printf("%c", c);
    printf("\n%i\n", size);

    ft_printf("TEST STRING ft_printf: string -> ");
    size_ft = ft_printf("%s", string);
    printf("\n%i\n", size_ft);

    ft_printf("TEST STRING printf: string -> ");
    size = printf("%s", string);
    printf("\n%i\n", size);

    ft_printf("TEST INTEGER ft_printf: int -> ");
    size_ft = ft_printf("%d", num);
    printf("\n%i\n", size_ft);

    ft_printf("TEST INTEGER printf: int -> ");
    size = printf("%d", num);
    printf("\n%i\n", size);

    ft_printf("TEST UNSIGNED ft_printf: uint -> ");
    size_ft = ft_printf("%u", unum);
    printf("\n%i\n", size_ft);

    ft_printf("TEST UNSIGNED printf: uint -> ");
    size = printf("%u", unum);
    printf("\n%i\n", size);

    

}