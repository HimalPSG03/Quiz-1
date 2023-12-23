#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool checkAnagram(char *s1, char *s2) {
    if (strlen(s1) != strlen(s2)) {
        return false;
    }

    int count[256] = {0};
    int i;

    for (i = 0; s1[i] != '\0'; i++) {
        count[s1[i]]++;
    }

    for (i = 0; s2[i] != '\0'; i++) {
        count[s2[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    char *s = "anagram";
    char *t = "nagaram";
    printf("Result: %s\n", checkAnagram(s, t) ? "true" : "false");
    return 0;
}

