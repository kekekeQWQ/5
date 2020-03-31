#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<math.h>
#define MAX 99999
using namespace std;
double closestPoints(double x[], double y[], int n) {
	double x1, x2, y1, y2;
	double dist, minDist = MAX;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++) {
			dist = (x[i] - x[j])*(x[i] - x[j]) + (y[i] - y[j])*(y[i] - y[j]);
			if (dist < minDist) {
				minDist = dist;
				x1 = x[i]; y1 = y[i];
				x2 = x[j]; y2 = y[j];
			}
		}
	cout << "最近点对为：(" << x1 << "," << y1 << ")-(" << x2 << "," << y2 << ")";
	return minDist;
}
int main() {
	double x[100], y[100];
	double minDist;
	int n;
	cout << "输入点的个数：\n";
	cin >> n;
	cout << "输入点集的坐标：\n";
	for (int i = 0; i < n; i++)
		cin >> x[i] >> y[i];
	minDist = closestPoints(x, y, n);
	cout << "其距离为：\n" << sqrt(minDist);
	return 0;
}