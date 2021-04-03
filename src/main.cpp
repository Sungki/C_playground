#include <string>
#include <sstream>
#include <iostream>
#include <iterator>

#include "MyStream.h"

int main()
{
	std::istringstream in{ "Hello\n sdhsdhsdboyrlsdhsdhsdh.\n\n sdgsdboyhsdhboyl.\n\n\n\n sdgsdhgshsdhgirlboylfdhdfdjfjfboysdgsdg" };
	std::string t = "boy";
	std::cout << MyStream::FindInStream(in, t);
}