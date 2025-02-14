class ProductOfNumbers {
public:
    vector<int> values;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        values.push_back(num);
    }
    
    int getProduct(int k) {
        int product=1;
        for(int i=0;i<k;i++){
            product *= values[values.size()-i-1];
        }

        return product;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */