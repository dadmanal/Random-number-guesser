#include <iostream>
#include <random>

int num{};

int rndm() {
    int min = 1;
    int max = 100;
    
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(min, max);
    
    return distrib(gen);
}

int easy() {
    int randomValue = rndm();
    
    for(int i = 0; i <= 10; i++) {
        std::cout << "Enter your guess: ";
        std::cin >> num;
        
        if (num == randomValue) {
            std::cout << "Congratulations! You guessed the correct number in " << i+1 << " attempts." << std::endl;
            break;
        } else {
            if(num < randomValue) {
                std::cout << "Incorrect! The number is greater than " << num << std::endl;
            } else {
                std::cout << "Incorrect! The number is less than " << num << std::endl;
            }
        }
    }
    return 0;
}

int medium() {
    int randomValue = rndm();
    
    for(int i = 0; i <= 5; i++) {
        std::cout << "Enter your guess: ";
        std::cin >> num;
        
        if (num == randomValue) {
            std::cout << "Congratulations! You guessed the correct number in " << i+1 << " attempts." << std::endl;
            break;
        } else {
            if(num < randomValue) {
                std::cout << "Incorrect! The number is greater than " << num << std::endl;
            } else {
                std::cout << "Incorrect! The number is less than " << num << std::endl;
            }
        }
    }
    return 0;
}

int hard() {
    int randomValue = rndm();
    
    for(int i = 0; i <= 3; i++) {
        std::cout << "Enter your guess: ";
        std::cin >> num;
        
        if (num == randomValue) {
            std::cout << "Congratulations! You guessed the correct number in " << i+1 << " attempts." << std::endl;
            break;
        } else {
            if(num < randomValue) {
                std::cout << "Incorrect! The number is greater than " << num << std::endl;
            } else {
                std::cout << "Incorrect! The number is less than " << num << std::endl;
            }
        }
    }
    return 0;
}

int main() {
    int choice;
    std::cout << "Please select the difficulty level: \n"
              << "1. Easy (10 chances)\n"
              << "2. Medium (5 chances)\n"
              << "3. Hard (3 chances)\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    
    if(choice == 1) {
        easy();
    } else if(choice == 2) {
        medium();
    } else if(choice == 3) {
        hard();
    } else {
        std::cout << "Invalid choice! Please select 1, 2, or 3." << std::endl;
    }
    
    return 0;
}
