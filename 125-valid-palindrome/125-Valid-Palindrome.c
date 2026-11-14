bool isPalindrome(char* s) {
    char *t = s;
    while (*t) t++;
    while (s < t) {
        while (s < t && !isalnum(*s)) s++;
        while (s < t && !isalnum(*t)) t--;
        if (s < t && tolower(*s) != tolower(*t))
            return false;
        s++, t--;
    }
    return true;
}