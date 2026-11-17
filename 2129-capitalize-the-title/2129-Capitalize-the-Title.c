char* capitalizeTitle(char* title) {
    int length = strlen(title);
    for (int i = 0, j = 0; j <= length; j++) {
        if (title[j] == '\0' || title[j] == ' ') {
            if (j - i > 2) {
                title[i] = toupper(title[i]);
            }
            i = j + 1;
        } else {
            title[j] = tolower(title[j]);
        }
    }
    return title;
}