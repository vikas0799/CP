#include<iostream.h>
using namespace std;

int main()
{
	string string = "wEzC5LkS5A9XVcdM0KjUvV6Uyl8EMyfuOJ75ysw6v0p6Oz8nlX9TmCofnDv22bHndj8sLcPTs24sEbcvJzCTCQ8hX9NDbosN1aMvKjpiHByMnGYYaRHOKLdSSK3qBDWnJOpZd9hDf9ewpYmbTfTsvGskLsEwmlSC0hevVG8O2W0NWamcNLGr2rfNTjvUN8g0RyDW0LwDweJtbawGqB82rWVldXZnbRoH4q3Y39OtN4UDV7Uny5H5uVPEABhp5PzgV6B9KbSaPkwi6Udfm1QYPx1knCw6DTdiLpUoapbUfhdll9d6IovU6JcgUO8Q2FTxrmFXphwI75pVJvF8FKBoZtm9zwZJPNvc3c39Y4IB4J7VNU5d5oj2AMVriIHJzS0gmCy62X1SpkEZjBvFNN8nCpMnGdNfrt3qzvSY8rGhuxZMHfTkhLlKyTeAd8TAmTJXYyTmEoAaKMm
";
	int index = -1;
	char fnc = ' ';
	for (auto i : string) {
		if (count(string.begin(), string.end(), i) == 1) {
			fnc = i;
			break;
		}
		else {
			index += 1;
		}
	}
	if (index == 1) {
		cout << "Either all characters are repeating or "
				"string is empty"
			<< endl;
	}
	else {
		cout << "First non-repeating character is " << fnc
			<< endl;
	}
	return 0;
}

