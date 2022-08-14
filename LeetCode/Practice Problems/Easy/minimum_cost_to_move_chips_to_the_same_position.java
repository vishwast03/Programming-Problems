// If we gather all the chips at an odd positon:
//     The chips which are already at some odd postion will move without any cost
//     The chips which are at some even position will take a cost of 1 to move to the odd position

// In other case, if we gather all the chips at an even position:
//     The chips which are already at some even postion will move without any cost
//     The chips which are at some odd position will take a cost of 1 to move to the even position

// We can calculate the total cost involved in both the case saperately
// Then the minimum the both costs will be the result (the minimum cost to move all the chips to the same position).

class Solution {
    public int minCostToMoveChips(int[] position) {
        int oddCost = 0, evenCost = 0;
        for(int i = 0; i < position.length; i++) {
            if(position[i] % 2 == 0) {
                oddCost++;    // In case of even position, any chip at odd position will incur cost
            }
            else {
                evenCost++;    // In case of odd position, any chip at even position will incur cost
            }
        }
        
        return Math.min(oddCost, evenCost);
    }
}