class Solution {
public:
    double myPow(double x, int n) {
        double sum=1 ;
        long binForm = n;
        if(x==1) return 1;
        else if(x==0) return 0;
        else if(n==0) return 1;
        else if(n==1) return x;
        else{  
        if(n<0){
            x = 1/x;
            binForm = -binForm;
        }
        while(binForm>0){
            if(binForm%2==1){
                sum = sum * x;
                x = x*x;
                binForm = binForm / 2;
            }
            else {
                x= x*x;
            binForm = binForm/2;
            }
        }
        }
        return sum;
    }
};