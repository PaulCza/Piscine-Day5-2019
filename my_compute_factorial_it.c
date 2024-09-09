/*
** EPITECH PROJECT, 2019
** my_compute_factorial_it
** File description:
** fzjfesfezs
*/

int my_compute_factorial_it(int nb)
{
    long int test;
    long int pog;
    pog = 1;

    for (test = 1; test <= nb; test++)
    {
        pog = pog * test;
    }
    return pog;
}
