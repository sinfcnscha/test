#include <stdio.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>

using namespace cv;

int main( int argc, char** argv)
{
	Mat image;
	VideoCapture cap = VideoCapture(0);

/*	
	image = imread( argv[1], 1);
	if(argc != 2 || !image.data)
	{
		//printf( "No image data \n");
		//return -1;
	}
*/

	while(cap.read(image))
	{
		namedWindow( "Display Image", WINDOW_AUTOSIZE );
		imshow("Display Image", image);
		waitKey(1);
	}

	return 0;
}
