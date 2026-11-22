int numJewelsInStones(char* jewels, char* stones) {
    int count = 0;
    for (int i = 0; stones[i]; i++) {
        for (int j = 0; jewels[j]; j++) {
            if (stones[i] == jewels[j]){
                count++;
                break;
            }
        }
    }
    return count;
}