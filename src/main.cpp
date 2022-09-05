#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto t = int{};
	cin >> t;
	while (0 < (t--)) {
		auto val = vi(4);
		for (auto i = 0; i < 4; ++i) {
			cin >> val[i];
		}

		for (auto i = 0; i < 4; ++i) {
			auto x = int{};
			cin >> x;

			val[i] += x;
			if (i < 2) {
				if (val[i] < 1) {
					val[i] = 1;
				}
			}
			else if (2 == i) {
				if (val[i] < 0) {
					val[i] = 0;
				}
			}
		}

		cout << val[0] + 5 * val[1] + 2 * val[2] + 2 * val[3] << '\n';
	}

	return 0;
}