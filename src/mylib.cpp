#include "mylib.hpp"

#include <random>


int randomInt(int min, int max)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    return dis (gen);
}

void formeCreuse(int x, int y)
{

}

float distanceManhattan(Point2D p1, Point2D p2)
{
    return 0.0f;
}


float distanceEuclidienne(Point2D p1, Point2D p2)
{
    return 0.0f;
}

void plusProcheVoisin(std::vector<Point2D> points, Point2D P, int dist)
{

}

void plusOuMoins()
{

}