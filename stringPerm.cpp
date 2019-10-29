#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

typedef unordered_map<char, int> StringHash;

StringHash hashString(string s) {
    StringHash h;
    for (int i=0; i < s.size(); ++i) {
        if (h.count(s[i]) == 0) 
            h[s[i]] = 1;
        else 
            h[s[i]]++;
    }
    return h;
}

bool traverse(string t, StringHash sh, int& start) {
    while (sh.count(t[start]) != 0) {
        sh[t[start]]--;
        if (sh[t[start]] == 0)
            sh.erase(t[start]);
        if (sh.size() == 0) 
            return true;
        ++start;
    }
    return false;
}

bool stringPerm(string s, string t) {
    StringHash sh = hashString(s);
    int index = 0;
    while(index < t.size()) {
        while(sh.count(t[index]) == 0)
            index++;
        if (traverse(t, sh, index)) 
            return true; 
        index++;
    }
    return false;
}

int main() {
    /*cout << "Expected: 1" << endl;
    cout << "Actual: " << stringPerm("abo","eidbaooo") << endl;
    cout << "Expected: 0" << endl;
    cout << "Actual: " << stringPerm("ab", "eidboaoo") << endl;
    cout << "Expected: 1" << endl;
    cout << "Actual: " << stringPerm("abooo","eidbaoooo") << endl;*/
    cout << "Expected: 1" << endl;
    cout << "Actual: " << stringPerm("cdabbabooo","cdbbaaboooeidbaoooo") << endl;
    return 0;
}
