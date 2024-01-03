# 2nd Project at 42 - Creating our very own printf function
This took a while. Not because it is a super hard function but how things work inside of it, in this case the variadic functions.

Using the <stdarg.h> library we have access to va_start, va_end and va_list, which will be fundamental to make a function that the number and type of parameters isn't known!
I have to thank my coleagues at 42 and their amazing ideas because without them I would've taken much more time compreending the whole structure.

The function works with:

-%u and %i ---> Print an integer;

-%s        ---> Print a string;

-%c        ---> Print a char;

-%x        ---> Print a hexadecimal number in lowercase;

-%X        ---> Print a hexadecimal number in uppercase;

-%p        ---> Print a pointer address;

-%%        ---> The hardest one... print a percent sign;
