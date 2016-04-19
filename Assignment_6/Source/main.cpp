#define _USE_MATH_DEFINES
#include <iostream>
#include <GL/glew.h>
#include "cloth_1_5_glm\cloth_1_5_glm.h"
#include "cloth_1_5_starting_point\cloth_1_5_starting_point.h"

using namespace std;


int main(int argc, char* argv[]) {
	cout << "Cloth simulation:" << endl;
	cout << "0. OpenGL 1.5 (Fixed function pipeline)" << endl;
	cout << "1. OpenGL 1.5 (Fixed function pipeline + GLM)" << endl;
	int menuChoice;
	cin >> menuChoice;
	switch (menuChoice) {
	case 0:
		cloth_1_5_starting_point::main(argc, argv);
		break;
	case 1:
		cloth_1_5_glm::main(argc, argv);
		break;
	case 2:
		cloth_2_1_shaders::main(argc, argv);
		break;
	default:
		cout << "Invalid option" << endl;
		break;
	}
}