class Solution{
  public:
    int middle(int A, int B, int C){
        int x,y,z; 
        x=A-B;
        y=B-C;
        z=C-A;
        if(x*y>0) return B;
        else if(x*z>0) return A;
        else return C;
        
    }
};