/*************************************
Program: TC02_ASGN2_AHMAD_HAMDAN.cpp
Course: TCP1101
Year: 2015/16 Trimester 2
Name: AHMAD HAMDAN
ID  : 1131121467
Lecture: TC02
Lab: TT04
Email: ABOOWALEED.A9@GMAIL.COM
Phone: 011-39007471
*************************************/






#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include <stdlib.h>


using namespace std;

void menu();

class Day {
public:
	string date;
	string weather;
	double minTemp;
	double maxTemp;
	double rainfall;
};

void loadfile(){

	Day d;
    char f[30];
	int numofline = 0;
    ifstream in_stream;
	cout << "ENTER THE FILE NAME IN {txt} FORMAT :" <<endl;
	 cin.getline(f, 30);

     in_stream.open(f);
	while (! in_stream.eof()){
		in_stream >> d.date;
		in_stream >> d.weather;
		in_stream >> d.minTemp;
		in_stream >> d.maxTemp;
		in_stream >> d.rainfall;
            numofline = numofline + 1;

		cout << d.date << "  ";
		cout << d.weather << "  ";
		cout << d.minTemp << "  ";
		cout << d.maxTemp << "  ";
		cout << d.rainfall << endl;

	}
	cout << "num of lines :" << numofline << endl<<endl;

	in_stream.close();

}

