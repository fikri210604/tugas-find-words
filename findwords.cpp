#include <bits/stdc++.h>

using namespace std;

class FindWords{
    public:
        vector<string> findWords(vector<string> words){
            vector<string> result;
            for(int i = 0; i < words.size(); i++){
                if(isupper(words[i][0])){
                    result.push_back(words[i]);
                }
            }
            return result;
        }
    private:
        bool isupper(char c){
            return c >= 'A' && c <= 'Z';
        }
        

};