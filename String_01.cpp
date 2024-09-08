class solution{
    private: 
       swap(string i, string j){
        int temp = i;
        i = j;
        j = temp;
       }
       
    public:
       void reverseString(vector<char> &string){
        int n = string.size();
        int start = 0;
        int end = n-1;
        while(start < end){
            swap(string[start], string[end]);
            start++;
            end--;
        }
         
        return string; 

       }
};

