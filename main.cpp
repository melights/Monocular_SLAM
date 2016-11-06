#include <iostream>
#include "data_manager.h"

#include "opencv2/calib3d/calib3d.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace std;
using namespace cv;
using namespace std;

int main() {
    DataManager dm;
    string directory="/Users/SK/Desktop/cmu/Monocular_SLAM/data/rgbd_dataset_freiburg1_desk2_secret";
    dm.loadImgFileList(directory, 0, 20);

    return 0;
}