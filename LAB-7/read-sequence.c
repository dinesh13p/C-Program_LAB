//Write a program to read a sentence and count the number of characters &words in that sentence.

#include <stdio.h>

int main() {
    char sentence[1000];
    int charCount = 0, wordCount = 1;

    // Input the sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Count characters and words
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            charCount++;  // Count each character excluding spaces and newline
        }
        if (sentence[i] == ' ' && sentence[i+1] != ' ' && sentence[i+1] != '\n') {
            wordCount++;  // Count each word
        }
    }

    // Display the results
    printf("Number of characters (excluding spaces): %d\n", charCount);
    printf("Number of words: %d\n", wordCount);

    return 0;
}