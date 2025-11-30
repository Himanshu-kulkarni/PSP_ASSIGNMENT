#include <stdio.h>

// Remove newline from fgets (manual, no inbuilt functions)
void removeNewline(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
}

// Find length (manual)
int stringLength(char str[]) {
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

// Concatenate (manual)
void stringConcat(char str1[], char str2[], char result[]) {
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] = '\0';
}

// Reverse string (manual)
void stringReverse(char str[], char rev[]) {
    int len = stringLength(str);
    int i;
    for (i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[i] = '\0';
}

// Compare (manual)
int stringCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    return 0;
}

// Palindrome check (manual)
int isPalindrome(char str[]) {
    int len = stringLength(str);
    int i;
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i])
            return 0;
    }
    return 1;
}

// Count words & vowels (manual)
void countWordsVowels(char str[], int *words, int *vowels) {
    int i = 0;
    *words = 0;
    *vowels = 0;

    while (str[i] != '\0') {
        char c = str[i];

        // Count vowels
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            (*vowels)++;

        // Count words
        if ((c == ' ' || c == '\0') && i > 0 && str[i-1] != ' ')
            (*words)++;

        i++;
    }

    // Last word
    if (i > 0 && str[i-1] != ' ')
        (*words)++;
}

// Replace word in sentence (manual)
void replaceWord(char sentence[], char old[], char new[], char result[]) {
    int i = 0, r = 0;

    while (sentence[i] != '\0') {

        int j = 0, k = i;

        // Check match of old word
        while (sentence[k] == old[j] && old[j] != '\0') {
            k++;
            j++;
        }

        if (old[j] == '\0') { // match found
            int t = 0;
            while (new[t] != '\0') {
                result[r++] = new[t++];
            }
            i = k;
        } else {
            result[r++] = sentence[i++];
        }
    }

    result[r] = '\0';
}

int main() {
    char str1[100], str2[100], sentence[200];
    char result[200], rev[100];
    int choice;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    removeNewline(str1);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    removeNewline(str2);

    printf("\n--- STRING OPERATIONS ---\n");
    printf("1. Find length\n");
    printf("2. Concatenate strings\n");
    printf("3. Reverse string\n");
    printf("4. Compare strings\n");
    printf("5. Palindrome check\n");
    printf("6. Count words & vowels\n");
    printf("7. Replace word in sentence\n");

    printf("\nEnter choice: ");
    scanf("%d", &choice);
    getchar(); // clear leftover newline

    switch(choice) {

        case 1:
            printf("Length of first string: %d\n", stringLength(str1));
            break;

        case 2:
            stringConcat(str1, str2, result);
            printf("Concatenated string: %s\n", result);
            break;

        case 3:
            stringReverse(str1, rev);
            printf("Reversed string: %s\n", rev);
            break;

        case 4:
            if (stringCompare(str1, str2) == 0)
                printf("Strings are equal\n");
            else
                printf("Strings are NOT equal\n");
            break;

        case 5:
            if (isPalindrome(str1))
                printf("Palindrome\n");
            else
                printf("Not Palindrome\n");
            break;

        case 6: {
            int words, vowels;
            countWordsVowels(str1, &words, &vowels);
            printf("Words = %d, Vowels = %d\n", words, vowels);
            break;
        }

        case 7:
            printf("Enter a sentence: ");
            fgets(sentence, sizeof(sentence), stdin);
            removeNewline(sentence);

            printf("Enter word to replace: ");
            fgets(str1, sizeof(str1), stdin);
            removeNewline(str1);

            printf("Enter new word: ");
            fgets(str2, sizeof(str2), stdin);
            removeNewline(str2);

            replaceWord(sentence, str1, str2, result);
            printf("Updated sentence: %s\n", result);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