void overall() {
	double max12 = 0, min12 = 0, avgmax12 = 0, avgmin12 = 0, rain12 = 0;
	double max13 = 0, min13 = 0, avgmax13 = 0, avgmin13 = 0, rain13 = 0;
	double max14 = 0, min14 = 0, avgmax14 = 0, avgmin14 = 0, rain14 = 0;
	double max15 = 0, min15 = 0, avgmax15 = 0, avgmin15 = 0, rain15 = 0;
	int weather12[36] = { };
    int numofline = -1;
    char f[30];


    ifstream in_stream;
	cout << "ENTER THE FILE NAME IN {txt} FORMAT :" <<endl;
	 cin.getline(f, 30);

        Day days[1461];

	in_stream.open(f);
        for (int i=0; i< 1500; i++){
		in_stream >> days[i].date;
		in_stream >> days[i].weather;
		in_stream >> days[i].minTemp;
		in_stream >> days[i].maxTemp;
		in_stream >> days[i].rainfall;
            numofline = numofline + 1;
        }
	in_stream.close();







for (int i = 0; i < numofline; i++) {
		if (i < 366) {
			min12 = days[i].minTemp + min12;
			max12 = days[i].maxTemp + max12;
			rain12 = days[i].rainfall + rain12;
			if (days[i].weather == "Rain") {
				weather12[0]++;
			}
			else if (days[i].weather == "PartlyCloudy") {
				weather12[1]++;
			}
			else if (days[i].weather == "MostlyCloudy") {
				weather12[2]++;
			}
			else if (days[i].weather == "Snow") {
				weather12[3]++;
			}
			else if (days[i].weather == "Tstorm") {
				weather12[4]++;
			}
			else if (days[i].weather == "Clear") {
				weather12[5]++;
			}
			else if (days[i].weather == "Overcast") {
				weather12[6]++;
			}
			else if (days[i].weather == "ScatteredClouds") {
				weather12[7]++;
			}
			else if (days[i].weather == "Fog") {
				weather12[8]++;
			}
		}
		else if (366 <= i && i < 731) {
			min13 = days[i].minTemp + min13;
			max13 = days[i].maxTemp + max13;
			rain13 = days[i].rainfall + rain13;
			if (days[i].weather == "Rain") {
				weather12[9]++;
			}
			else if (days[i].weather == "PartlyCloudy") {
				weather12[10]++;
			}
			else if (days[i].weather == "MostlyCloudy") {
				weather12[11]++;
			}
			else if (days[i].weather == "Snow") {
				weather12[12]++;
			}
			else if (days[i].weather == "Tstorm") {
				weather12[13]++;
			}
			else if (days[i].weather == "Clear") {
				weather12[14]++;
			}
			else if (days[i].weather == "Overcast") {
				weather12[15]++;
			}
			else if (days[i].weather == "ScatteredClouds") {
				weather12[16]++;
			}
			else if (days[i].weather == "Fog") {
				weather12[17]++;
			}
		}
		else if (731 <= i && i < 1096) {
			min14 = days[i].minTemp + min14;
			max14 = days[i].maxTemp + max14;
			rain14 = days[i].rainfall + rain14;
			if (days[i].weather == "Rain") {
				weather12[18]++;
			}
			else if (days[i].weather == "PartlyCloudy") {
				weather12[19]++;
			}
			else if (days[i].weather == "MostlyCloudy") {
				weather12[20]++;
			}
			else if (days[i].weather == "Snow") {
				weather12[21]++;
			}
			else if (days[i].weather == "Tstorm") {
				weather12[22]++;
			}
			else if (days[i].weather == "Clear") {
				weather12[23]++;
			}
			else if (days[i].weather == "Overcast") {
				weather12[24]++;
			}
			else if (days[i].weather == "ScatteredClouds") {
				weather12[25]++;
			}
			else if (days[i].weather == "Fog") {
				weather12[26]++;
			}

		}
		else if (1096 <= i && i < 1461) {
			min15 = days[i].minTemp + min15;
			max15 = days[i].maxTemp + max15;
			rain15 = days[i].rainfall + rain15;

			if (days[i].weather == "Rain") {
				weather12[27]++;
			}
			else if (days[i].weather == "PartlyCloudy") {
				weather12[28]++;
			}
			else if (days[i].weather == "MostlyCloudy") {
				weather12[29]++;
			}
			else if (days[i].weather == "Snow") {
				weather12[30]++;
			}
			else if (days[i].weather == "Tstorm") {
				weather12[31]++;
			}
			else if (days[i].weather == "Clear") {
				weather12[32]++;
			}
			else if (days[i].weather == "Overcast") {
				weather12[33]++;
			}
			else if (days[i].weather == "ScatteredClouds") {
				weather12[34]++;
			}
			else if (days[i].weather == "Fog") {
				weather12[35]++;
			}

		}
	}


	avgmin12 = min12 / 366;
	avgmax12 = max12 / 366;
	avgmin13 = min13 / 365;
	avgmax13 = max13 / 365;
	avgmin14 = min14 / 365;
	avgmax14 = max14 / 365;
	avgmin15 = min15 / 365;
	avgmax15 = max15 / 365;





	cout << "Year: 2012" << endl;
	cout << "Avg. minimum temperature: " << avgmin12 << " C " << endl;
	cout << "Avg. maximum temperature: " << avgmax12 << " C " << endl;
	cout << "Total rainfall:           " << rain12 << " mm " << endl;
	cout << "Days where reported weather is:    " << endl;
	cout << "Rain           " << "  " << weather12[0] << endl;
	cout << "PartlyCloudy   " << "  " << weather12[1] << endl;
	cout << "MostlyCloudy   " << "  " << weather12[2] << endl;
	cout << "Snow           " << "  " << weather12[3] << endl;
	cout << "Tstorm         " << "  " << weather12[4] << endl;
	cout << "Clear          " << "  " << weather12[5] << endl;
	cout << "overcast       " << "  " << weather12[6] << endl;
	cout << "ScatteredClouds" << "  " << weather12[7] << endl;
	cout << "Fog            " << "  " << weather12[8] << endl << endl << endl;



	cout << "Year: 2013" << endl;
	cout << "Avg. minimum temperature: " << avgmin13 << " C " << endl;
	cout << "Avg. maximum temperature: " << avgmax13 << " C " << endl;
	cout << "Total rainfall:           " << rain13 << " mm " << endl;
	cout << "Days where reported weather is:    " << endl;
	cout << "Rain           " << "  " << weather12[9] << endl;
	cout << "PartlyCloudy   " << "  " << weather12[10] << endl;
	cout << "MostlyCloudy   " << "  " << weather12[11] << endl;
	cout << "Snow           " << "  " << weather12[12] << endl;
	cout << "Tstorm         " << "  " << weather12[13] << endl;
	cout << "Clear          " << "  " << weather12[14] << endl;
	cout << "overcast       " << "  " << weather12[15] << endl;
	cout << "ScatteredClouds" << "  " << weather12[16] << endl;
	cout << "Fog            " << "  " << weather12[17] << endl << endl << endl;

	cout << "Year: 2014" << endl;
	cout << "Avg. minimum temperature: " << avgmin14 << " C " << endl;
	cout << "Avg. maximum temperature: " << avgmax14 << " C " << endl;
	cout << "Total rainfall:           " << rain14 << " mm " << endl;
	cout << "Days where reported weather is:    " << endl;
	cout << "Rain           " << "  " << weather12[18] << endl;
	cout << "PartlyCloudy   " << "  " << weather12[19] << endl;
	cout << "MostlyCloudy   " << "  " << weather12[20] << endl;
	cout << "Snow           " << "  " << weather12[21] << endl;
	cout << "Tstorm         " << "  " << weather12[22] << endl;
	cout << "Clear          " << "  " << weather12[23] << endl;
	cout << "overcast       " << "  " << weather12[24] << endl;
	cout << "ScatteredClouds" << "  " << weather12[25] << endl;
	cout << "Fog            " << "  " << weather12[26] << endl << endl << endl;

	cout << "Year: 2015" << endl;
	cout << "Avg. minimum temperature: " << avgmin15 << " C " << endl;
	cout << "Avg. maximum temperature: " << avgmax15 << " C " << endl;
	cout << "Total rainfall:           " << rain15 << " mm " << endl;
	cout << "Rain           " << "  " << weather12[27] << endl;
	cout << "PartlyCloudy   " << "  " << weather12[28] << endl;
	cout << "MostlyCloudy   " << "  " << weather12[29] << endl;
	cout << "Snow           " << "  " << weather12[30] << endl;
	cout << "Tstorm         " << "  " << weather12[31] << endl;
	cout << "Clear          " << "  " << weather12[32] << endl;
	cout << "overcast       " << "  " << weather12[33] << endl;
	cout << "ScatteredClouds" << "  " << weather12[34] << endl;
	cout << "Fog            " << "  " << weather12[35] << endl << endl << endl;
}

