#include <stdio.h>

void printSign(int totHeight)
{
    // Full name: Rachel Francis Shindelus
    int nameLength = 24;
    for (int j = 0; j < totHeight; j++)
    {
        printf("|");
        if (j == 0 || j == 2)
        {
            for(int i = 0; i < nameLength + 2; i++)
            {
                printf("-");
                if (i == (nameLength + 1))
                {
                    printf("|");
                }
            }
        }
        if (j == 1)
        {
            printf(" Rachel Francis Shindelus |");
        }
        printf("\n");
    }

}

int main()
{
    int totHeight = 0;
    int poleHeight = 0;
    int signHeight = 3; //const
    
    while (totHeight < 3 || totHeight > 12)
    {
        printf("Enter the height of the sign: ");
        scanf("%d", &totHeight);
        if (totHeight < 3 || totHeight > 12)
        {
            printf("Error! Sign height must be between 3 and 12 lines tall!\n");
        }
    }
    poleHeight = totHeight - signHeight;
    printSign(totHeight);
    printf("\n");

    return 0;
}