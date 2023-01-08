#include <iostream>

int main() {
    int numOfEmpl, numOfLayoffs;
    std::cin >> numOfEmpl >> numOfLayoffs;
    if (numOfEmpl<numOfLayoffs) return 1;
    int employers[numOfEmpl];
    for (int i = 0; i<numOfEmpl; i++){
        std::cin >> employers[i];
    }
    int highestScores[numOfLayoffs];
    for (int i = 0; i<numOfLayoffs;i++){
        std::cin >> highestScores[i];
    }
    int sum = 0;
    for (int i = 0; i<numOfLayoffs; i++){
        for (int j = 0; j < numOfEmpl; j++){
            if (employers[j]>highestScores[i]){
                employers[j] = highestScores[i];
            }
            sum +=employers[j];
        }
        std::cout << sum << std::endl;
        sum = 0;
    }
    return 0;
}
