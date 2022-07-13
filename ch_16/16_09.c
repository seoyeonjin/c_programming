#include <stdio.h>
#include <stdbool.h>

struct color {
	int red; 
	int green; 
	int blue;
};

struct color make_color(int red, int green, int blue);

int getRed(struct color c);

bool equal_color(struct color color1, struct color color2);

struct color brighter(struct color c);

struct color darker(struct color c);

struct color make_color(int red, int green, int blue) {
	struct color c;
	c.red = red < 0 ? 0 : red > 255 ? 255 : red; 
	c.green = green < 0 ? 0 : green > 255 ? 255 : green;
	c.blue = blue < 0 ? 0 : blue > 255 ? 255 : blue;
	return c;
}

int getRed(struct color c) {
	return c.red;
}

bool equal_color(struct color color1, struct color color2) {
	if (color1.red == color2.red && color1.green == color2.green && color1.blue == color2.blue)
		return true;
	return false;
}

struct color brighter(struct color c) {
	struct color result;
	if (c.red == 0 && c.blue == 0 && c.green == 0) {
		result.red = 3;
		result.blue = 3;
		result.green = 3;
		return result;
	}

	if (c.red > 0 && c.red < 3)
		c.red = 3;
	if (c.blue > 0 && c.blue < 3)
		c.blue = 3;
	if (c.green > 0 && c.green < 3)
		c.green = 3; 

	result.red = (c.red / 0.7) > 255 ? 255: c.red/0.7;
	result.blue = (c.blue / 0.7) > 255 ? 255 : c.blue / 0.7;
	result.green = (c.green / 0.7) > 255 ? 255 : c.green / 0.7;

	return result;
}

struct color darker(struct color c) {
	struct color result;
	if (c.red == 0 && c.blue == 0 && c.green == 0) {
		result.red = 3;
		result.blue = 3;
		result.green = 3;
		return result;
	}

	if (c.red > 0 && c.red < 3)
		c.red = 3;
	if (c.blue > 0 && c.blue < 3)
		c.blue = 3;
	if (c.green > 0 && c.green < 3)
		c.green = 3;

	result.red = (c.red * 0.7) > 255 ? 255 : c.red * 0.7;
	result.blue = (c.blue * 0.7) > 255 ? 255 : c.blue * 0.7;
	result.green = (c.green * 0.7) > 255 ? 255 : c.green * 0.7;

	return result;
}