#import <stdio.h>
#import <cs50.h>

int main(void)
{
    int h = 0;
    do
    {
        h = get_int("Height: ");
    }
    while ( h < 0 || h > 23);

    // for each row of the pyramid
    for ( int r = 0; r < h; r++)
    {
        // printf("r = %i", r);

        for (int spaces = (h - (1 + r)); spaces > 0; spaces-- )
        {
            printf(" ");
        }
        for (int hashes = (1 + r); hashes > 0; hashes-- )
        {
            printf("#");
        }
        printf("  ");
        for (int hashes = (1 + r); hashes > 0; hashes-- )
        {
            printf("#");
        }
        printf("\n");

    }
}
