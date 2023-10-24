#include "ft_printf.h"

int     ft_printf(const char *str, ...)
{
        int     i;
        va_list args;
        int     contagem;

        i = 0;
        va_start(args, str);
        while (str[i] != '\0')
        {
                if (str[i] == '%')
                        ft_formatspecifier(str[i + 1], args, &contagem);
                else
                {
                        write(1, &str[i], 1);
                        contagem += 1;
                }
                i++;
        }
        va_end(args);
        return (contagem);
}

int     main()
{
        ft_printf("Integer: %i e String: %s", 42, "Guilherme");
        return (0);
}