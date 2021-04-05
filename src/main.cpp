#include <string>
#include <sstream>
#include <iostream>
#include <iterator>

#include "MyStream.h"
#include "MyMap.h"
#include "MyStoi.h"

int main()
{
//	std::istringstream in{ "Hello\n sdhsdhsdboyrlsdhsdhsdh.\n\n sdgsdboyhsdhboyl.\n\n\n\n sdgsdhgshsdhgirlboylfdhdfdjfjfboysdgsdg" };
//	std::string t = "boy";
//	std::cout << MyStream::FindInStream(in, t);

//	MyMap::Find("boy");

	std::cout << MyStoi::Stoi("1000000000000");
}