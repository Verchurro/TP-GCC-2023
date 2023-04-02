#include "Point2D.hpp"

#include <string>

Point2D::Point2D() : Point2D("unknown",0, 0) { }

Point2D::Point2D(std::string _label, int _x, int _y) : label(_label), x(_x), y(_y) { }

Point2D::Point2D(const Point2D &p) : Point2D(p.label, p.x, p.y) { }
