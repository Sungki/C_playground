#include <string>
#include <sstream>
#include <iostream>
#include <iterator>

#include "MyStream.h"
#include "MyMap.h"
#include "MyStoi.h"
#include "MyTreeNode.h"

int main()
{
//	std::istringstream in{ "Hello\n sdhsdhsdboyrlsdhsdhsdh.\n\n sdgsdboyhsdhboyl.\n\n\n\n sdgsdhgshsdhgirlboylfdhdfdjfjfboysdgsdg" };
//	std::string t = "boy";
//	std::cout << MyStream::FindInStream(in, t);

//	MyMap::Find("boy");

//	std::cout << MyStoi::Stoi("1000000000000");

	TreeNode t2(9);
	TreeNode t4(15);
	TreeNode t5(7);
	TreeNode t3(20, &t4, &t5);
	TreeNode t1(3, &t2, &t3);

	std::cout << TreeNode::maxDepth(&t1);
}