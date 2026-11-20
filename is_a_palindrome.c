#include <stdio.h>
#include <stdlib.h>

char    *nbr_to_str(int nb)
{
    char    *str;
    int     i;
    int     n;

    str = malloc(20);
    if (!str)
        return (NULL);
    i = 0;
    n = nb;
    if (nb < 0)
    {
        str[0] = '-';
        nb = -nb;
        i = 1;
    }
    while (nb >= 0)
    {
        n = nb % 10;
        str[i] = n + '0';
        nb = nb / 10;
        i++;
        if (nb == 0)
            break;
    }   
    str[i] = '\0'; 
    return (str);
}

int     str_len(char   *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int isPalindrome(int x) {
    char    *str;
    int     i;
    int     len;
    int     j;
    
    i = 0;
    str = nbr_to_str(x);
    len = str_len(str);
    j = len - 1;
    while (str[i] && i <= (len / 2))
    {
        if (str[i] != str[j])
            return (0);
        i++;
        j--;
    }
    free(str);
    return (1);
}

int main(void)
{
    printf("%d", isPalindrome(121)); // resule is true 
    return (0);
}