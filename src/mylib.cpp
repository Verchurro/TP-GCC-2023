#include "mylib.hpp"

#include <random>
#include <cmath>

int randomInt(int min, int max)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    return dis (gen);
}

void formeCreuse()
{
     char empty = ' ';
    char character = '*';
    int lines;
    int chars;

    std::cout <<"Please enter the amount of characters you want printed: ";
std::cin >>chars;
 std::cout <<"Please enter the amount of lines you want printed: ";
std::cin >>lines;

for (int i = 0; i < lines; i++)
{
    for (int j = 0; j < chars; j++)
    {
        if (i == 0 || i == lines-1)
        {
            std::cout << character;
        }
        else if (j == 0 || j == chars-1)
        {
            std::cout << character;
        }
        else{
             std::cout << empty;
        }
    } std::cout << std::endl;
}

}

float distanceManhattan(Point2D p1, Point2D p2)
{
    return abs (p1.x - p2.x) + (p1.y - p2.y);
}
  
float distanceEuclidienne(Point2D p1, Point2D p2)
{
    return std::sqrt(pow(p1.x - p2.x,2) + pow(p1.y - p2.y,2));
}

void plusProcheVoisin(std::vector<Point2D> points, Point2D P, int dist)
{
   // Point2D P = Point2D("A", 1, 1);
}

void plusOuMoins()
{
    int min = 1;
    int max = 100;
    int guess, number, tries;
    number = randomInt(1, 100);
    tries = randomInt (5, 15);
    bool PlayAgain = true;

       while(PlayAgain){

       
        std::cout <<"Can you guess which number between 1 and 100 that I'm thinking of? You have " << tries<< " tries! ";
    do
    {
         std::cout << "Enter a number: ";
	     std::cin >> guess;
		 tries++;
         
		if (guess > number)
        {
			std::cout << "Too high! You have "<< --tries<< " tries left!" <<std::endl;
            --tries;
        }
		else if (guess < number)
        {
			std::cout << "Too low! You have "<< --tries<< " tries left!"<<std::endl;
            --tries;
        }
		else
        {
			std::cout << "Correct! You got it in " << tries << " tries!" <<std::endl;
        }
	} 
    while (guess != number);
        
         std::cout << "\nWant to play again (y / n)?" ;

          char answer;
    std::cin >> answer;
    if (tolower(answer) != 'y')
    {
        PlayAgain = false;
    }
      return;
  }
}



   
