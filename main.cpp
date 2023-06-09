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
    int stairRungList[] = { 3, 5, 7,9 };
    int maxJumpList[] = { 2, 2, 3, 2 };

    for (int i = 0; i < (sizeof(stairRungList) / sizeof(*stairRungList)); ++i) {
        int stairRung = stairRungList[i];
        int maxJump = maxJumpList[i];
        int result = getNumberOfJumps(stairRung, maxJump);
        printf("Stair rung: %i, max jump: %i. Result is: %i\n", stairRung, maxJump, result);
    }

}