#include <iostream>

using std::cout;
using std::endl;

int getNumberOfJumps(int step, int maxJump = 3) {
    if (step <= 0) {
        return step == 0 ? 1 : 0;
    }

    int variables = 0;
    for (int i = maxJump; i > 0; --i) {
        int temp = getNumberOfJumps(step - i, maxJump);
        variables += temp;
    }

    return variables;
}

int main() {
    const unsigned int stairRung = 4;
    const unsigned int maxJump = 2;

    int result = getNumberOfJumps(stairRung, maxJump);
    cout << "Result is: " << result << endl;
}