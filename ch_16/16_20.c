enum {NORTH, SOUTH, EAST, WEST } direction;

int x, y;

int main(void) {

	switch (direction) {
	case NORTH:
		y--;
		break;
	case SOUTH:
		y++;
		break;
	case EAST:
		x++;
		break;
	case WEST:
		x--;
		break;
	default:
		break;
	}

	return 0;
}