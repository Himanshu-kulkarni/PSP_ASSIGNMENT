#include <stdio.h>

// -------------------------
// Remove newline (manual)
// -------------------------
void removeNewline(char str[]) {
    int i = 0;
    while(str[i] != '\0') {
        if(str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
}

// -------------------------
// strlen (manual)
// -------------------------
int my_strlen(char str[]) {
    int i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}

// -------------------------
// strcpy (manual)
// -------------------------
void my_strcpy(char dest[], char src[]) {
    int i = 0;
    while(src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// -------------------------
// strcmp (manual)
// -------------------------
int my_strcmp(char s1[], char s2[]) {
    int i = 0;
    while(s1[i] != '\0' || s2[i] != '\0') {
        if(s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return 0;
}

// -------------------------
// Character Frequency
// -------------------------
void frequency(char str[]) {
    int freq[256] = {0};
    int i = 0;

    while(str[i] != '\0') {
        freq[(unsigned char)str[i]]++;
        i++;
    }

    printf("\nCharacter Frequency:\n");
    for(i = 0; i < 256; i++) {
        if(freq[i] > 0)
            printf("'%c' : %d\n", i, freq[i]);
    }
}

// -------------------------
// Replace ALL occurrences of substring
// -------------------------
void replaceSubstring(char str[], char old[], char neww[], char result[]) {
    int i = 0, r = 0;

    while(str[i] != '\0') {
        int j = 0, k = i;

        while(str[k] == old[j] && old[j] != '\0') {
            k++; j++;
        }

        if(old[j] == '\0') { // match found
            int t = 0;
            while(neww[t] != '\0')
                result[r++] = neww[t++];
            i = k;
        }
        else {
            result[r++] = str[i++];
        }
    }
    result[r] = '\0';
}

// -------------------------
// Replace ONLY a word in a sentence
// -------------------------
void replaceWord(char sentence[], char old[], char neww[], char result[]) {
    int i = 0, r = 0;

    while(sentence[i] != '\0') {
        int j = 0, k = i;

        while(sentence[k] == old[j] && old[j] != '\0') {
            k++; j++;
        }

        if(old[j] == '\0') { // whole word matched
            int t = 0;
            while(neww[t] != '\0')
                result[r++] = neww[t++];
            i = k;
        }
        else {
            result[r++] = sentence[i++];
        }
    }
    result[r] = '\0';
}

// -------------------------
// MAIN PROGRAM
// -------------------------
int main() {
    char str[200], old[100], neww[100], result[300];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    removeNewline(str);

    int choice;
    printf("\n--- MENU ---\n");
    printf("1. Character Frequency\n");
    printf("2. Replace ALL occurrences of a substring\n");
    printf("3. Find and Replace a word\n");
    printf("4. Implement Standard String Functions\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar(); // clear buffer

    switch(choice) {

        case 1:
            frequency(str);
            break;

        case 2:
            printf("Enter substring to replace: ");
            fgets(old, sizeof(old), stdin);
            removeNewline(old);

            printf("Enter new substring: ");
            fgets(neww, sizeof(neww), stdin);
            removeNewline(neww);

            replaceSubstring(str, old, neww, result);
            printf("Updated string: %s\n", result);
            break;

        case 3:
            printf("Enter word to replace: ");
            fgets(old, sizeof(old), stdin);
            removeNewline(old);

            printf("Enter new word: ");
            fgets(neww, sizeof(neww), stdin);
            removeNewline(neww);

            replaceWord(str, old, neww, result);
            printf("Updated sentence: %s\n", result);
            break;

        case 4: {
            char a[100], b[100];

            printf("\nTesting strlen:\nLength = %d\n", my_strlen(str));

            printf("\nTesting strcpy:\nCopying string...\n");
            my_strcpy(a, str);
            printf("Copied string: %s\n", a);

            printf("\nTesting strcmp:\nEnter another string: ");
            fgets(b, sizeof(b), stdin);
            removeNewline(b);

            int cmp = my_strcmp(str, b);
            if(cmp == 0)
                printf("Strings are equal\n");
            else
                printf("Strings are NOT equal\n");
            break;
        }

        default:
            printf("Invalid choice\n");
    }

    return 0;
}