#include <iostream>
using namespace std;

int main() {

	int fig;
	std::cout << "Please, enter a figure ";
	std::cin >> fig;
	int i = 0;
	int j = 0;
	int m = 0;
	
	/***********    ширина 11, высота пополам, треугольник В
	   ******* 
	    *****
	     ***
	      */

	if (fig == 10) {

		for (int i = 0; i < 10; i++) {

			for (j = 10; j > i; j--) {
				std::cout << " ";
			}
			for (j = 0; j < i; j++) {
				cout << "*";
			}

			std::cout << endl;
		}
	}
		
	/*      *     треугольник К
	       **
	      ***
	     ****
	    *****
	  *******/
	
	if (fig == 10) {

		for (int i = 0; i < 10; i++) {

			for (j = 10; j > i; j--) {
				std::cout << " ";
			}
			for (j = 0; j < i; j++) {
				cout << "*";
			}

			std::cout << endl;
		}
	}
		
	
	/*****     треугольник А  WORK VARIANT !!!
	  ****
	   ***
	    **
	   	 */

	if (fig == 1) {

		for (int i = 0; i < 10; i++) {

			for (int j = 0; j < i; j++) {
				std::cout << " "; 	
			}
			for (j = 10; j > i; j--){
				cout << "*";
			}

			std::cout << endl;
		}
	}

	/* треугольник вариант Б WORK VARIANT !!!
	 **
	 ***
	 ****
	 ******/

	if (fig == 2) {

		for (int i = 1; i < 10; i++) {

			for (int j = 1; j < i; j++) {

				std::cout << '*';
			}

			std::cout << endl;
		}

	}


	/* треугольник вариант И WORK VARIANT !!!

	 ******
	 *****
	 ****
	 ***
	 **
	 *

	*/

	if (fig == 9) {
		for (int i = 1; i < 10; i++) {
			for (int j = 10; j > i; j--) {

				std::cout << '*';
			}
			std::cout << endl;
		}
	}

	return 0;
}