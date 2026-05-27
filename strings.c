#include <stdio.h>
#include <string.h>

int isPalindrome(char word[], int size);

int main(void) {
    char word[50];
    int length;

    printf("Enter your word: ");
    scanf("%s", word);
    length = strlen(word);

    if (isPalindrome(word, length) == 1) {
        printf("This word is a palindrome!\n");
    } else {
        printf("This word is not a palindrome!\n");
    }
    return 0;
}

int isPalindrome(char word[], int length) {
    int last_index = length;

    for (int i = 0; i < length / 2; i++) {
        if (word[last_index - 1] == word[i]) {
            last_index -= 1;
        } else {
            return 0;
        }
    }
    
    return 1;
}