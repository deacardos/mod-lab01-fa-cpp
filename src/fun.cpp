// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char *qwerty) {
 int i = 0, count = 0, in = 0, F = 0;
 while (qwerty[i] != '\0') {
	 if (qwerty[i] == ' ' && (int)qwerty[i + 1] != 32 && (int)qwerty[i + 1] != '\0') {
		 for (int f = i + 1; (int)qwerty[f] != 32; f++) {
	 		if ((int)qwerty[f] > 47 && (int)qwerty[f] < 58)
			 	F++;
		}
		 if (F == 0)
			 in++;
		 else
			 F = 0;
	 }
	 i++;
 }
 return in;
}
unsigned int faStr2(const char *qwerty) {
 int i = 0, count = 0, in = 0, F = 0;
 while (qwerty[i] != '\0')
 {
	 if (qwerty[i] == ' ' && qwerty[i + 1] != ' ' && (int)qwerty[i + 1] < 91) {
		 in++;
	 }
	 if (i == 0 && qwerty[i] != ' ') {
		 for (int f = i; (int)qwerty[f] != 32; f++) {
			 if ((int)qwerty[f] < 47)
				 in--;
		 }
	 }
	 i++;
 }
 count = in + 1;
 return count;
}
unsigned int faStr3(const char *qwerty) {
 int i = 0, count = 0, in = 0, F = 0;
 while (qwerty[i] != '\0') {
	 if (qwerty[i] == ' ' && (int)qwerty[i + 1] != 32 && (int)qwerty[i + 1] != '\0') {
		 for (int f = i + 1; (int)qwerty[f] != 32 && (int)qwerty[f] != '\0'; f++) {
			 F++;
		 }
		 count++;
	 }
	 if (i == 0 && qwerty[0] != ' ') {
		 for (int f = i; (int)qwerty[f] != 32; f++) {
			 F++;
		 }
		 count++;
	 }
	 i++;
 }
 in = F / count;
 return in;
}
