// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char *str) {
	int i = 0, count = 0,
		in = 0,
		F = 0;
	while (qwerty[i] != '\0') {
		if (qwerty[i] == ' ' && (int)qwerty[i + 1] != 32) {
			for (int f = i + 1; (int)qwerty[f] != 32; f++) {
				if (58 > (int)qwerty[f] > 47)
					F++;
			}
			if (F == 0) {
				in++;
				F = 0;
			}
		}
		if ((int)qwerty[1] != 32) {
			for (int f = i; (int)qwerty[f] != 32; f++) {
				if (58 > (int)qwerty[f] > 47)
					F++;
			}
			if (F == 0) {
				in++;
				F = 0;
			}
		}
	}
}
unsigned int faStr2(const char *str) {
	int i = 0, count = 0,
		in = 0,
		F = 0;
	while (qwerty[i] != '\0')
	{
		if (qwerty[i] == ' ' && qwerty[i + 1] != ' ' && qwerty[i - 1] != ' ' && (int)qwerty[i + 1] < 90) {
			in++;
			F = 1;
		}
		else if (qwerty[i] == ' ' && qwerty[i + 1] == ' ' && (int)qwerty[i + 1] < 91)
		{
			in++;
		}
		i++;
	}
	count = in + 1;
	cout << count;
	return count;
}
unsigned int faStr3(const char *str) {
   	int i = 0, count = 0,
		in = 0,
		F = 0;
	while (qwerty[i] != '\0') {
		if (qwerty[i] == ' ' && (int)qwerty[i + 1] != 32) {
			for (int f = i + 1; (int)qwerty[f] != 32; f++) {
				F++;
			}
			count++;
		}
		if (qwerty[1] != ' ') {
			for (int f = i; (int)qwerty[f] != 32; f++) {
				F++;
			}
			count++;
		}
	}
	in = F / count;
}
