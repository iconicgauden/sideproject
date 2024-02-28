int findFirst(string pattern, string text){
    int m = pattern.length(); 
    int n = text.length();
    for (int i = 0; i < n-m; i++){
        int j = 0;
        while(j < m && text[i+j] == pattern[j]){
            j++;
        }
        if (j == m){return i;}
    }
    cout << "No Match Found!"<< endl;
    return -1;
}
vector<int> findAll(string pattern, string text){
    int m = pattern.length(); 
    int n = text.length();
    vector<int> indicies;
    for (int i = 0; i < n-m; i++){
        int j = 0;
        while(j < m && text[i+j] == pattern[j]){
            j++;
        }
        if (j == m){indicies.push_back(i);}
    }
