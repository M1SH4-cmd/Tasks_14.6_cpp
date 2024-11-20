#include <iostream>
using namespace std;

int SIZE = 12;

void initializeBubbleWrap(bool bubbleWrap[12][12]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            bubbleWrap[i][j] = true;
        }
    }
}

void displayBubbleWrap(bool bubbleWrap[12][12]) {
    bool allPopped = true;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (bubbleWrap[i][j]) {
                cout << "o ";
                allPopped = false;
            } else {
                cout << "x ";
            }
        }
        cout << endl;
    }
    if (allPopped) {
        cout << "All bubbles are popped!\nExiting..." << endl;
        exit(0); // Подсмотрено в документации
    }
}

void popBubbles(bool bubbleWrap[12][12], int startX, int startY, int endX, int endY) {
    if (startX < 0 || startX >= SIZE || startY < 0 || startY >= SIZE ||
        endX < 0 || endX >= SIZE || endY < 0 || endY >= SIZE ||
        startX > endX || startY > endY) {
        cout << "Error: Invalid coordinates" << endl;
        return;
    }

    for (int i = startX; i <= endX; ++i) {
        for (int j = startY; j <= endY; ++j) {
            if (bubbleWrap[i][j]) {
                bubbleWrap[i][j] = false;
                cout << "Pop!" << endl;
            }
        }
    }
}

int main() {
    bool bubbleWrap[12][12];
    initializeBubbleWrap(bubbleWrap);

    while (true) {
        displayBubbleWrap(bubbleWrap);
        
        int startX, startY, endX, endY;
        cout << "Enter coordinates of the begining (x1, y1) and of the end (x2, y2) of the square to pop bubbles: ";
        cin >> startX >> startY >> endX >> endY;

        popBubbles(bubbleWrap, startX, startY, endX, endY);
    }

    return 0;
}