class Solution { 
    public static long maxSum(int n, int x, int[] arr) { 
        // code here 
          long maxSetBit = Long.MIN_VALUE; 
        long maxUnsetBit = Long.MIN_VALUE; 
        long mask = 1L << (x - 1);  // Create a mask with 1 at the x-th bit position 
 
        for (int num : arr) { 
            if ((num & mask) != 0) {  // If x-th bit is set 
                maxSetBit = Math.max(maxSetBit, num); 
            } else {  // If x-th bit is unset 
                maxUnsetBit = Math.max(maxUnsetBit, num); 
            } 
        } 
 
        // If we couldn't find a pair with distinct x-th bit, return -1 
        if (maxSetBit == Long.MIN_VALUE || maxUnsetBit == Long.MIN_VALUE) { 
            return -1; 
        } 
 
        return maxSetBit + maxUnsetBit; 
 
    } 
}