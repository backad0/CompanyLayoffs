#include <iostream>
#include <algorithm>

int main() {
    int numOfEmpl, numOfLayoffs, index;
    std::cin >> numOfEmpl >> numOfLayoffs;
    long long employers[numOfEmpl];
    for (int i = 0; i<numOfEmpl; i++){
        std::cin >> employers[i];
    }
    /*long long highestScores[numOfLayoffs];
    for (int i = 0; i<numOfLayoffs;i++){
        std::cin >> highestScores[i];
    }*/
    long long sums[numOfEmpl];
    sums[0] = employers[0];
    for (int i = 1; i<=numOfEmpl; i++){
        sums[i] = sums[i-1]+employers[i];
    }
    for (int i = 0; i<numOfEmpl; i++){
        //std::cout << "sum"<<i<<" = " << sums[i] << " ";
    }
    std::sort(employers, employers+numOfEmpl);
    long long score;
    //std::cout << std::endl;
    while (numOfLayoffs--){
        std::cin >> score;
        for(int i=0;i<numOfEmpl;i++){
            if(employers[i]>score){
                index = i;
                break;
            }
        }
        //std::cout << "index = " << index << std::endl;

        if(index>=1) std::cout << sums[index-1]+(score*(numOfEmpl-index)) << std::endl;
        else std::cout << score*numOfEmpl << std::endl;
    }
    return 0;
}
