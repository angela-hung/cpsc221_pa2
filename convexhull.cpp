#include "convexhull.h"


// uses a sorting algorithm of your choice (must be fully implemented by you)
// to sort the points in v to satisfy the following criteria:
// 1. v[0] must contain the point with the smallest y-coordinate.
//      If multiple points have the same smallest y-coordinate, v[0]
//      must contain the one among those with the smallest x-coordinate.
// 2. The remaining indices i contain the points, sorted in increasing order
//      by the angle that the point forms with v[0] and the x-axis. THat is,
// 	one of the legs of the angle is represened by the line through v[0] and
//	v[i], and the other is the x-axis.
void sortByAngle(vector<Point>& v){
  findLowestY(v);
  Point lyp = v[0];
  vector<double> slopes = slopes(v);

  for (int i = 0; int < v.size() - 1; i++){
    int index = i;
    int min = slopes[i];

    //find index of min from i-j
    for(int j = i; j < v.size(); j++){
      if(slopes[j] < min){
        min = slopes[j];
        index = j;
      }
    }
    double temp_slope = slopes[i];
    slopes[i] = slopes[index];
    slopes[index] = temp_slope;

    Point temp = v[i];
    v[i] = v[index];
    v[index] = temp;
  }
}

vector<double> slopes (vector<Point>){
  vector <double> slopes;
  for(int i = 0; i < v.size(); i++)+{
    slopes.push_back(slope(v[0],v[i]));
    return slopes;
  }
}

double slope(Point p1, Point p2){
    return abs((p2.y - p1.y) / (p2.x - p1.x));
}

// determines whether a path from p1 to p2 to p3 describes a counterclockwise turn
bool ccw(Point p1, Point p2, Point p3){
    return false;
}

// returns a vector of points representing the convex hull of v
// if c is the vector representing the convex hull, then c[k], c[k+1]
// is an edge in the convex hull, for all k in 0 to n-1, where n is the
// number of points in the hull. c[n-1],c[0] is also an edge in the hull.
// The returned vector should be a subset of v
// Input: v - a vector of points in arbitrary order
vector<Point> getConvexHull(vector<Point>& v){
    vector<Point> points;
    return points;
}

// You may add declarations for some of your own useful functions here,
// BUT DO NOT MODIFY ANY OF THE FUNCTIONS ABOVE




void findLowestY(vector<Point> &v){
    Point ret = v[0];
    int index = 0;

    for (int i = 1; i < v.size(); i++){
        if (v[i].y < ret.y){
            ret = v[i];
            index = i;
        }

        if (v[i].y == ret.y && v[i].x < ret.x){
            ret = v[i];
            index = i;
        }
    }

    Point temp = v[0];
    v[0] = ret;
    v[index] = temp;
}
