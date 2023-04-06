#include "Point2D.hpp"

#include <string>

Point2D::Point2D() : Point2D(0, 0) { }

Point2D::Point2D( int _x, int _y, std::string _label) : x(_x), y(_y), label(_label) { }

Point2D::Point2D(const Point2D &p) : Point2D(p.x, p.y, p.label) { }
