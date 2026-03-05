/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdziadko <mdziadko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:57:16 by mdziadko          #+#    #+#             */
/*   Updated: 2026/02/23 15:47:15 by mdziadko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

void ftReplace(std::istream	&src, std::ofstream	&dst,
		const std::string &s1, const std::string &s2)
{
	std::stringstream	ss;
	ss << src.rdbuf();
	std::string	buf = ss.str();

	std::size_t	pos = 0;
	std::size_t	foundPos;

	while ((foundPos = buf.find(s1, pos)) != std::string::npos)
	{
		dst << buf.substr(pos, foundPos - pos);
		dst << s2;
		pos = foundPos + s1.length();
	}
	dst << buf.substr(pos);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: Wrong number of arguments." << std::endl;
		return (1);
	}

	std::string		srcFile = argv[1];
	std::string		dstFile = srcFile + ".replace";
	std::string		s1(argv[2]);
	std::string		s2(argv[3]);

	if (s1.empty())
	{
		std::cout << "Error: Empty string s1." << std::endl;
		return (1);
	}

	std::ifstream	src(srcFile.c_str());
	std::ofstream	dst(dstFile.c_str());

	if (!src.is_open())
	{
		std::cout << "Error: Could not open source file." << std::endl;
		return (1);
	}
	else if (!dst.is_open())
	{
		std::cout << "Error: Could not create destination file." << std::endl;
		src.close();
		return (1);
	}

	ftReplace(src, dst, s1, s2);
	if (dst.fail())
	{
		std::cout << "Error: Could not write to destination file." << std::endl;
		src.close();
		dst.close();
		return (1);
	}
	
	src.close();
	dst.close();
	return 0;
}
