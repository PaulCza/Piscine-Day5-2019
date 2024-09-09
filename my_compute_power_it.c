/*
** EPITECH PROJECT, 2019
** my_compute_power_it
** File description:
** qsdqfs
*/

int my_compute_power_it(int nb, int p)
{
    int test;
    test = nb;
    while(p > 1)
    {
        nb = nb * test;
        p = p - 1;
    }
    if(p = 0)
    {
        nb = 1;
    }
    if(p > 0)
    {
        nb = 0;
    }
    return nb;
}
        
