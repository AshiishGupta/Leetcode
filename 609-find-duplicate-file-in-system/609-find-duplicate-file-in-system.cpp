class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> result;
        
        for(auto path:paths){
            stringstream ss(path);
            string dir;
            string file;
            getline(ss,dir,' ');
            while(getline(ss,file,' ')){
                string filename=dir+ '/' + file.substr(0,file.find('('));
                string filecontent=file.substr(file.find('(')+1,file.find(')')-file.find('(')-1);
                mp[filecontent].push_back(filename);
            }
        }
        
        for(auto file:mp){
            if(file.second.size()>1){
                result.push_back(file.second);
            }
        }
        
        
        return result;
        
    }
};