class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        return true;
    }
};

// Because the number of piles is even, Alice can choose a strategy
// that allows her to keep taking piles from either the even-indexed
// group or the odd-indexed group.
//
// Since the total number of stones is odd, the sums of these two groups
// cannot be equal. Therefore, Alice can choose the group with the larger
// sum and is guaranteed to win.
