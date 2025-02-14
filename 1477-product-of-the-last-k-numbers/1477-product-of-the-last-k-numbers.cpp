class ProductOfNumbers {
public:
    vector<pair<long long, int>> prod;
    vector<int> v;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        if(num==0){
            if(v.size()==0){
                v.push_back(1);
                prod.push_back({1,0});
            }
            else{
                v.push_back(1);
                prod.push_back({1, v.size()-1});
            }
        }
        else{
            if(v.size()==0){
                v.push_back(num);
                prod.push_back({num, -1});
            }
            else{
                v.push_back(num);
                prod.push_back({num*prod.back().first, prod.back().second});
            }
        }
    }
    
    int getProduct(int k) {
        int n = v.size();
        auto nth = prod[n-1];
        if(nth.second<=n-1 && nth.second>n-k-1) return 0;
        if(n==k) return prod[n-1].first;
        return prod[n-1].first/prod[n-k-1].first;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */