#ifndef header_H
#define header_H

struct Triangle {
	double a, b, c;
	void Getstruct();
	void Increase(double k);
	void Decrease(double k);
	double Perimetr();
	double Area();
	void Corners( double *corn);
};

#endif