#include <unistd.h>

void ft_print_comb2(void)
{
    int first = '0';
    int second = '0';
    int third = '0';
    int four = '1';

    while(first <= '9')
    {
        while(second <= '9')
        {
            while(third <= '9')
            {
                while(four <= '9')
                {
                    write(1, &first, 1);
                    write(1, &second, 1);
                    write(1, " ", 1);
                    write(1, &third, 1);
                    write(1, &four, 1);
                    write(1, ",", 1);
                    four++;
                }
                third++;
            }
            second++;
        }
        first++;
    }
}

int main(void)
{
    ft_print_comb2();
    return 0;
}