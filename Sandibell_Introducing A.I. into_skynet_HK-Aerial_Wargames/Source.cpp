#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	//seed of random number generator 
	srand(static_cast<unsigned int>(time(0)));
	//**************************************************
		// This holding data on low and high numbers which may change.
		// This is the sets of Human grid 
	int Human_searchGridLowNumber = 1;
	int Human_searchGridHighNumber = 64;

	// This is the sets of Ai binary grid 
	int Ai_binary_searchGridLowNumber = 1;
	int Ai_binary_searchGridHighNumber = 64;

	// This is the sets of Random grid
	int Ai_random_searchGridLowNumber = 1;
	int Ai_random_searchGridHighNumber = 64;
	//*****************************************************
		//Vars to hold data on what the current prediction to guess is 
		// and keep track of how many guesses were used.
		//This is the sets of Human prediction 
	int Human_number_of_predictions = 0;
	int Human_current_location_prediction = 0;

	//Sets of Ai_binary prediction 
	int Ai_binary_number_of_predictions = 0;
	int Ai_binary_current_location_prediction = 0;

	//Sets of Ai_linear prediction
	int Ai_linear_number_of_predictions = 0;
	int Ai_linear_current_location_prediction = 0;

	//Sets of Ai_random prediction
	int Ai_random_number_of_predictions = 0;
	int Ai_random_current_location_prediction = 0;
	//*****************************************************

		// It keep the actual target location the same for everyone
		// Sets to search between 1 & 64 that hold the actual target location
	int actualTargetLocation = rand() % Ai_binary_searchGridHighNumber + Ai_binary_searchGridLowNumber;

	//Title for simulation
	cout << "\n\n\tWelcome to A.I. into Skynet HK-Aerial: Wargames\n\n";
	// **************** Start Human tries to find the target **********************
	do
	{
		// This is where the Human makes a target location guess
		cout << "\n Find the target location " << actualTargetLocation << endl;
		cout << "\n Enter a predicted target location (" << Human_searchGridLowNumber << "_" << Human_searchGridHighNumber << ") : ";
		cin >> Human_current_location_prediction;
		++Human_number_of_predictions;

		// If you guess is too high and try it again
		if (Human_current_location_prediction > actualTargetLocation)
		{
			cout << "That the Human prediction was too high. Try it once again!! \n\n";
			Human_searchGridHighNumber = Human_current_location_prediction - 1;
		}
		//If you guess is too low and try it again
		else if (Human_current_location_prediction < actualTargetLocation)
		{
			cout << "That the Human target prediction was too low. Try it once again!! \n\n";
			Human_searchGridLowNumber = Human_current_location_prediction + 1;
		}
		// If you guess it's correct and move forward.
		else
		{
			cout << "\n It's right that's great that you move to the next to find the target location!!!! That the Human got it in and you move on forward. " << Human_number_of_predictions << "guesses!\n";
		}

		//If you are correct move on 

	} while (Human_current_location_prediction != actualTargetLocation);
	//***************** End Human that the Ai is tries to find the target *******************
	cout << "\n\nThat the human is finished to launch the binary AI";
	system("Pause");

	// ******************* Start Binary Ai tries to find the target ***********************
	do
	{
		// This is where it's the AI makes a target location guess
		cout << "\nThe real target location it's at " << actualTargetLocation << endl;

		// This is the algorithm that which it makes the random AI prediction and systems guessing system
		cout << "\n Ai Binary predicts traget it's at " << Ai_binary_current_location_prediction << endl;
		Ai_binary_current_location_prediction = (Ai_binary_searchGridHighNumber - Ai_binary_searchGridLowNumber) / 2 + Ai_binary_searchGridLowNumber;
		++Ai_binary_number_of_predictions;

		//guess is too high 
		if (Ai_binary_current_location_prediction > actualTargetLocation)
		{
			cout << "Ai Binary prediction missed because it was too high. Try It Once Again!! \n\n";
			Ai_binary_searchGridHighNumber = Ai_binary_current_location_prediction - 1;
		}
		// If it guess too low 
		else if (Ai_binary_current_location_prediction < actualTargetLocation)
		{
			cout << "Ai Binary prediction that's missed because it was too low. Try It Once Again!! \n\n";
			Ai_binary_searchGridLowNumber = Ai_binary_current_location_prediction + 1;
		}

		//If it guess it's correct 
		else
		{
			cout << "\n Binary Target marked. Achieve in " << Ai_binary_number_of_predictions << "Attempts. \n";
		}
		//If it's correct move on 
	} while (Ai_binary_current_location_prediction != actualTargetLocation);
	//************************ Ai Binary END *******************************

	cout << "\n\n Ai Binary test it complete, it begin to launch Ai Linear search ";
	system("Pause");

	//************************* Ai Linear Start ****************************
	do
	{
		// The target location 
		cout << "\n  The Target location is " << actualTargetLocation << endl;
		Ai_linear_current_location_prediction++;

		//The systems guessing the system
		cout << "\n Ai Linear predicts target it's at " << Ai_linear_current_location_prediction << endl;
		Ai_linear_number_of_predictions++;

		//If the guess is too high 
		if (Ai_linear_current_location_prediction > actualTargetLocation)
		{
			cout << "That the Ai Linear prediction missed because it was too high. Try It Once Again!! \n\n";
			//Ai_linear_searcGridHighhNumber = Ai_linear_current_location_prediction - 1;   
		}
		else if (Ai_linear_current_location_prediction > actualTargetLocation)
		{
			cout << "That the Linear Ai target prediction was too high!!! Try it once again! \n\n";
		}
		else
		{
			cout << "\nLinear Ai that you find it correct" << Ai_linear_number_of_predictions << "Guesses!\n";
		}

	} while (Ai_linear_current_location_prediction != actualTargetLocation);
	// ******************** Start random Ai that find the target *****************************
	do
	{
		//That is where the Ai it makes a target location guess
		cout << "\nThat the real target location is at " << actualTargetLocation << endl;
		// That this is where the Ai it makes a target location guess
		Ai_random_current_location_prediction = rand() % Ai_random_searchGridHighNumber + Ai_random_searchGridLowNumber;
		cout << "\nThe random Ai guesses the target it's location at " << Ai_random_current_location_prediction << endl;
		Ai_random_number_of_predictions++;

		if (Ai_random_current_location_prediction > actualTargetLocation)
		{
			cout << " The random Ai target prediction was too high!!! Try it once more time!! \n\n";
		}
		else if (Ai_random_current_location_prediction < actualTargetLocation)
		{
			cout << "That the random Ai TARGET prediction was too low!!! Try it once more time!! \n\n";
		}
		else
		{
			cout << "\n The random Ai target got it correct!! That the random Ai target predictions got the right number for the target location. " << Ai_random_number_of_predictions << "guesses!\n";
		}

	} while (Ai_random_current_location_prediction != actualTargetLocation);
	//*********** End random Ai tries to find the target ********************

	cout << "\n\nThe Random AI search is finished to see who won the guess game";
	system("Pause");

	cout << " *** Results***\n\n";
	cout << "The Human found the target in " << Human_number_of_predictions << " attempts" << endl;
	cout << "The Binary Ai found the target in " << Ai_binary_number_of_predictions << " attempts" << endl;
	cout << "the linear Ai found the target in " << Ai_linear_number_of_predictions << " attempts" << endl;
	cout << "The random Ai found the target in " << Ai_random_number_of_predictions << " attempts" << endl;


	return 0;
}