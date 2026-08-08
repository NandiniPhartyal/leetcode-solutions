class Solution {
public:
    int maxArea(vector<int>& height) {
        int leftPointer = 0;
        int rightPointer = height.size() - 1;
      
        int maxAreaFound = 0;
        while (leftPointer < rightPointer) {
            
            int currentHeight = min(height[leftPointer], height[rightPointer]);
            int currentWidth = rightPointer - leftPointer;
            int currentArea = currentHeight * currentWidth;
            maxAreaFound = max(maxAreaFound, currentArea);
          
            if (height[leftPointer] < height[rightPointer]) {
                leftPointer++;
            } else {
                rightPointer--;
            }
        }
      
        return maxAreaFound;
    }
};