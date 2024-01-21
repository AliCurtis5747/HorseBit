//This game takes one speed value and an angle. Assuming the horses are on a linear track, which horse has the higher speed along the x axis. 

#include <iostream>
#include <stdio.h> 
#include <math.h>
#include <string>

#define PI 3.14159265

int main()
{   
    int horse1, horse2;
    double angle1 = 0;
    double angle2 = 0;
    std::string answer; 

    while (true) {
        std::cout << "Enter the speed of Horse1\n";
        std::cin >> horse1;
        std::cout << "Enter the speed of Horse2\n";
        std::cin >> horse2;

        std::cout << "Enter the starting angle of Horse1\n";
        std::cin >> angle1;
        std::cout << "Enter the starting angle of Horse2\n";
        std::cin >> angle2;

        double horse1x = horse1 * cos(angle1 * PI / 180);
        printf("Horse1 is going %f m/s along the x axis\n", horse1x);
        double horse2x = horse2 * cos(angle2 * PI / 180);
        printf("Horse2 is going %f m/s along the x axis\n", horse2x);

        if (horse2x > horse1x) {
            printf("Horse2 is the winner! ");
        }
        else if (horse2x < horse1x) {
            printf("Horse1 is the winner! ");
        }
        else if (horse2x == horse1x) {
            printf("The horses are tied! ");
        }

        std::cout <<"Would you like to play again? y/n \n";
        std::cin >> answer;
        std::cout << "\n";
        if (answer == "n") {
            exit(0);
        }
    }

    
}

