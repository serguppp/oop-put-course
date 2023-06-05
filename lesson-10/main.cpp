#include <iostream>
#include <thread>
#include <vector>
#include <atomic>

void countNucleotides(int start, int end, std::string& sequence,
	std::atomic<int>& A, std::atomic<int>& C, std::atomic<int>& G, std::atomic<int>& T) {
	for (int i = start; i < end; i++) {
		if (sequence[i] == 'A')
			A++;
		else if (sequence[i] == 'C')
			C++;
		else if (sequence[i] == 'G')
			G++;
		else if (sequence[i] == 'T')
			T++;
	}
}
int main() {
	std::vector<std::thread> threads;
	std::atomic<int> A(0), C(0), G(0), T(0);

	std::string sequence;
	std::cin >> sequence;

	int start, end, numThreads = 4;

	for (int i = 0; i < numThreads; i++) {
		start = i * sequence.length() / 4;
		if (i != numThreads - 1)
			end = start + sequence.length() / 4;
		else
			end = sequence.length();

		threads.emplace_back(countNucleotides, start, end, std::ref(sequence),std::ref(A), std::ref(C), std::ref(G), std::ref(T));
	}

	for (auto& thread : threads) { thread.join(); }

	std::cout << "A: " << A.load() << std::endl;
	std::cout << "C: " << C.load() << std::endl;
	std::cout << "G: " << G.load() << std::endl;
	std::cout << "T: " << T.load() << std::endl;
}
