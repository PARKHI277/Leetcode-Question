class NumArray {
public:
   vector<int>vec;
    int sum = 0;
public:
    NumArray(vector<int>& nums) 
    {
        this->vec = nums;
        for(int i=0;i<vec.size() ; i++)
        {
            sum += vec[i];
        }
    }
    
    void update(int index, int val) {
        
    
        
        sum -= vec[index];
        vec[index] = val;
        sum += val; 
    }
    
    int sumRange(int left, int right)
    {
        
        int summ = sum;
       
        for(int i=0;i<left;i++)
            summ -= vec[i];
        
        for(int i=right+1 ; i<vec.size();i++)
        {
            summ -= vec[i];
        }
        
        // return summ ie. our answer.
        return summ;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */