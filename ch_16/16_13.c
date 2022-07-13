struct point { int x, y; };

struct shape {
	int shape_kind;
	struct point center; 
	union {
		struct {
			int height, width;
		}rectangle;
		struct {
			int radius;
		}circle;
	}u;
}s;

// a는 legal
// b는 legal
// c는 s.u.rectangle.height
// d는 legal
// e는 s.u.circle.radius = 5;
// f는 s.u.circle.radius = 5;