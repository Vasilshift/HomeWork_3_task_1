#include <iostream>
using namespace std;

int main() {

	int fig;
	std::cout << "Please, enter a figure ";
	std::cin >> fig;
	int i = 0, j = 0, m = 0, k = 10, q = 0, l = 0, p = 0, n = 0;


	/*---------------------- VARIANT E work ----------------------
		
		*        * 
		**      **
		***    ***
		****  ****
		**********
		****  ****
		***    ***
		**      **
		*        *
		
    */
	
	if (fig == 6) {

		for (i = 0; i < 8; i++) {

			for (j = 0; j < i; j++) {
				std::cout << "*";
			}

			for (k = 15 - j * 2; k > 0; k--) {
				cout << " ";
			}

			for (l = 0; l < i; l++) {
				std::cout << "*";
			}

			std::cout << endl;
		}
		
		for (p = 0; p < 8; p++) {

			for (q = 7; q > p; q--) {
				std::cout << "*";
			}

			for (m = 0; m <= q * 2; m++) {
				cout << " ";
			}
			
			for (n = 7 ; n > p; n--) {
				cout << "*";
			}

		std::cout << endl;

		}
	}

	/*---------------------- VARIANT З WORK ----------------------

	   *
	  **
	 ***
	****
	 ***
	  **
	   *
	 
	 */ 

	if (fig == 8) {

		for (i = 0; i < 8; i++) {

			for (j = 8; j > i; j--) {
				std::cout << " ";
			}
			for ( j = 0; j < i; j++) {

				cout << "*";
			}
				std::cout << endl;
		}
		
		for (int i = 0; i < 8; i++) {

			for (int j = 0; j < i; j++) {
				std::cout << " ";
			}
			for (j = 8; j > i; j--) {
				cout << "*";
			}

			std::cout << endl;
		}
	
	}

	//--------------------- VARIANT Ж  WORK -------------------------------------------

		/*       
		 **
		 ***
		 ****
		 *****
		 ****
		 ***
		 **
		 */

	if (fig == 7) {

		for (i = 0; i < 8; i++) {

			for (j = 0; j < i; j++) {
				std::cout << "*";
			}
			std::cout << endl;
		}

		for (k = 0; k < 8; k++) {

			for (l = 8; l > k; l--) {
				std::cout << "*";
			}

			std::cout << endl;
		}
	}

	//---------------------- VARIANT Д WORK----------------------------------------------

	/***********       
	  *********         
	   *******
	    *****
		 ***
		  *
		 *** 
		***** 
	   ******* 
	  ********* 
     ***********/
	
	if (fig == 5) {

		for (i = 0; i < 6; i++) {

			for (j = 0; j < i; j++) {
				std::cout << " ";
			}

			for (k = 11 - j * 2; k > 0; k--) {
				cout << "*";
			}
			std::cout << endl;
		}
		
		for (p = 0; p < 6; p++) {

			for (l = 6-1; l > p; l--) {
				std::cout << " ";
			}
			
			for (m = 5-l*2; m < 6; m++) {
				cout << "*";
			}
		std::cout << endl;
							
		}
	}

	//----------------------- VARIANT Г  WORK -------------------------------------------

	/*     *    
	      ***
		 *****        
		*******
	   *********/

	if (fig == 4) {

		for (i = 0; i < 11; i++) {

			for (j = 11; j > i; j--) {
				std::cout << " ";
			}
			for (k = 11 - j; k < j; k++) {
				cout << "*";
			}

			std::cout << endl;
		}
	}

	//----------------------- VARIANT В   WORK -----------------------------------

	/***********    ширина полностью, высота пополам
	   ******* 
	    *****         width of triangle will do 11 so more beutiful
	     ***
	      */

	if (fig == 3) {

		for (i = 0; i < 11; i++) {
			
			for (j = 0; j < i; j++) {
					std::cout << " ";
			}
			for (k = 11 - j*2; k > 0; k--) {
					cout << "*";
			}
			
		std::cout << endl;
		}
	}

	//--------------------  VARIANT  К  WORK--------------------------------------------

	/*      *     
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
		
	//------------------- VARIANT А  WORK --------------------------------------------------

	/******     
	  *****
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

	//------------------- VARIANT Б WORK --------------------------------------------------

	/*  
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

	//------------------- VARIANT И    WORK ---------------------------------------------------

	/*  

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