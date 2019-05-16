//
//  E01_Functions.cpp
//  Unit1_exercise1_understanding_functions
//

/*
 
 Note:
 Implement the functions in this exercise file to make the tests
 pass in E01_FunctionsSpec.cpp file.
 
 */


//
// Note:
//  Think of all the edge cases.
//
// returns the mid-point of
// given 2 points on X-axis
//
int midPoint(int x1, int x2) {
	int mid = x2 - x1;
	mid = x1 + (mid / 2);
	return mid;
}

//
// sum of most significant digits of non-negative integers.
//
int sumOfMSDs(int num1, int num2) {
	int sum = 0, s =0;
	while (num1 > 10) {
		num1 = num1 / 10;
		//s = num1 % 10;
	}
	//s = 0;
	while (num2 > 10) {
		num2 = num2 / 10;
		//s = num1 % 10;
	}
	sum = num1 + num2;
    return sum;
}

//
// sum of two 100 digit positive numbers
//
void sumOf100DigitNumbers(int num1[100], int num2[100], int sum[101]) {
	int sum1 = 0, i = 0, car = 0, k = 100;
	for (i = 99; i >= 0; i--) {
		sum1 = num1[i] + num2[i] + car;
		if (sum1 > 9) {
			sum[k] = sum1 % 10;
			k--;
			car = sum1 / 10;
		}
		else {
			sum[k] = sum1;
			k--;
			car = 0;
		}
		sum[k] = car;
	}
}

//
// product of two 100 digit positive numbers
//
void productOf100DigitNumbers(int num1[100], int num2[100], int prod[200]) {
	int i = 0, j = 0, p = 0, c = 0, k = 199, l = 0, t = 0;
	for (i = 0; i < 200; i++)
		prod[i] = 0;
	for (i = 99; i >= 0; i--) {
		c = 0;
		k = k - l;
		for (j = 99; j >= 0; j--) {
			p = num1[i] * num2[j] + c;
			if (p >= 10) {
				prod[k] = prod[k] + p % 10;
				k--;
				c = p / 10;
			}
			else {
				prod[k] = prod[k] + p;
				k--;
				c = 0;
			}
		}
		if (c != 0)
			prod[k] = c;
		l++;
		k = 199;
	}
	c = 0;
	for (k = 199; k >= 0; k--) {
		prod[k] = prod[k] + c;
		if (prod[k] <= 9)
		{
			prod[k] = prod[k];
			c = 0;
		}
		else {
			// prod[k] = prod[k] + c;
			c = prod[k] / 10;
			prod[k] = prod[k] % 10;

		}
	}
	
}
