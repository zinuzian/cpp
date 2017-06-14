//first main function
#include <stdio.h>
#include <iostream>
#include <fstream>

struct Vector2D {
	int x;
	int y;

	void print() {
		printf("%d %d", x, y);
	}
};

std::ostream &operator << (std::ostream &stream, Vector2D obj) {
	stream << obj.x << " " << obj.y << std::endl;

	return stream;
}

void main() {

	Vector2D my_vector;

	my_vector.x = 1;
	my_vector.y = 2;

	FILE *of = fopen("cstyle.txt", "w");
	fprintf(of, "%d %d", my_vector.x, my_vector.y);
	fclose(of);

	//my_vector.print();


	/*printf("This is c style!");

	std::cout << "This is c++ style!" << std::endl;*/

	std::cout << my_vector << std::endl;

	std::ofstream ofile("cppstyle.txt");
	ofile << my_vector << std::endl;
}