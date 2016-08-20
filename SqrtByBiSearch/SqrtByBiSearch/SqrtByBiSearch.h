#pragma once

class SqrtByBiSearch {
public:
	int mySqrt(int x) {
		if (x == 0 || x == 1)
			return x;
		int low = 1, high = x, mid, temp;
		while (low <= high) {
			mid = (low + high) / 2;
			temp = x / mid;
			if (temp == mid)
				return mid;
			else if (temp >mid)
				low = mid + 1;
			else high = mid - 1;
		}
		return low - 1;
	}
};