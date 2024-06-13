#pragma once

int sum(int first, int second) {
	int result;
	return result = first + second;
}
int subtract(int first, int second) {
	int result;
	return result = first - second;
}
int multiplic(int first, int second) {
	int result;
	return result = first * second;
}
int division(int first, int second) {
	int result;
	return result = first / second;
}
int exponent(int first, int second) {
	int result = first;
	for (int i = 1; i < second; i++) {
		result *= first;
	}
	return result;
}