// __hello__world

string reverseWords(string s){
    string result;
    int i = 0;
    int n = s.length();

    while(i<n){
        while(i<n && s[i]==' ') i++;
        if(i>=n) {
            break;
        }
        int j = i+1;
        while(j<n && s[i]!=' ') j++;

        string sub = s.substr(i,j-i);
        if(result.length() ==0) result = sub;
        else result = sub+ " " + result;
        i=j+1;
    }
    return result;
}


// Hello World

// olleH dlroW

// World Hello

void reverseWords(string &s){
    int start = 0;
    for(int end= 0;end<s.length();end++){
        if(s[end]==' '){
            reverse(s.begin()+start, s.begin()+end);
            start = end+1;
        }
    }
    reverse(s.begin()+start,s.end());
    reverse(s.begin(),s.end());
}