#include <stdio.h>
#include <stdbool.h>

struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };

int area(struct rectangle r);

struct point center(struct rectangle r);

struct rectangle move(struct rectangle r, int move_x, int move_y);

bool lie_within(struct rectangle r, struct point p);

int area(struct rectangle r) {
	return (r.lower_right.x - r.upper_left.x) * (r.upper_left.y - r.lower_right.y);
}

struct point center(struct rectangle r) {
	struct point p; 
	p.x = (r.lower_right.x + r.upper_left.x) / 2;
	p.y = (r.lower_right.y + r.upper_left.y) / 2; 
	return p;
}

struct rectangle move(struct rectangle r, int move_x, int move_y) {
	r.lower_right.x += move_x;
	r.lower_right.y += move_y;
	r.upper_left.x += move_x;
	r.upper_left.y += move_y;

	return r;
}

bool lie_within(struct rectangle r, struct point p) {
	if (r.upper_left.y > p.y && p.y > r.lower_right.y)
		if (r.upper_left.x < p.x && p.x < r.lower_right.x)
			return true;
	return false;
}