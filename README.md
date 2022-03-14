# my_printf
I have coded my own print function to replicate the exact behavior of the real one. This code gives a good example of practical application of variadic functions.

Variadic fuctions in C are an important tool to learn as it creates flexibility to the code in case number or types of argument that your function takes is not defined or inclear. The variadic function takes variable number of arguments. Note that at least one argument in the fuctions is fixed and the rest parameters can be indentified using ellipsis (...).

Syntax: int fuction_name(data_type variable_name, ...);
Header file: stdarg.h
Marcros/subfuctions: va_list (including: va_start, va_copy, va_end).
