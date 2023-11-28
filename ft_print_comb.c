#include <unistd.h>

void ft_print_comb(void)
{
    int first = '0';
    int second = '1';
    int third = '2';

    while(first <= '7')
    {
        second = first + 1;
        while(second <= '8')
        {
            third = second + 1;
            while(third <= '9')
            {
                write(1, &first, 1);
                write(1, &second, 1);
                write(1, &third, 1);
                write(1, ",", 1);
                write(1, " ", 1);
                third++;
            }
            second++;
        }
        first++;
    }
}

int main(void)
{
    ft_print_comb();
    return 0;
}