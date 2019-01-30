#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <cstdlib>
#include <opencv2/core/core.hpp>

#include "image_bluring.h"


int main(int argc, char **argv)
{
    std::string imagePath = "..\\balsee.jpg";
    img = cv::imread( imagePath, 1);

    if (!img.data) {
        std::cout << "Could not open or find the image" << std::endl;
        return -1;
    }

    cv::namedWindow("Project Picture", 1);

    cv::createTrackbar("Gaussian", "Project Picture", &v_gaussian, 25, gaussian);
    gaussian(1, 0);

    cv::createTrackbar("Median", "Project Picture", &v_median, 25, median);
    median(1, 0);

    imshow( "Project Picture", smoothed_img );

    cv::waitKey(0);
    return 0;
}