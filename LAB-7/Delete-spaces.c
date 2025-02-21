


#include <stdio.h>

int main() {
    char sentence[1000], result[1000];
    int j = 0;

    // Input the sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Process the sentence
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ') {  // Skip white spaces
            if (sentence[i] == '.') {
                result[j++] = ':';  // Replace '.' with ':'
            } else {
                result[j++] = sentence[i];  // Copy other characters
            }
        }
    }
    result[j] = '\0';  // Null-terminate the result string

    // Display the modified sentence
    printf("Modified sentence: %s\n", result);

    return 0;
}