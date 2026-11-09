class Solution {
    public int[] arrayRankTransform(int[] arr) {
        int[] sorted = arr.clone();
        Arrays.sort(sorted);
        int n = 0;
        for (int x : sorted) {
            if (n == 0 || sorted[n - 1] != x) {
                sorted[n++] = x;
            }
        }
        int[] unique = Arrays.copyOf(sorted, n);
        for (int i = 0; i < arr.length; i++) {
            arr[i] = Arrays.binarySearch(unique, arr[i]) + 1;
        }
        return arr;
    }
}