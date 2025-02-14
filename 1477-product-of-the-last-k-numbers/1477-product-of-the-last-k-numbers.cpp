int prod[40000];
class ProductOfNumbers {
public:
int n=1;
    ProductOfNumbers() {
      prod[0]=1;  
    }
    
    void add(int num) {
     if(num==0) n=1;
     else{
        prod[n]=prod[n-1]*num;
        n++;
     }   
    }
    
    int getProduct(int k) {
      if(n<=k) return 0;
      return prod[n-1]/prod[n-k-1];  
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */