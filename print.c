#include <stdio.h>
#include <stdlib.h>

void print_file_contents(char *filename)
{
    // open the file
    FILE *fp;
    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    }

    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        // print escape chars
        if (ch == '\\')
        {
            ch = fgetc(fp);
            switch (ch)
            {
                case 'n':
                    printf("\n");
                    break;
                case 'r':
                    printf("\r");
                    break;
                case 't':
                    printf("\t");
                    break;
                default:
                    break;
            }
        }
        else
        {
            printf("%c", ch);
        }
    }
}


int main()
{
    char *filename = "S:/Data/Stacktraces/stacktrace1.txt";
    print_file_contents(filename);
    return 0;
}
