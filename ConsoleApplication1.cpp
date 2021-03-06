
/*
____________________________________________________________________________________________________________________________________

NOTES for Monday ...
Guys, please bring a set of "ear-plugs" to class with you so you won't desturb others if Don's class is working in the Lab ;)
Also, I have added some Integers for use with your computations on page 70-839 in the NEC. Notice that Integers are defined as "int"
and are listed right under the "main" function ...

Download NotePad ++ , It is a Programmers version of "Windows NotePad".
_____________________________________________________________________________________________________________________________________

"Little Johnny".
*/

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include "stdafx.h"


//#include <gsl.h>
//#include <boost/optional/hpp>

using namespace std;


int main()
{

	// Defination of Integers.

	int home_sq_ft;
	int volt_amps_over_9000;
	int small_appliance_load;
	int laundry_load;
	int two_wire_circuits;
	int dryer_load;
	int range_load;
	int supply_voltage;
	int neutral_load;
	int bathroom_branch_circuit;
	int general_lighting_load;
	int total_lighting_load;
	int net_lighting_load;
	int computed_lighting_load;
	int lighting_load_diff;
	int lighting_load_diff_comp;
	int net_calculated_load;
	int load_calculation;


	/*To obtain a list of color choices for your background and text while in the conssole:
	Bring up your terminal window and type: color dshsh and hit Enter.
	*/

	system("COLOR B");   //"B" Will make your text "LightBlue".

						 // explanation of program functions and Authors:

	cout << "" << endl;
	cout << "" << endl;

	cout << "           Written by Carlos Paige, Marquise Rogers & Kendra Doyle:  " << endl;
	cout << "" << endl;
	cout << "     This program calculates the Total load on a Home for use in ELE-1600 " << endl;


	cout << "________________________________________________________________________________" << endl;
	cout << "________________________________________________________________________________" << endl;
	



	cout << "" << endl;

	// General Lighting Load Calculations:


	//______________________________________________________________________________________________________________
	//______________________________________________________________________________________________________________
	


	cout << " Enter the Total sq. ft. of your Home and then press 'Enter':  ";
	cin >> home_sq_ft;  // cin gets input from the user and stores the input in the varible of your choice.

	cout << " Enter your laudry load in VA and then press 'Enter':  ";
	cin >> laundry_load;  // cin gets input from the user and stores the input in the varible of your choice.

	cout << " Enter Your small appliance load in VA and then press 'Enter':  ";
	cin >> small_appliance_load;  // cin gets input from the user and stores the input in the varible of your choice.
	cout << "" << endl;
	cout << "" << endl;

	net_lighting_load = (home_sq_ft * 3) + laundry_load + small_appliance_load;   // = 9000 VA
	cout << " Your Net lighting load in VA is: " << net_lighting_load << endl;	 // Note: VA is Volt Amps or "Watts".

	cout << " This is referanced in section ???? of the NEC." << endl;
	cout << "" << endl;


	if (net_lighting_load>3000) {

		cout << " The first 3000 VA is taken at 100%" << endl;
		cout << " This is referanced in section ???? of the NEC." << endl;
		cout << "" << endl;

		cout << " The remainder should be taken at 35%" << endl;
		cout << " This is referanced in section ???? of the NEC." << endl;
		cout << "" << endl;




		lighting_load_diff = net_lighting_load - 3000;   // = 6000
		lighting_load_diff_comp = (lighting_load_diff *.35) + 3000;   // = 6000 * .35 = 2100




		cout << "________________________________________________________________________________" << endl;

		cout << " Your total computed lighting load for computation in VA is:  " <<lighting_load_diff_comp << endl;
		cout << "________________________________________________________________________________" << endl;

	}
	else {
		cout << " Your General lighting load in VA was under 3000" << endl;
	}

	




	//______________________________________________________________________________________________________________
	

        // Install Code here for the remainder of the Program. Referance example found on page 839 in the NEC.

	cout << " Enter Your Range Load VA:" << endl;

	cin >> range_load;  // cin gets range_load from the user
	cout << " Enter Your Dryer Load VA:" << endl;
	cin >> dryer_load; //  cin gets dryer_load from the user
	
	load_calculation = dryer_load + range_load;
	net_calculated_load = load_calculation + lighting_load_diff_comp;
	cout << "net calculation" << net_calculated_load;

		cout << "" << endl;
		cout << "" << endl;
		cout << "net_calculated_load is" << net_calculated_load << endl;

	//______________________________________________________________________________________________________________
	



	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;

	system("pause");

	/*Returns a "0" to the main function indicating that the code
	compiled without error's.
	*/

	return 0;

}


















