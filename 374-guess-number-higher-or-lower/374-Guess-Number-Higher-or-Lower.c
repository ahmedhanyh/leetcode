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
    int min = 1, max = n;
    int myGuess = 0;
	while (true) {
        myGuess = min + (max - min) / 2;
        if (guess(myGuess) < 0) {
            max = myGuess - 1;
        } else if (guess(myGuess) > 0) {
            min = myGuess + 1;
        } else {
            break;
        }
    }
    return myGuess;
}