void search(){


    int numofline = -1;
    char f[30];

    ifstream in_stream;
	cout << "ENTER THE FILE NAME IN {txt} FORMAT :" <<endl;
	 cin.getline(f, 30);


        in_stream.open(f);
        Day days[1461];
        for (int i = 0; i< 1461; i++) {
		in_stream >> days[i].date;
		in_stream >> days[i].weather;
		in_stream >> days[i].minTemp;
		in_stream >> days[i].maxTemp;
		in_stream >> days[i].rainfall;
        }
	in_stream.close();



	cout << "ENTER THE DATE IN THIS FORMAT :" << endl;
	cout << "yy-mm-dd" << endl;
	string c;
	cin >> c;

        for (int i = 0; i < 1461; i++) {
            if (days[i].date == c) {
			cout << "the date :     " << days[i].date << "   " << endl;
			cout << "the weather:   " << days[i].weather << "   " << endl;
			cout << "the min temp:  " << days[i].minTemp << "   " << endl;
			cout << "the max temp:  " << days[i].maxTemp << "   " << endl;
			cout << "the rainfall:  " << days[i].rainfall << endl;
            }
            else {
                cout << "WRONG FORMAT" << endl;
                break;
            }
        }




}



void menu(){

   cout << "|................................................|" << endl;
   cout << "|   * WELCOME TO NASA WEATHER STATS GENERATOR *  |" << endl;
   cout << "|................................................|" << endl;
   cout << "|              1. LOAD DATA FILE                 |" << endl;
   cout << "|................................................|" << endl;
   cout << "|              2. OVERALL STATS                  |" << endl;
   cout << "|................................................|" << endl;
   cout << "|              3. SEARCH BY DATE                 |" << endl;
   cout << "|................................................|" << endl;
   cout << "|              4. MONTHLY STATS                  |" << endl;
   cout << "|................................................|" << endl;
   cout << "|              5. QUIT                           |" << endl;
   cout << "|................................................|" << endl << endl;



   cout << " <<<<<<<<<<<<< PLEASE CHOOSE FROM THE MENU >>>>>>>>>>>>>>" << endl;
    int x;
    char answer;
    cin >> x;

    char r[30];
    cin.getline(r, 30);




    switch(x){
case 1:
 loadfile();
    break;
case 2:
    overall();
    break;
case 3:
    search();
    break;
case 4:
    break;
case 5:
    exit(0);
    break;
default:
    cout << "WRONG CHOISE     " << endl;
    cout << "PLEASE TRY AGAIN " << endl << endl;
    }



do {
        cout << "________________________________________" << endl;
        cout << "PRESS [Y/y] TO CONTNUE OR [N/n] TO EXIT |" << endl;
        cout << "_________________________________________"<< endl;
        cin >> answer;

                if(answer == 'y' || answer == 'Y'){
                    menu();
                }
                else if (answer == 'N' || answer == 'n'){
                    exit(0);
                }

                else {
                    cout << "*****INVAILD INPUT*****" << endl << endl;
                }



                }while(answer != 'y' || answer != 'Y');
}


int main(){


menu();



return 0;
}






