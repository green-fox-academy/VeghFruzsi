#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void is_in_sentence(char* word, char* sentence);

int main()
{
    // Create a function which takes two strings as parameters
    // One string is actually a sentence and the other one is a word
    // It should return the index of the word in the sentence and 0 otherwise
    // Try to erase small and uppercase sensitivity.

    char word[100] = "doctor";
    char sentence[100] = "An apple a day keeps the doctor away.";

    // the output should be: 6
    is_in_sentence(word, sentence);

    return 0;
}
void is_in_sentence(char* word, char* sentence){

    char * pch;
    char temp_stnc[100] = "";
    printf ("Splitting string \"%s\" into tokens:\n",sentence);
    pch = strtok (sentence," ,.-");
    while (pch != NULL)
    {
        printf("%s\n", pch);
        pch = strtok (NULL, " ,.-");
    }

}

/*int word_length = strlen(word);
    int sentence_length = strlen(sentence);

    for(int i=0; i < sentence_length - word_length; i++)
    {
        int found = 1;
        for(int j = 0; j < word_length; j++)
        {
            if(sentence[i + j] != word[j])
            {
                found = 0;
                break;
            }
        }

        if(found == 1)
        {
            printf("'%s' found at index: %d \n", word, i);
        }
    }*/