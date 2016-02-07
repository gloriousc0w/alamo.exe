//Entire Alamo-v4.0.exe
//Made by C0w, info via wikipedia
//feel free to sugest requests 
//v3.2 can be found http://pastebin.com/f7Y5KQHK

#include "stdafx.h"		
#include "iostream"		
#include "string"		
#include "windows.h"	
using namespace std;	

void slowOutput(string & tempOutput)
{
	Sleep(500);
	for (int i = 0; i < tempOutput.length(); i++)
	{
		cout << tempOutput[i];
		Sleep(5);
		if ( ! GetAsyncKeyState(VK_RETURN))
			Sleep(70 + rand() % 70);
	}
	Sleep(1000);
	getline(cin, tempOutput);
}

void giveAlamoInfo(string & tempOutput)
{
	tempOutput = "Hello this is your weekly alamo reminder\n\n\nThe alamo is texas's greatest day here is your reminder\n\n\nPress any key to continue . . . ";
	slowOutput(tempOutput);
	tempOutput = "\n\nThe Battle of the Alamo (February 23 to March 6, 1836) was a pivotal event in the Texas Revolution. Following a 13-day siege, Mexican troops under President General Antonio Lopez de Santa Anna launched an assault on the Alamo Mission near San Antonio de Béxar (modern-day San Antonio, Texas, United States), killing all of the Texian defenders. Santa Anna's cruelty during the battle inspired many Texians—both Texas settlers and adventurers from the United States—to join the Texian Army. Buoyed by a desire for revenge, the Texians defeated the Mexican Army at the Battle of San Jacinto, on April 21, 1836, ending the revolution.\n\n\nPress any key to continue . . . ";
	slowOutput(tempOutput);
	tempOutput = "\n\nSeveral months previously, Texians had driven all Mexican troops out of Mexican Texas. About 100 Texians were then garrisoned at the Alamo. The Texian force grew slightly with the arrival of reinforcements led by eventual Alamo co - commanders James Bowie and William B.Travis. On February 23, approximately 1, 500 Mexicans marched into San Antonio de Béxar as the first step in a campaign to retake Texas. For the next 10 days the two armies engaged in several skirmishes with minimal casualties. Aware that his garrison could not withstand an attack by such a large force, Travis wrote multiple letters pleading for more men and supplies, but fewer than 100 reinforcements arrived there.\n\n\nPress any key to continue . . . ";
	slowOutput(tempOutput);
	tempOutput= "\n\nIn the early morning hours of March 6, the Mexican Army advanced on the Alamo. After repulsing two attacks, the Texians were unable to fend off a third attack. As Mexican soldiers scaled the walls, most of the Texian soldiers withdrew into interior buildings. Defenders unable to reach these points were slain by the Mexican cavalry as they attempted to escape. Between five and seven Texians may have surrendered; if so, they were quickly executed. Most eyewitness accounts reported between 182 and 257 Texians died, while most historians of the Alamo agree that around 600 Mexicans were killed or wounded. Several noncombatants were sent to Gonzales to spread word of the Texian defeat. The news sparked both a strong rush to join the Texian army and a panic, known as \"The Runaway Scrape\", in which the Texian army, most settlers, and the new Republic of Texas government fled from the advancing Mexican Army.\n\n\nPress any key to continue . . . ";
	slowOutput(tempOutput);
	tempOutput = "\n\nWithin Mexico, the battle has often been overshadowed by events from the Mexican–American War of 1846–48. In 19th-century Texas, the Alamo complex gradually became known as a battle site rather than a former mission. The Texas Legislature purchased the land and buildings in the early part of the 20th century and designated the Alamo chapel as an official Texas State Shrine. The Alamo is now \"the most popular tourist site in Texas\". The Alamo has been the subject of numerous non-fiction works beginning in 1843. Most Americans, however, are more familiar with the myths spread by many of the movie and television adaptations, including the 1950s Disney miniseries Davy Crockett and John Wayne's 1960 film The Alamo.\n\n\nPress any key to continue . . . ";
	slowOutput(tempOutput);
}

void gayInput(string & tempOutput, string & rate)
{
	tempOutput = "\nPlease Enter a POSITIVE value inbetween 1-10: ";
	slowOutput(tempOutput);
	getline(cin, rate);
}

void getSurvey(string & tempOutput)
{
	bool badInput = false; 
	string rate;
	tempOutput = "\nQuick survey on how you would rate your alamo experience please rate 1-10: ";
	slowOutput(tempOutput);
	do
	{
		badInput = false;
		if (rate == "")
			badInput = true;
		else
		{
			for (int i = 0; i < rate.length(); i++)
				if (isdigit(rate[i]) == false) badInput = true;
		}
		if (badInput == true)
			gayInput(rate, tempOutput);
	} while (badInput == true);
	if (stof(rate) > 6)
		tempOutput = "\nThank you for enjoying your alamo experience ";
	else
		tempOutput = "\nThank you for being a total fucking asshole ";
	slowOutput(tempOutput);
}

void main()
{
	string fag, tempOutput;
	giveAlamoInfo(tempOutput);
	getSurvey(tempOutput);
	getline(cin, fag);
	cout << endl;
}
