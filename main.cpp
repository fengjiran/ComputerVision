#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

int main() {
    cout << "Hello, World!" << endl;

    Mat img = imread("../test.jpg");

    if (img.empty()) {
        cout << "Error" << endl;
        return -1;
    }

    imshow("test.jpg", img);
    waitKey();

    return 0;
}