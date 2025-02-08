class NumberContainers {
public:
    
    unordered_map<int, set<int>> numInd;
    unordered_map<int, int> indNum;
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        int toRep = -1;
        if(indNum.find(index)!=indNum.end()){ 
            toRep=indNum[index];
            numInd[toRep].erase(index);
            }
        indNum[index] = number;
        numInd[number].insert(index);

        
    }
    
    int find(int number) {
        if(numInd.find(number)==numInd.end() || numInd[number].size()==0) return -1;
        else return *(numInd[number].begin());
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */