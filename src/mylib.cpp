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


void PrintLine(char c, int nbchar)
{  
    for(int i = 0; i < nbchar; i++)
    {
        std::cout << c;
    }
    std::cout << std::endl;
}

void formeCreuse()
{
  int n = 0;

    std::cout <<"Please enter the amount of lines you want printed: ";
std::cin >>n;

for (int i = 0; i < n; i++)
{
    printLine();
}

}

void printLine()
{
    std::cout <<"**************"<< std::endl;
}

float distanceManhattan(Point2D p1, Point2D p2)
{
        return 0.0f;
}

  void Vectors() 
 {
   int x = 0;
    int y = 0;
 }
  

float distanceEuclidienne(Point2D p1, Point2D p2)
{

    return std::sqrt(pow(p1.x + p2.x,2) + pow(p1.y - p2.y,2));
}

void plusProcheVoisin(std::vector<Point2D> points, Point2D P, int dist)
{

}

void plusOuMoins()
{

}