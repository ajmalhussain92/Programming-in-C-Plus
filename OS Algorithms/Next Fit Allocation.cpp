#include <iostream>
using namespace std;
// Next Fit Allocation

void nextFit(int blockSize[], int m, int processSize[], int n) {
    int allocation[n];
    int lastAllocatedIndex = 0;		// Just for the very first time. After that, it remembers where it was.

    // Initially no block is assigned to any process
    for (int i = 0; i < n; i++)
        allocation[i] = -1;

    // Pick each process and find a suitable block using next fit
    for (int i = 0; i < n; i++) {
        int count = 0;
        bool allocated = false;

        while (count < m) {
            if (blockSize[lastAllocatedIndex] >= processSize[i]) {
                // Allocate block to process
                allocation[i] = lastAllocatedIndex;
                blockSize[lastAllocatedIndex] -= processSize[i];
                allocated = true;
                break;
            }

            // Move to next block in circular manner
            lastAllocatedIndex = (lastAllocatedIndex + 1) % m;
            count++;
        }

        if (allocated)
            lastAllocatedIndex = (lastAllocatedIndex + 1) % m;  // Move to next block for next process
    }

    // Display allocation results
    cout << "\nProcess ID\tProcess Size\tBlock No.\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "\t\t" << processSize[i] << "\t\t";
        if (allocation[i] != -1)
            cout << allocation[i] + 1;
        else
            cout << "Not Allocated";
        cout << endl;
    }
}

int main() {
    int blockSize[] = {100, 500, 200, 300, 600};
    int processSize[] = {212, 417, 112, 426};
    int m = sizeof(blockSize) / sizeof(blockSize[0]);
    int n = sizeof(processSize) / sizeof(processSize[0]);

    nextFit(blockSize, m, processSize, n);

    return 0;
}

/*

lastAllocatedIndex = (lastAllocatedIndex + 1) % m; means "move to the next block, and wrap around to 0 if you reach the end."

It does increment, but wraps around using the modulo operator. So it behaves like a circular list:
Output: 0 ? 1 ? 2 ? 3 ? 4 ? 0 ? 1 ? ...
At 5, it becomes 0 again.
This is perfect for Next Fit, because it continues checking from the last position, and if it hits the end, it starts again from the beginning.

*/