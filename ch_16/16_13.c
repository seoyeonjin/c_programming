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

// a�� legal
// b�� legal
// c�� s.u.rectangle.height
// d�� legal
// e�� s.u.circle.radius = 5;
// f�� s.u.circle.radius = 5;