#include "opencv2/opencv.hpp"
#include <stdio.h>
using namespace cv;

int main(int, char**)
{
	printf("start software Ver. 1.0.0");
	
    VideoCapture cap(0); // open the default camera
    if(!cap.isOpened())  // check if we succeeded
        return -1;

    Mat edges;
	// namedWindow("edges",1);
	int cnt=0;
	for(;;)
    {	
		cnt++;
        Mat frame;
        cap >> frame; // get a new frame from camera
        cvtColor(frame, edges, COLOR_BGR2GRAY);
        //GaussianBlur(edges, edges, Size(7,7), 1.5, 1.5);
        //Canny(edges, edges, 0, 30, 3);
       // imshow("edges", edges);
        //if(waitKey(30) >= 0) break;
    }
    // the camera will be deinitialized automatically in VideoCapture destructor
    return 0;
}