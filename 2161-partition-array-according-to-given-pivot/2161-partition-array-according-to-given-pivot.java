class Solution {
    public int[] pivotArray(int[] nums, int pivot) {
        List<Integer> ls= new ArrayList<>();
        List<Integer> eq= new ArrayList<>();
        List<Integer> gr= new ArrayList<>();

        for(int num: nums){
            if(num<pivot){
                ls.add(num);
            }
            else if(num>pivot){
                gr.add(num);
            }
            else if(num==pivot){
                eq.add(num);
            }
        }

        int[] result= new int[nums.length];
        int index=0;

        for(int num:ls){
            result[index++]= num;
        }
        for(int num:eq){
            result[index++]= num;
        }
        for(int num:gr){
            result[index++]= num;
        }
        return result;
    }
}