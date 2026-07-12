class Solution {
    public int splitArray(int[] nums, int m ){
        int s=0;
        int e=0;

        for(int i=0; i< nums.length; i++){ //loops gives max of the array(linear search)
            s = Math.max(s, nums[i]); 
            e+= nums[i];
        }

        while(s<e){
        int mid= s+(e-s)/2;
        //caluculate how many pieces we can divide this into, with the given max sum
        int sum=0;
        int pieces= 1;

        for(int n: nums){
            if(sum+ n> mid)
            {
                //cannot add this in this subarray, make new one
                sum= n;
                pieces++;  
            }
            else{
                sum+=n;
            }
        }
        if (pieces>m){
            s=mid+1;
        }
        else{
            e=mid;
        }
        }
    return e; //s=e
    }
}