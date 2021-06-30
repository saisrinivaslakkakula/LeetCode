#include <iostream>
#include "Arrays/LC_118_Pascal_Triangle.h"

int main() {
    vector<vector<int>> numrows = generate(7);
    for(int i=0;i<numrows.size();i++){
        for(int j=0;j<numrows.at(i).size();j++){
            std::cout<< numrows[i][j] << " ";
        }
        std::cout<<"\n";
    }

}
