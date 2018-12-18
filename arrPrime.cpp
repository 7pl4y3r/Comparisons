#include <iostream>

struct List {
	int val;
	List *next;
};

bool isPrime(int x) {

	if (x == 2)
		return true;

	if (x < 2 || x % 2 == 0)
		return false;
	for (int d = 3; d * d <= x; d += 2)
		if (x % d == 0)
			return false;

	return true;
}

void readList(List *&f, int len) {

	f = new List;
	std::cout << "val...\n";
	std::cin >> f->val;
	f->next = 0;

	if (len > 1) {

		List *l = f;
		for (int i = 1; i < len; i++) {

			List *p = new List;
			p->next = 0;
			std::cout << "val...\n";
			std::cin >> p->val;

			l->next = p;
			l = p;
		}
	}
}

void prntList(List *f) {

	for (List *p = f; p; p = p->next)
		std::cout << p->val << ' ';

	std::cout << "\n";
}

void prntIfPrime(List *f) {

	for (List *p = f; p; p = p->next)
		if (isPrime(p->val))
			std::cout << p->val << " is prime\n";
		else
			std::cout << p->val << " is not prime\n";
}

int main() {

	List *f = 0;
	int len;

	std::cout << "Lenght...\n";
	std::cin >> len;
	readList(f, len);

	std::cout << "Read list is:\n";
	prntList(f);

	std::cout << "The prime elements are:\n";
	prntIfPrime(f);

	return 0;
}