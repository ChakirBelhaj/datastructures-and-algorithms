class Solution {
public:
    bool checkUsedNumbers(vector<int>& numbers, int value){
        for(int i = 0; i < numbers.size(); i++){
            if (numbers.at(i) == value)
                return true;
        }
        return false;
    }
    
    int findLucky(vector<int>& arr) {
        int luckyNumber = -1;
        vector<int> usedNumbers;
        
        for(int i = 0; i < arr.size(); i++){
            int luckyNumberCount = 1;
            
            if(checkUsedNumbers(usedNumbers,arr.at(i))){
                continue;
            }
            
            for(int j = i + 1; j < arr.size(); j++){
                if (arr.at(i) == arr.at(j)){
                    luckyNumberCount++;
                }
            }
            
            if(luckyNumberCount == arr.at(i) && arr.at(i) > luckyNumber)                
                luckyNumber = arr.at(i);
            
            usedNumbers.push_back(arr.at(i));
                
        }
        
        return luckyNumber;
    }
};