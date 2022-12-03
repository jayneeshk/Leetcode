class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a=0,b=1,c=2;
        int a1=0,b1=0,c1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==a){
                a1++;
            }
            if(nums[i]==b){
                b1++;
            }
            if(nums[i]==c){
                c1++;
            }
        }
        int r=0;
        int arr[nums.size()];
        for(int i=0;i<a1;i++){
            arr[i]=a;
            r++;
        }
        int q1=r;
        for(int i=r;i<b1+q1;i++){
            arr[i]=b;
            r++;
        }
        int q2=r;
        for(int i=r;i<c1+q2;i++){
            arr[i]=c;
        }
        for(int i =0; i<nums.size(); ++i){
            nums[i] = arr[i];
        }
    }
};
