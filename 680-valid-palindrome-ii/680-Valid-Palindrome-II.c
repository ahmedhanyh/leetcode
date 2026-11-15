bool isPalindrome(char *s, int l, int r) {
    while (l < r && s[l] == s[r])
			l++, r--;
    if (l >= r) return true;
    return false;
}

bool validPalindrome(char *s) {
	int left, right;
	left = 0;
	right = strlen(s) - 1;
	while (left < right && s[left] == s[right]) {
		left++; right--;
	}
	if (left >= right) {
		return true;
	} else {
		return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
	}
	return false;
}
