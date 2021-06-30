#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

string ari(string s)
{
    int characters = 0;
    int words = 0;
    int sentences = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (isalnum(s[i]))
            characters++;

        if (s[i] == ' ')
            words++;

        if (s[i] == '.' || s[i] == '?' || s[i] == '!')
            sentences++;
    }
    int ARI = ceil((4.71 * (float)characters / words) + (0.5 * (float)words / sentences) - 21.43);

    switch (ARI)
    {
    case 1:
        s = "Kindergarten";
        break;
    case 2:
        s = "First/Second Grade";
        break;
    case 3:
        s = "Third Grade";
        break;
    case 4:
        s = "Fourth Grade";
        break;
    case 5:
        s = "Fifth Grade";
        break;
    case 6:
        s = "Sixth Grade";
        break;
    case 7:
        s = " Seventh Grade";
        break;
    case 8:
        s = "Eighth Grade";
        break;
    case 9:
        s = "Ninth Grade";
        break;
    case 10:
        s = "Tenth Grade";
        break;
    case 11:
        s = "Eleventh Grade";
        break;
    case 12:
        s = "Twelfth Grade";
        break;
    case 13:
        s = "College student";
        break;
    case 14:
        s = "Professor";
        break;
    }
    return s;
}
