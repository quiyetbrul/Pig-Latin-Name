//  main.cpp
//  PigLatinName
//
//  Created by Quiyet Brul on 6/13/19.
//  Copyright � 2019 Quiyet Brul. All rights reserved.
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

bool isVowel(char c) 
{ 
  c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'); 
} 

std::string pigLatin(std::string instr)
{
	std::string pigLatin1;

	if (!isVowel(instr[0]))
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
