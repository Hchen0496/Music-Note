#include <iostream> 
#include <Windows.h> //used for beeps and sleep
using namespace std; 

//Music Notes that are used in this program 
//Used floats because there is decimal values in frequency and durations

//referenced to piano
//But we call this Biano cause it beeps, and it doesnt exactly sound like the piano but its close to it wth all those beeps

//setting variables to frequency (basically music notes is the variables)
//We used float instead of INT to get a more accuracy of the beep tone that is closely related to the piano tone.
float C3 = 130.81, D3 = 146.83, E3 = 164.81, F3 = 174.61, G3 = 196, A3 = 220, B3 = 246.94; //(Lower pitch)
float C4 = 261.63, D4 = 293.67, E4 = 329.63, F4 = 349.23, G4 = 392, A4 = 440, B4 = 466.16; //(Mid Range Pitch)
float C5 = 523.25, D5 = 587.33, E5 = 659.26, F5 = 698.46, G5 = 783.99, A5 = 880, B5 = 987.77; //(Higher Pitch)

//The sharps in the lower to Higher pitch frequency
//We used float here for accuracy 
float C3S = 138.59, D3S = 155.56, F3S = 185, G3S = 207.65, A3S = 233.08; 
float C4S = 277.18, D4S = 311.13, F4S = 369.99, G4S = 415.30, A4S = 466.16;
float C5S = 554.37, D5S = 622.25, F5S = 739.99, G5S = 830.61, A5S = 932.33;

//setting the type of notes to duration (How long should it last)
//Used float again for accuracy duration
float WN = 999, HN = 499.5, QN = 248.75, DHN = 333;//Whole note, Half Note, Quarter Note, Dotted Half Note

//Note: I've used Jingle Bells for this project
void Jingle()
{
	cout << "Jingle Bells" << endl;
	Beep(E4, HN); //Inside the beep arguments its (frequency, duration)
	Beep(E4, HN);
	Beep(E4, WN);
	Sleep(100); // 100ms = .1 seconds
	Beep(E4, HN);
	Beep(E4, HN);
	Beep(E4, WN);
	Sleep(100);
	Beep(E4, HN);
	Beep(G4, HN);
	Beep(C4, HN);
	Beep(D4, HN);
	Beep(E4, WN);
	Sleep(100);
	Beep(F4, HN);
	Beep(F4, HN);
	Beep(F4, HN);
	Beep(F4, HN);
	Sleep(100);
	Beep(F4, HN);
	Beep(E4, HN);
	Beep(E4, HN);
	Beep(E4, HN);
	Sleep(100); 
	Beep(E4, HN);
	Beep(D4, HN);
	Beep(D4, HN);
	Beep(E4, HN);
	Beep(D4, HN);
	Beep(G4, WN);

}
int main()
{
	Jingle(); //calling in the function Jingle
	Sleep(1000); //sleep for 1000ms (1000ms = 1 second)

	printf("Hope you enjoy this! ");
	system("Pause");//To hold the Console!
	return 0;
}
