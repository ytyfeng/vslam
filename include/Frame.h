#ifndef frame_h
#define frame_h

#include "Map.h"
#include "opencv2/core.hpp"
#include "opencv2/core/mat.hpp"
#include "opencv2/flann/miniflann.hpp"
#include <opencv2/ml.hpp>

//TODO: this is really fucking ugly
void extract_key_points(const cv::Mat& image, std::vector<cv::KeyPoint>& keypoints, cv::Mat& descriptors);

class Frame {

public:
  // Camera Intrinsic
  cv::Mat image, K, K_inv, pose;
  std::vector<cv::KeyPoint> keypoints, normalized_keypoints;
  std::vector<MapPoint*> mapPoints;
  cv::flann::Index kdtree;
  cv::Mat descriptors;
  int id;

  Frame(const cv::Mat &image, const cv::Mat &K,
        const cv::Mat pose = cv::Mat::eye(4, 4, CV_32FC1));
  void generate_kdtree();

  /* cv::ml::KD */
  /* cv::Ptr<cv::ml::KNearest> kd() { */

  /* } */
};

#endif
