/*
** EPITECH PROJECT, 2019
** my_compute_factorial_rec
** File description:
** csqjfq
*/

int my_compute_factorial_rec(int nb)
{
    if (nb >= 2147483647)
        return(0);
    if (nb <= 0)
        return (0);
    if (nb >= 1)
        return nb * my_compute_factorial_it(nb - 1);
    else
        return 1;
}



