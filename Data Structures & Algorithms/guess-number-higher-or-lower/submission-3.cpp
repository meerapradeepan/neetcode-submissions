/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int range (int lower, int higher){
        // std::cout << "lower is " << lower << ", higher is " << higher << std::endl;
        if (lower == higher) { return lower; }

        int mid = (higher - lower) / 2 + lower;
        // std::cout << "mid is " << mid << std::endl;
        int g = guess (mid);
        if (g == 1){
            return range(mid+1, higher);
        } else if (g == -1){
            return range (lower, mid-1);
        } else { return mid; }
    }

    int guessNumber(int n) {
        return range(1, n);
    }
};