#include <stdio.h>
#include <mem.h>
#include <string.h>
#include <ctype.h>

// Find the most common word in file.txt
// You need to make sure that characters like commas, colons, etc are not part of the words.
// Also make it case sensitive so words that only different in case sensitivity are the same.

int read_from_file(char *filename);

void remove_chars(char *words, const char *char_to_remove);

int most_common_word(const int counter[1000]);

int main()
{
    if (read_from_file("../mostwords.txt") != -1) {
        printf("The most common word in the file: %s", (char *) read_from_file("../mostwords.txt"));
    } else {
        printf("Can't open the file.");
        return -1;
    }

    return 0;
}

int read_from_file(char *filename)
{

    char word[50];
    int length = 0;
    int unique = 0;
    int index = 0;
    int counter[1000];
    int i = 0;
    char words[1000][50];

    FILE *fp;
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Can't open the file.");
        return -1;
    }

    for (i = 0; i < 1000; i++) {
        counter[i] = 0;
    }

    while (fscanf(fp, "%s", word) != EOF) {
        strlwr(word); // make to lower case

        length = strlen(word);
        if (ispunct(word[length - 1])) {// ispunct is all of the other characters
            word[length - 1] = '\0';
            remove_chars(word, "\"");
            unique = 1;
        }

        for (i = 0; i < index && unique; ++i) {
            if (strcmp(words[i], word) == 0) {  //strcmp compare to string
                unique = 0;
            }
        }

        if (unique == 1) {
            strcpy(words[index], word);
            counter[index]++;
            index++;
        } else {
            counter[i - 1]++;
        }
    }
    most_common_word(counter);

    fclose(fp);

    char *result = words[most_common_word(counter)];
    return (int) result;
}

void remove_chars(char *words, const char *char_to_remove)
{
    int rem[256] = {};
    if (NULL == words || NULL == char_to_remove) {
        return;
    }
    while (*char_to_remove) {
        rem[*char_to_remove++] = 1;
    }
    char *dest = words;
    while (*words) {
        if (!rem[*words]) {
            *dest++ = *words;
        }
        words++;
    }
    *dest = '\0';
}

int most_common_word(const int counter[1000])
{
    int max = counter[0];
    int index = 0;

    for (int i = 0; i < 1000; ++i) {
        if (counter[i] > max) {
            max = counter[i];
            index = i;
        }
    }
    return index;
}
