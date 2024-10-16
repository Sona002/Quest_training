//Write C code to sort words in string alphabetically.  
//Consider only 1 character for sorting.  
//Store sorted words in buffer.  
//Also store total number of words sorted.



#include <stdio.h>
#include <string.h>

void  sort_Words(char *str, char buffer[][50], int *totalWords); 
int index1,inde2x;

void main() 
{
    char str[] = "zebra apes is apple banana grape";
    char buffer[100][50];  // Array to store individual words after sorting
    int totalWords = 0; // Variable to store the total number of words

    sort_Words(str, buffer, &totalWords);

    printf("Sorted words :\n");
    for (int index1 = 0; index1 < totalWords; index1++) 
    {
        printf("%s\n", buffer[index1]);
    }
    printf("Total number of words sorted: %d\n", totalWords);

}
void  sort_Words(char *str, char buffer[][50], int *totalWords)
{
    char *token; // Temporary pointer for tokenized words
    char temp[50]; // Temporary array for swapping words during sorting
    *totalWords = 0;

    // Tokenize the input string by spaces and store each word in buffer
    token = strtok(str, " ");
    while (token != NULL) 
    {
        strcpy(buffer[*totalWords], token); // Copy word to buffer
        (*totalWords)++;
        token = strtok(NULL, " "); // Continue tokenizing
    }

    // Sort the words in buffer based on the first character of each word
    for (int index1 = 0; index1 < *totalWords - 1; index1++) 
    {
        for (int index2 = index1 + 1; index2 < *totalWords; index2++) 
        {
            if (buffer[index1][0] > buffer[index2][0]) // Compare the first character of each word
            {
                strcpy(temp, buffer[index1]); // Store buffer[index1] in temp
                strcpy(buffer[index1], buffer[index2]); // Swap words
                strcpy(buffer[index2], temp);
            }
        }
    }
}
