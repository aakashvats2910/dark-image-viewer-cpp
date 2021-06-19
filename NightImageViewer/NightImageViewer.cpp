#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
using namespace cv;

string extract_name(string path) {
	// find last occurance of the "/"
	size_t found = path.find_last_of("/");

	if (found == string::npos) {
		found = path.find_last_of("\\");
		if (found == string::npos) {
			return path;
		}
	}

	path = path.substr(found+1);

	// find the first occurance of "."
	size_t doc_occ = path.find(".");
	if (doc_occ == string::npos) {
		return path;
	}

	path = path.substr(0, doc_occ);
	return path;
}

int main() {

	// enter the location of the file from the user.
	string loc;
	cout << "Enter file loc >> ";
	cin >> loc;

	// extract the original file name 
	string original_file_name = extract_name(loc);

	Mat img = imread(loc);
	if (img.empty()) {
		cout << "Inavalid, image cannot be found \n";
		return 0;
	}

	cout << "Working...\n";

	for (int i = 0; i <= img.rows - 1; i++) {
		for (int j = 0; j <= img.cols - 1; j++) {
			Vec3b &op = img.at<Vec3b>(i, j);
			for (int k = 0; k <= img.channels() - 1; k++) {
				uchar c = op.val[k];
				if (c >= 2 && c <= 10) {
					op.val[k] = 255 - c;
				}
			}
			
		}
	}

	imwrite(original_file_name + "-output.jpg", img);

	waitKey(0);

}