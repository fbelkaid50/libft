#include <stdio.h>

// Your ft_striteri function definition
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    if (!s)
        return;
    i = 0;
    while (s[i] != '\0')
    {
        (*f)(i, &(s[i]));
        i++;
    }
}

// Example function to be passed to ft_striteri
void example_function(unsigned int index, char *character)
{
    // Modify the character at the specified index
    *character = *character + index;
}

int main()
{
    // Example string
    char myString[] = "Hello, World!";

    // Print the original string
    printf("Original String: %s\n", myString);

    // Apply ft_striteri with example_function
    ft_striteri(myString, &example_function);

    // Print the modified string
    printf("Modified String: %s\n", myString);

    return 0;
}
