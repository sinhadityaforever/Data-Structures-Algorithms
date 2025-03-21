class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        unordered_set<string> av(supplies.begin(), supplies.end());
        queue<int> rQ;
        for(int i=0; i<recipes.size(); i++) rQ.push(i);

        vector<string> ans;
        int l =-1;

        while(static_cast<int>(av.size())>l){
            l=av.size();
            int size = rQ.size();
            while(size-- > 0){
                int recipeIndex = rQ.front();
                rQ.pop();
                bool isPossible = 1;
                for(auto it: ingredients[recipeIndex]){
                    if(!av.count(it)){
                        isPossible =0;
                        break;
                    }
                }
                if(!isPossible){
                    rQ.push(recipeIndex);
                } else{
                    av.insert(recipes[recipeIndex]);
                    ans.push_back(recipes[recipeIndex]);
                }
            }
        }
        return ans;
    }

};