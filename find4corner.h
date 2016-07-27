#ifndef _FIND4CORNER_H_
#define _FIND4CORNER_H_

#include <cstdio>
#include <cmath>
#include <vector>
#include "opencv2/core/core.hpp" 
#include "opencv2/highgui/highgui.hpp"  
#include "opencv2/imgproc/imgproc.hpp"
#define brightValue 100
#define kickpoint 10
#define kickdouble 0.2

using namespace std;  
using namespace cv;

void find4cornerHough(Mat src, Mat& mid, Mat& dst);
vector<Point> find4cornerRegression(Mat& src, Mat& dst);
vector<vector<Vec4i>> classifyLine(vector<Vec4i> lines, int r, int c);
void collectData(Mat src, vector<vector<Point>>& Line);
void findLine(vector<Point>& src, double& m, double& k);
void calAveragePoint(vector<Point> src, double& barx, double& bary);
double calSlope(vector<Point> src, double barx, double bary);
void kickOutDataPoint(vector<Point>& src, double m, double k);
double calAverageDouble(vector<double> src);
void kickOutDataDouble(vector<double>& src, double bar);
Point findPointofTwoLine(double m1, double k1, double m2, double k2);

#endif

