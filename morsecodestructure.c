#include <stdio.h>
#include <string.h>
#include <windows.h>

struct morsecode
{
    char character;
    char code[10];
};

int main()
{
    struct morsecode morsecodes[] = {
        {'a', ".-"}, {'b', "-..."}, {'c', "-.-."}, {'d', "-.."}, {'e', "."}, {'f', "..-."}, {'g', "--."}, {'h', "...."}, {'i', ".."}, {'j', ".---"}, {'k', "-.-"}, {'l', ".-.."}, {'m', "--"}, {'n', "-."}, {'o', "---"}, {'p', ".--."}, {'q', "--.-"}, {'r', ".-."}, {'s', "..."}, {'t', "-"}, {'u', "..-"}, {'v', "...-"}, {'w', ".--"}, {'x', "-..-"}, {'y', "-.--"}, {'z', "--.."}, {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."}, {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"}, {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"}, {'Z', "--.."}};

    char input[100];

    printf("Enter characters: ");
    scanf("%s", input);

    for (int i = 0; i < strlen(input); i++)
    {
        char e = input[i];
        int found = 0;

        Beep(1500,1200);

        for (int j = 0; j < sizeof(morsecodes) / sizeof(morsecodes[0]); j++)
        {
            if (e == morsecodes[j].character)
            {
                printf("%s ", morsecodes[j].code);
                found = 1;
                break;
            }
        }

        if (!found)
        {
            printf("Invalid character");
        }
    }

    printf("\n");
    printf("Thank you");
    return 0;
}
