class NumberContainers {
    private:
    std::map<int, int> indexToNum;
    std::map<int, std::set<int>> numToIndices;

public:
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
      if (indexToNum.count(index)) {
            int oldNum = indexToNum[index];
            numToIndices[oldNum].erase(index);
            if (numToIndices[oldNum].empty()) {
                numToIndices.erase(oldNum);
            }
        }

        indexToNum[index] = number;
        numToIndices[number].insert(index);  
    }
    
    int find(int number) {
         return numToIndices.count(number) ? *numToIndices[number].begin() : -1; 
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */