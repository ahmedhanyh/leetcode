char* addStrings(char* num1, char* num2) {
    if (!*num1 || !*num2) return NULL;

    int num1Len = strlen(num1);
    int num2Len = strlen(num2);

    int resultLen = (num1Len > num2Len ? num1Len : num2Len) + 1;
    char* result = calloc(resultLen + 1, sizeof(char));
    int current = resultLen - 1;

    int digit1, digit2;
    int sum, carry = 0;
    
    int i = num1Len - 1, j = num2Len - 1;
    while (i >= 0 || j >= 0) {
        digit1 = i < 0 ? 0 : num1[i] - '0';
        digit2 = j < 0 ? 0 : num2[j] - '0';
        sum = digit1 + digit2 + carry;
        result[current--] = '0' + sum % 10;
        carry = sum / 10;
        if (i <= 0 && j <= 0) result[current--] = '0' + carry;
        i--, j--;
    }

    if (result[0] - '0' == 0) {
        for (int i = 0; i < resultLen; i++) {
            result[i] = result[i + 1];
        }
    }

    return result;
}