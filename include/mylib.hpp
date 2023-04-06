#ifndef _MYLIB_HPP_
#define _MYLIB_HPP_

#include <iostream>
#include <vector>

#include "Point2D.hpp"

int randomInt(int min, int max);

// @brief Function that prints hollow objects
void formeCreuse();

// @brief Function that takes two 2D points
float distanceEuclidienne(Point2D p1, Point2D p2);

float distanceManhattan(Point2D p1, Point2D p2);

void plusProcheVoisin(std::vector<Point2D> points, Point2D P, int dist);

void plusOuMoins();

#endif // _MYLIB_HPP_