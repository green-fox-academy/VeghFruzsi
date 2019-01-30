#include <opencv2/opencv.hpp>
#include "image_bluring.h"
#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <cstdlib>
#include <opencv2/core/core.hpp>

cv::Mat img;
cv::Mat smoothed_img;
int v_median = 0;
int v_gaussian = 0;


void gaussian(int, void *) {
    GaussianBlur(img, smoothed_img, cv::Size(2 * v_gaussian + 1, 2 * v_gaussian + 1), v_gaussian);
    imshow("Project Picture", smoothed_img);
}

void median(int, void *) {
    medianBlur(img, smoothed_img, 2 * v_median + 1);
    imshow("Project Picture", smoothed_img);
}









