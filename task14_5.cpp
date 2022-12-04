#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void createFile(int n){
    std::ofstream MyFile("example.txt");

    for(int i = 0; i < n; i++){
        std::string temp;
        std::cout << "Enter Surname, Year, Group, mark1,..., markn: ";
        std::cin >> temp; 
        MyFile << temp << "\n";
    }
    MyFile.close();
}

void findWorstStudent(std::string filename){
    std::ifstream MyFile(filename);
    std::string temp, min_surname;
    float min_score = 1000;
    while (getline (MyFile, temp)) {
        int start = 0, count = 0;
        float temp_score = 0;
        std::string c, temp_surname;
        for(int j = 0; j <= temp.length(); j++){
            if(temp[j] == ',' || j == temp.length()){
                c = temp.substr(start, j-start); 
                start = j+1;
                count++;
                if(count == 1){
                    temp_surname = c;
                }
                if(count > 3){
                    temp_score += stoi(c);
                }
            }
        }   
        temp_score /= count - 3; 
        if(temp_score < min_score){
            min_score = temp_score;
            min_surname = temp_surname;
        }
    }
    std::cout << min_surname << " " << min_score;
    MyFile.close();
}

int main(){
    int n = 5;
    createFile(n);
    findWorstStudent("example.txt");
}