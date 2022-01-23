#include "../std_lib_facilities.h"

int main() {
	cout << "Enter the name of the friend you would like to write to: \n";
	string friend_name;
	cin >> friend_name;

	cout <<
		"Dear " << friend_name << ",\n\n"
		"How are you? I am fine. I miss you.\n";
	
	cout << "\nEnter a name of another friend:\n";
	string other_friend_name;
	cin >> other_friend_name;

	cout << "Enter their gender [m/f]:\n";
	char other_friend_gender;
	cin >> other_friend_gender;

	if (other_friend_gender == 'm')
	{
		cout << "\nHave you seen " << other_friend_name << " lately? If you do see him, ask him to call me.\n\n";
	}
	else if (other_friend_gender == 'f') {
		cout << "\nHave you seen " << other_friend_name << " lately? If you do see her, ask her to call me.\n\n";
	}
	else {
		cout << "Invalid gender entered. Terminating.\n";
		return 1;
	}

	cout << "Enter " << friend_name << "'s age:\n";
	int friend_age;
	cin >> friend_age;

	if (friend_age < 0 || friend_age >= 110) {
		cout << "You're kidding!";
		return 1;
	}

	cout << "Kind regards, \n \n Anish";

	

	

	return 0;
}