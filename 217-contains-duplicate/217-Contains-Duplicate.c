struct element {
    int num;
    struct element *next;
};

int hash(int n) {
    if (n < 0) n = -n;
    return n % 100000;
}

bool containsDuplicate(int* nums, int numsSize) {
    int hashcode;
    struct element *table[100000] = { 0 };
    struct element *node;
    for (int i = 0; i < numsSize; i++) {
        hashcode = hash(nums[i]);
        if (table[hashcode]) {
            node = table[hashcode];
            while (node) {
                if (node->num == nums[i])
                    return true;
                node = node->next;
            }
        }
        node = malloc(sizeof(struct element));
        node->num = nums[i];
        node->next = table[hashcode];
        table[hashcode] = node;
    }
    return false;
}