#include "pch.h" 
#include <utility>
#include <limits.h>
#include "Dll1.h"

int CountOfDiffNumbres(int* a, int n) {
	int k = 0;
	int el;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] == a[j]) {
				if ((i + 1) != j) {
					el = a[i + 1];
					a[i + 1] = a[j];
					a[j] = el;
				}
				i++;
			}
		}
		k++;
	}
	return k;
}