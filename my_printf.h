#ifndef MY_PRINTF_H
#define MY_PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int		my_printf(const char *str, ...);
int		my_printnbr(int n);
int		my_strlen(char *s);
int		my_putstr(char *s);
void	my_putchar(char c);
void	my_puthex(unsigned int n, const char c);
int		my_hexlen(unsigned int n);
int		my_printhex(unsigned int n, const char c);
int		my_printpercent(void);
int		my_printptr(unsigned long long ptr);
int		my_printunbr(unsigned int n);
int		my_format(va_list args, const char format);

#endif
