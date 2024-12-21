class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<std::string> words;
    int i = 0;
    std::string temp = "";
    
    // Split sentence into words
    while (i < sentence.size()) {
        if (sentence[i] == ' ') {
            words.push_back(temp);
            temp = "";
        } else {
            temp += sentence[i];
        }
        i++;
    }
    words.push_back(temp); 

    // Search for the word with the prefix match
    for (int j = 0; j < words.size(); j++) {
        if (words[j].substr(0, searchWord.size()) == searchWord) {
            return j + 1; // Return 1-based index
        }
    }

    return -1;
    }
};