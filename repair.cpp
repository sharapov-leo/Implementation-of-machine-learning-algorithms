#include <iostream>
#include <fstream>

int main() {
	std::ifstream fIn("cardiovascular_diseases_dv3.csv", std::ios::in | std::ios::binary);
	std::ofstream fOut("out.csv", std::ios::out | std::ios::binary);
	for (;;) {
		char c = fIn.get();
		if (c == EOF)
			break;
		if (c == ';')
			c = ',';
		fOut.put(c);
	}
	fIn.close();
	fOut.close();

	return 0;
}