int print_last_digit(int n)
{
    int last_digit = n % 10;
    if (last_digit < 0)
    {
        last_digit *= -1;
    }
    _putchar(last_digit + '0');
    return (last_digit);
}

void jack_bauer(void)
{
    int h, m;
    for (h = 0; h < 24; h++)
    {
        for (m = 0; m < 60; m++)
        {
            _putchar((h / 10) + '0');
            _putchar((h % 10) + '0');
            _putchar(':');
            _putchar((m / 10) + '0');
            _putchar((m % 10) + '0');
            _putchar('\n');
        }
    }
}

void times_table(void)
{
    int i, j, res;
    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            res = i * j;
            if (res > 9)
            {
                _putchar((res / 10) + '0');
            }
            _putchar((res % 10) + '0');
            if (j < 9)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n');
    }
}