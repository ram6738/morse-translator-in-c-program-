#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];  
    char stringa[10] = ".-";
    char stringb[10]="-...";
    char stringc[10]="-.-.";
    char stringd[10]="-..";
    char stringe[10]=".";
    char stringf[10]="..-.";
    char stringg[10]="--.";
    char stringh[10]="....";
    char stringi[10]="..";
    char stringj[10]=".---";
    char stringk[10]="-.-";
    char stringl[10]=".-..";
    char stringm[10]="--";
    char stringn[10]="-.";
    char stringo[10]="---";
    char stringp[10]=".--.";
    char stringq[10]="--.-";
    char stringr[10] = ".-.";
    char strings[10]="...";
    char stringt[10]="-";
    char stringu[10]="..-";
    char stringv[10]="...-";
    char stringw[10]=".--";
    char stringx[10]="-..-";
    char stringy[10]="-.--";
    char stringz[10]="--..";

    printf("Enter characters: ");
    scanf("%s", input);  

    for (int i = 0; i < strlen(input); i++)
    {
        char e = input[i];  
        printf("\a");

        if (e == 'a')
        {
            printf("%s ", stringa);  
        }
        else if (e == 'b')
        {
            printf("%s ", stringb);  
        }
        else if (e == 'c')
        {
            printf("%s ", stringc);  
        }
         else if (e == 'd')
        {
            printf("%s ", stringd);  
        }
        else if (e == 'e')
        {
            printf("%s ", stringe);  
        }
         else if (e == 'f')
        {
            printf("%s ", stringf);  
        }
        else if (e == 'g')
        {
            printf("%s ", stringg);  
        }
         else if (e == 'h')
        {
            printf("%s ", stringh);  
        }
        else if (e == 'i')
        {
            printf("%s ", stringi);  
        }
         else if (e == 'j')
        {
            printf("%s ", stringj);  
        }
        else if (e == 'k')
        {
            printf("%s ", stringk);  
        }
         else if (e == 'l')
        {
            printf("%s ", stringl);  
        }
        else if (e == 'm')
        {
            printf("%s ", stringm);  
        }
         else if (e == 'n')
        {
            printf("%s ", stringn);  
        }
        else if (e == 'o')
        {
            printf("%s ", stringo);  
        }
         else if (e == 'p')
        {
            printf("%s ", stringp);  
        }
        else if (e == 'q')
        {
            printf("%s ", stringq);  
        }
         else if (e == 'r')
        {
            printf("%s ", stringr);  
        }
        else if (e == 's')
        {
            printf("%s ", strings);  
        }
         else if (e == 't')
        {
            printf("%s ", stringt);  
        }
        else if (e == 'u')
        {
            printf("%s ", stringu);  
        }
         else if (e == 'v')
        {
            printf("%s ", stringv);  
        }
        else if (e == 'w')
        {
            printf("%s ", stringw);  
        }
         else if (e == 'x')
        {
            printf("%s ", stringx);  
        }
        else if (e == 'y')
        {
            printf("%s ", stringy);  
        }
         else if (e == 'z')
        {
            printf("%s ", stringz);  
        }
        else
        {
            printf("Invalid Character: %c\n", e);  
        }
    }

    printf("\n");  
    return 0;
}

// #include <stdio.h>
// #include <string.h>

// struct morsecode
// {
//     char character;
//     char code[10];
// };

// int main()
// {
//     struct morsecode morsecodes[] = {
//         {'a', ".-"}, {'b', "-..."}, {'c', "-.-."}, {'d', "-.."}, {'e', "."}, {'f', "..-."}, {'g', "--."}, {'h', "...."}, {'i', ".."}, {'j', ".---"}, {'k', "-.-"}, {'l', ".-.."}, {'m', "--"}, {'n', "-."}, {'o', "---"}, {'p', ".--."}, {'q', "--.-"}, {'r', ".-."}, {'s', "..."}, {'t', "-"}, {'u', "..-"}, {'v', "...-"}, {'w', ".--"}, {'x', "-..-"}, {'y', "-.--"}, {'z', "--.."}, {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."}, {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"}, {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"}, {'Z', "--.."}};

//     char input[100];

//     printf("Enter characters: ");
//     scanf("%s", input);

//     for (int i = 0; i < strlen(input); i++)
//     {
//         char e = input[i];
//         int found = 0;

//         for (int j = 0; j < sizeof(morsecodes) / sizeof(morsecodes[0]); j++)
//         {
//             if (e == morsecodes[j].character)
//             {
//                 printf("%s ", morsecodes[j].code);
//                 found = 1;
//                 break;
//             }
//         }

//         if (!found)
//         {
//             printf("Invalid character");
//         }
//     }

//     printf("\n");
//     return 0;
// }