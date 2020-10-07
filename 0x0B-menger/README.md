Coding Interview: 2D Menger sponge

Write a function that draws a 2D Menger Sponge:
- Prototype: void menger(int level);
- Where level is the level of the Menger Sponge to draw
- If level is lower than 0, your function must do nothing
- Allowed to use math library

Format of 2D version:
- what is a [menger sponge](https://en.wikipedia.org/wiki/Menger_sponge)
- goal is to draw 2D version of menger sponge with the same principles
- a level N sponge is a 3x3 square of level N-1 sponges, except of the center one which is left empty
- a level 0 sponge is represented by the # character

Examples:
- level 0 sponge is a simple 1x1 square
- level 1 sponge is a 3x3 square of level 0 sponges, except for the center one, which is left empty
- level 2 sponge is a 3x3 square of level 1 sponges, except for the center one, which is left empty

Tip: size of a level N menger sponge is calculated as follows: 3^N

```
alex@~/0x0B-menger$ cat 0-main.c
#include <stdio.h>
#include <stdlib.h>

#include "menger.h"

/**
 * main - Entry point
 *
 * @ac: Arguments counter
 * @av: Arguments vector
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(int ac, char **av)
{
    int level;

    if (ac < 2)
    {
        fprintf(stderr, "Usage: %s level\n", av[0]);
        return (EXIT_FAILURE);
    }

    level = atoi(av[1]);
    menger(level);

    return (EXIT_SUCCESS);
}
alex@~/0x0B-menger$ gcc -Wall -Wextra -Werror -pedantic -o 0-menger 0-menger.c 0-main.c -lm
alex@~/0x0B-menger$ ./0-menger 0
#
alex@~/0x0B-menger$ ./0-menger 1
###
# #
###
alex@~/0x0B-menger$ ./0-menger 2
#########
# ## ## #
#########
###   ###
# #   # #
###   ###
#########
# ## ## #
#########
alex@~/0x0B-menger$ ./0-menger 3
###########################
# ## ## ## ## ## ## ## ## #
###########################
###   ######   ######   ###
# #   # ## #   # ## #   # #
###   ######   ######   ###
###########################
# ## ## ## ## ## ## ## ## #
###########################
#########         #########
# ## ## #         # ## ## #
#########         #########
###   ###         ###   ###
# #   # #         # #   # #
###   ###         ###   ###
#########         #########
# ## ## #         # ## ## #
#########         #########
###########################
# ## ## ## ## ## ## ## ## #
###########################
###   ######   ######   ###
# #   # ## #   # ## #   # #
###   ######   ######   ###
###########################
# ## ## ## ## ## ## ## ## #
###########################
alex@~/0x0B-menger$ ./0-menger -1
alex@~/0x0B-menger$
```
