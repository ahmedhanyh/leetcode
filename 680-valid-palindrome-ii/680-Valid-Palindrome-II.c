bool validPalindrome(char *s) {
	int length, left, right;
	int diffLeft, diffRight;
	length = strlen(s);
	left = 0;
	right = length - 1;
	while (left < right && s[left] == s[right]) {
		left++; right--;
	}
	if (left >= right) {
		return true;
	} else {
        // skip char on the left
		diffLeft = left + 1;
		diffRight = right;
		while (diffLeft < diffRight && s[diffLeft] == s[diffRight])
			diffLeft++, diffRight--;
		if (diffLeft >= diffRight) return true;
        
        // skip char on the right
		diffLeft = left;
		diffRight = right - 1;
		while (diffLeft < diffRight && s[diffLeft] == s[diffRight])
			diffLeft++, diffRight--;
		if (diffLeft >= diffRight) return true;
	}
	return false;
}
