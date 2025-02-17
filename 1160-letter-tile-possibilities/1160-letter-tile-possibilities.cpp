class Solution {
public:
 
void backtrack(string& tiles, vector<bool>& visited, int& count) {
    for (int i = 0; i < tiles.size(); i++) {

        if (visited[i]) continue;
        
      
        if (i > 0 && tiles[i] == tiles[i - 1] && !visited[i - 1]) continue;

  
        visited[i] = true;
        count++;
        
      
        backtrack(tiles, visited, count);
        
      
        visited[i] = false;
    }
}

int numTilePossibilities(string tiles) {
    sort(tiles.begin(), tiles.end());  
    vector<bool> visited(tiles.size(), false); 
    int count = 0;
    
    backtrack(tiles, visited, count);
    return count;
}
};