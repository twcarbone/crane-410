#include <stdio.h>
#include <stdlib.h>

void show_help();

float main(int argc, char *argv[])
{
	if (argc == 1)
        show_help();
    else
    {
        float density = strtof(argv[1], NULL);
        float specific_volume = 1 / density;
        printf("%f\n", specific_volume);
        return specific_volume;
    }
}

void show_help()
{
    printf("\nCompute specific volume of a fluid");
    printf("\n\nUsage: sv [options] density");
    printf("\n\nv = 1/p");
    printf("\n\nWhere:");
    printf("\tv = specific volume, ft^3/lb\n");
    printf("\tp = weight density, lbs/ft^3\n");
    printf("\n");
}
