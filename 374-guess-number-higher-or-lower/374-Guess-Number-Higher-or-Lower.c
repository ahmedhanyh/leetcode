/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guess(int num);

int guessNumber(int n){
    int low, myGuess, high;
    low = 1;
    high = n;
    while (1) {
        myGuess = ((high - low) / 2) + low;
        // if guess is higher than pick
        if (guess(myGuess) == -1)
            high = myGuess - 1;
        // else if guess is lower than pick
        else if (guess(myGuess) == 1)
            low = myGuess + 1;
        else break;
    }
    return myGuess;
}