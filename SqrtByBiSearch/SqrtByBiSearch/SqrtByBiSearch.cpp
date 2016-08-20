// SqrtByBiSearch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"SqrtByBiSearch.h"

int main()
{
	int n;
	std::cin >> n;
	SqrtByBiSearch sqrt;
	std::cout << sqrt.mySqrt(n) << '\n';
    return 0;
}

