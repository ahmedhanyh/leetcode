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
    srand(time(NULL));
    int min = 1, max = n;
    int myGuess;
    while (1) {
        // generate a random number (guess) between min and max
        myGuess = (rand() % (max - min + 1)) + min;
        // if guess is higher than pick
        if (guess(myGuess) == -1)
            max = myGuess - 1;
        // else if guess is lower than pick
        else if (guess(myGuess) == 1)
            min = myGuess + 1;
        else break;
    }
    return myGuess;
}