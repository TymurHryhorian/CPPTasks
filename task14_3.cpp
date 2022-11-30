#include <iostream>
#include <fstream>
#include <bits/stdc++.h> 
#include <string>

void reverse_words(std::string word_list){
    int start = 0;
    std::string temp, ret;
    for(int i = 0; i <= word_list.length(); i++){
        if(word_list[i] == ' ' || word_list[i] == ',' || word_list[i] == '.' || word_list[i] == '!' || word_list[i] == '?'){
            if(word_list[i-1] != ' ' && word_list[i-1] != ',' && word_list[i-1] != '.' && word_list[i-1] != '!' && word_list[i-1] != '?'){
                temp = word_list.substr(start, i-start);
                reverse(temp.begin(), temp.end());
                ret.append(temp);
            }
            ret += word_list[i];
            start = i + 1;
        }
    }
    
    std::ofstream MyFile("example2.txt");
    MyFile << ret;
    MyFile.close();
}

int main(){
    std::string line;
    std::ifstream myfile("example.txt");
    if (myfile.is_open()){
        getline(myfile, line);
        reverse_words(line);
        myfile.close();
    }
}