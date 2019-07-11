#include <iostream>
#include <opencv.hpp>

// �ú��������r�е�DMF(int �㹻ʹ�ã����ᳬ��)
int DMF_r(cv::Mat img, int r, int delta) {
	int result = 0;
	for (int j = 0; j < img.cols - delta; ++j) {
		int tmp = img.at<uchar>(r, j) - img.at<uchar>(r, j + delta);
		result += tmp*tmp;
	}
	return result;
}

// �ú��������c�е�DMF(int �㹻ʹ�ã����ᳬ��)
int DMF_c(cv::Mat img, int c, int delta) {
	int result = 0;
	for (int i = 0; i < img.rows - delta; ++i) {
		int tmp = img.at<uchar>(i, c) - img.at<uchar>(i + delta, c);
		result += tmp*tmp;
	}
	return result;
}

int SFD_r(cv::Mat img, int r, int delta) {
	return DMF_r(img, r, delta + 1) - 2 * DMF_r(img, r, delta) + DMF_r(img, r, delta - 1);
}

int SFD_c(cv::Mat img, int c, int delta) {
	return DMF_c(img, c, delta + 1) - 2 * DMF_r(img, c, delta) + DMF_r(img, c, delta - 1);
}

int calRUsWH(cv::Mat img) {
	int width = 0;
	int height = 0;
	// ��ֱ����
	int maxSFD_r = -1;
	int maxSFD_c = -1;
	for (int i = 0; i < img.cols; ++i) {
		int tmp = SFD_c
		if()
	}


}

int main() {
	cv::Mat img = cv::imread("C:\\Users\\donggeok\\Desktop\\GLCM\\pic\\template.png");
	
	// ����RUs�Ŀ��


	return 0;
}