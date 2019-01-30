#ifndef OPENCV1_PROJECT_IMAGE_BLURING_H
#define OPENCV1_PROJECT_IMAGE_BLURING_H

extern cv::Mat img;
extern cv::Mat smoothed_img;
extern int v_median;
extern int v_gaussian;

void gaussian(int, void *);
void median(int, void *);

#endif //OPENCV1_PROJECT_IMAGE_BLURING_H
