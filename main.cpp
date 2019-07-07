//  main.cpp
//  PigLatinName
//
//  Created by Quiyet Brul on 6/13/19.
//  Copyright © 2019 Quiyet Brul. All rights reserved.
#include <iostream>
#include <string>

std::string toLower(std::string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		str.at(i) = tolower(str.at(i));
	}
	return str;
}
std::string pigLatin(std::string instr)
{
	std::string pigLatin1;

	if (instr[0] != 'a' && instr[0] != 'e' && instr[0] != 'i' && instr[0] != 'o' && instr[0] != 'u')
	{
		for (int i = 1; i < instr.length(); i++)
		{
			pigLatin1 += instr[i];
		}
		pigLatin1 = pigLatin1 + instr[0] + "ay";
	}
	else
	{
		pigLatin1 = instr + "way";
	}

	return pigLatin1;
}
int main()
{
	std::string first, last;
	std::cout << "Enter first and last name: ";
	std::cin >> first >> last;

	first = toLower(first);
	last = toLower(last);

	std::cout << "\nFirst name (Pig Latin): " << pigLatin(first);
	std::cout << "\nLast name (Pig Latin): " << pigLatin(last);
	return 0;
}
