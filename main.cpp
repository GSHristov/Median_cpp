#include <iostream>
#include <functional>

#include "gtest.h"

#include "median.h"

using namespace std;

TEST (simple_test_case, Median_list_0)
{	
	myMedian tmpMedian;

	tmpMedian.printList();
	std::cout << "Median is: " <<tmpMedian.GetMedian() << "\n\n\n";

	ASSERT_EQ(0, tmpMedian.GetMedian()) << "\n\nThis is check for simple text message\n";
}


TEST (simple_test_case, Median_list_1)
{	
	myMedian tmpMedian;

	int testlist[] = {5};
	int list_length = sizeof(testlist)/sizeof(testlist[0]);

	std::cout << "\n\nThe unsorted test list is: ";

	for (int i = 0; i < list_length; i++) {
		std::cout << testlist[i] << ", ";
		tmpMedian.addValue(testlist[i]);
	}
	std::cout << "\n";
	tmpMedian.printList();
	std::cout << "Median is: " <<tmpMedian.GetMedian() << "\n\n\n";

	ASSERT_EQ(5, tmpMedian.GetMedian()) << "\n\nThis is check for simple text message\n";
}


TEST (simple_test_case, Median_list_2)
{	
	myMedian tmpMedian;

	int testlist[] = {5,4};
	int list_length = sizeof(testlist)/sizeof(testlist[0]);

	std::cout << "\n\nThe unsorted test list is: ";

	for (int i = 0; i < list_length; i++) {
		std::cout << testlist[i] << ", ";
		tmpMedian.addValue(testlist[i]);
	}
	std::cout << "\n";
	tmpMedian.printList();
	std::cout << "Median is: " <<tmpMedian.GetMedian() << "\n\n\n";

	ASSERT_EQ(4.5, tmpMedian.GetMedian()) << "\n\nThis is check for simple text message\n";
}


TEST (simple_test_case, Median_list_5)
{	
	myMedian tmpMedian;

	int testlist[] = {1, 5, 2, 4, 1};
	int list_length = sizeof(testlist)/sizeof(testlist[0]);

	std::cout << "\n\nThe unsorted test list is: ";

	for (int i = 0; i < list_length; i++) {
		std::cout << testlist[i] << ", ";
		tmpMedian.addValue(testlist[i]);
	}
	std::cout << "\n";
	tmpMedian.printList();
	std::cout << "Median is: " <<tmpMedian.GetMedian() << "\n\n\n";

	ASSERT_EQ(2, tmpMedian.GetMedian()) << "\n\nThis is check for simple text message\n";
}


TEST (simple_test_case, Median_list_10)
{
	myMedian tmpMedian;

	int testlist[] = {10, 1, 0, 6, 8, 3, 2, 0, 9, 4};
	int list_length = sizeof(testlist)/sizeof(testlist[0]);

	std::cout << "\n\nThe unsorted test list is: ";

	for (int i = 0; i < list_length; i++) {
		std::cout << testlist[i] << ", ";
		tmpMedian.addValue(testlist[i]);
	}

	std::cout << "\n";
	tmpMedian.printList();
	std::cout << "Median is: " <<tmpMedian.GetMedian() << "\n\n\n";

	ASSERT_EQ(3.5, tmpMedian.GetMedian()) << "\n\nThis is check for simple text message\n";
}

TEST (simple_test_case, Median_list_10_negative)
{	
	myMedian tmpMedian;

	int testlist[] = {10, -1, 0, 6, 8, 3, -2, 0, -9, -4};
	int list_length = sizeof(testlist)/sizeof(testlist[0]);

	std::cout << "\n\nThe unsorted test list is: ";

	for (int i = 0; i < list_length; i++) {
		std::cout << testlist[i] << ", ";
		tmpMedian.addValue(testlist[i]);
	}

	std::cout << "\n";
	tmpMedian.printList();
	std::cout << "Median is: " <<tmpMedian.GetMedian() << "\n\n\n";

	ASSERT_EQ(0, tmpMedian.GetMedian()) << "\n\nThis is check for simple text message\n";
}

TEST (simple_test_case, Median_list_15)
{	
	myMedian tmpMedian;

	int testlist[] = {7, 1, 9, 10, 2, 8, 8, 14, 3, 13, 8, 5, 12, 2, 3};
	int list_length = sizeof(testlist)/sizeof(testlist[0]);

	std::cout << "\n\nThe unsorted test list is: ";

	for (int i = 0; i < list_length; i++) {
		std::cout << testlist[i] << ", ";
		tmpMedian.addValue(testlist[i]);
	}

	std::cout << "\n";
	tmpMedian.printList();
	std::cout << "Median is: " <<tmpMedian.GetMedian() << "\n\n\n";

	ASSERT_EQ(8, tmpMedian.GetMedian()) << "\n\nThis is check for simple text message\n";
}

TEST (simple_test_case, Median_list_20)
{	
	myMedian tmpMedian;

	int testlist[] = {7, 7, 2, 20, 13, 20, 9, 8, 8, 1, 6, 2, 0, 20, 0, 5, 16, 4, 4, 10};
	int list_length = sizeof(testlist)/sizeof(testlist[0]);

	std::cout << "\n\nThe unsorted test list is: ";

	for (int i = 0; i < list_length; i++) {
		std::cout << testlist[i] << ", ";
		tmpMedian.addValue(testlist[i]);
	}

	std::cout << "\n";
	tmpMedian.printList();
	std::cout << "Median is: " <<tmpMedian.GetMedian() << "\n\n\n";

	ASSERT_EQ(7, tmpMedian.GetMedian()) << "\n\nThis is check for simple text message\n";
}

TEST (simple_test_case, Median_list_105)
{
	myMedian tmpMedian;

	int testlist[] = {59, 89, 59, 32, 50, 42, 4, 18, 93, 85, 90, 59, 38, 6, 23, 39, 9, 75, 96, 62, 13, 49, 57, 19, 74, 51, 47, 16, 34, 39, 33, 28, 64, 91, 82, 105, 73, 63, 61, 33, 93, 6, 19, 60, 3, 67, 44, 17, 52, 77, 9, 47, 80, 60, 74, 100, 78, 82, 24, 69, 2, 46, 31, 62, 53, 87, 1, 10, 2, 15, 8, 23, 73, 15, 65, 92, 7, 46, 45, 35, 23, 22, 21, 53, 51, 19, 37, 60, 75, 0, 28, 69, 9, 52, 42, 4, 62, 43, 100, 74, 55, 89, 81, 88, 1};
	int list_length = sizeof(testlist)/sizeof(testlist[0]);

	std::cout << "\n\nThe unsorted test list is: ";

	for (int i = 0; i < list_length; i++) {
		std::cout << testlist[i] << ", ";
		tmpMedian.addValue(testlist[i]);
	}

	std::cout << "\n";
	tmpMedian.printList();
	std::cout << "Median is: " <<tmpMedian.GetMedian() << "\n\n\n";

	ASSERT_EQ(49, tmpMedian.GetMedian()) << "\n\nThis is check for simple text message\n";
}

TEST (simple_test_case, Median_list_1000)
{	
	myMedian tmpMedian;

	int testlist[] = {791, 56, 44, 699, 965, 531, 618, 484, 603, 477, 699, 842, 791, 874, 294, 117, 485, 214, 284, 213, 655, 810, 155, 56, 246, 493, 804, 401, 357, 44, 151, 654, 462, 440, 666, 460, 756, 393, 469, 46, 986, 770, 42, 133, 758, 810, 158, 95, 139, 107, 611, 257, 602, 176, 924, 276, 380, 420, 972, 973, 936, 294, 929, 591, 120, 106, 7, 756, 954, 717, 112, 867, 201, 566, 378, 421, 343, 89, 720, 320, 167, 143, 588, 532, 834, 612, 655, 150, 276, 10, 907, 960, 459, 737, 614, 650, 664, 12, 662, 983, 803, 56, 704, 255, 356, 966, 746, 486, 719, 496, 37, 891, 976, 242, 122, 839, 387, 976, 674, 602, 55, 473, 159, 209, 737, 165, 6, 841, 924, 733, 47, 479, 563, 134, 64, 19, 582, 204, 958, 856, 608, 156, 617, 222, 94, 848, 389, 781, 439, 978, 470, 224, 717, 773, 556, 228, 449, 601, 290, 263, 419, 399, 603, 730, 364, 700, 239, 161, 687, 274, 783, 379, 620, 768, 389, 815, 657, 304, 495, 159, 538, 881, 813, 783, 246, 605, 541, 941, 19, 585, 127, 522, 688, 970, 85, 863, 37, 573, 167, 898, 147, 825, 57, 854, 431, 134, 31, 397, 769, 166, 301, 17, 794, 655, 798, 917, 993, 620, 530, 666, 499, 593, 11, 914, 235, 491, 477, 105, 444, 812, 261, 169, 141, 364, 608, 272, 18, 144, 841, 651, 556, 95, 842, 970, 576, 723, 233, 575, 639, 51, 568, 753, 707, 618, 908, 691, 22, 696, 175, 611, 545, 917, 170, 826, 881, 579, 269, 130, 835, 388, 613, 721, 833, 700, 628, 246, 8, 48, 231, 831, 851, 135, 27, 424, 926, 792, 6, 913, 8, 231, 108, 743, 94, 770, 298, 561, 63, 639, 134, 126, 377, 913, 282, 445, 316, 67, 362, 399, 635, 957, 183, 421, 230, 141, 933, 116, 477, 837, 692, 139, 89, 136, 736, 649, 387, 848, 994, 483, 567, 274, 284, 613, 722, 626, 400, 171, 76, 59, 694, 198, 276, 974, 388, 435, 817, 424, 649, 959, 180, 70, 662, 283, 526, 58, 973, 773, 770, 981, 578, 416, 566, 28, 645, 236, 772, 874, 772, 105, 69, 691, 558, 362, 790, 8, 798, 813, 880, 193, 334, 460, 800, 136, 250, 630, 714, 105, 55, 755, 36, 634, 751, 379, 723, 71, 384, 623, 365, 767, 727, 555, 944, 713, 357, 40, 700, 565, 533, 98, 120, 306, 597, 291, 594, 793, 302, 708, 695, 780, 58, 912, 685, 907, 930, 220, 193, 91, 155, 221, 563, 979, 223, 319, 902, 883, 802, 719, 827, 436, 347, 557, 927, 467, 391, 644, 661, 732, 147, 280, 560, 4, 158, 498, 334, 880, 829, 554, 860, 69, 792, 8, 44, 812, 190, 419, 97, 754, 617, 57, 330, 43, 769, 71, 306, 318, 487, 385, 441, 637, 53, 966, 996, 898, 728, 545, 932, 486, 355, 689, 717, 851, 325, 194, 260, 713, 52, 847, 698, 388, 727, 807, 974, 697, 617, 324, 798, 701, 306, 311, 920, 40, 109, 190, 897, 998, 819, 66, 238, 875, 391, 635, 344, 726, 361, 305, 71, 133, 461, 665, 427, 87, 577, 658, 928, 908, 349, 45, 818, 519, 733, 541, 124, 63, 326, 479, 477, 814, 738, 349, 639, 691, 382, 661, 811, 637, 354, 875, 47, 236, 619, 165, 964, 830, 797, 97, 324, 497, 333, 290, 922, 884, 892, 468, 179, 637, 244, 683, 456, 427, 143, 828, 625, 414, 757, 281, 67, 306, 632, 667, 879, 799, 357, 188, 803, 321, 717, 254, 244, 1000, 295, 954, 176, 855, 781, 966, 695, 83, 639, 421, 669, 370, 885, 435, 650, 486, 109, 494, 396, 16, 970, 105, 398, 815, 75, 33, 580, 913, 547, 831, 656, 177, 26, 650, 167, 967, 589, 319, 844, 504, 547, 629, 475, 832, 641, 359, 963, 375, 23, 776, 432, 622, 641, 350, 272, 941, 896, 258, 177, 388, 534, 161, 761, 749, 543, 708, 742, 107, 715, 889, 74, 594, 639, 94, 405, 115, 574, 541, 62, 544, 922, 822, 563, 140, 245, 300, 991, 296, 485, 280, 81, 778, 526, 256, 123, 115, 77, 336, 589, 398, 766, 974, 914, 845, 359, 65, 75, 148, 388, 217, 813, 7, 308, 750, 200, 505, 237, 472, 26, 809, 477, 905, 881, 165, 115, 721, 956, 680, 333, 914, 540, 736, 821, 332, 244, 260, 445, 604, 304, 471, 6, 646, 907, 652, 998, 188, 311, 516, 113, 113, 499, 94, 110, 228, 454, 441, 141, 584, 261, 813, 685, 764, 311, 196, 150, 514, 184, 144, 159, 657, 602, 562, 83, 270, 734, 328, 713, 807, 880, 792, 204, 343, 66, 662, 209, 724, 915, 568, 450, 912, 320, 254, 779, 936, 859, 733, 307, 388, 163, 722, 588, 725, 222, 94, 205, 835, 942, 472, 357, 264, 523, 301, 766, 249, 566, 836, 58, 849, 707, 433, 553, 764, 883, 834, 430, 295, 989, 199, 870, 403, 204, 527, 483, 697, 398, 224, 956, 231, 679, 39, 481, 206, 547, 663, 389, 63, 919, 999, 655, 486, 196, 941, 690, 912, 742, 834, 315, 870, 249, 930, 618, 13, 192, 823, 681, 94, 826, 944, 534, 722, 910, 474, 774, 475, 717, 869, 320, 636, 986, 140, 181, 299, 91, 568, 379, 356, 587, 63, 687, 308, 162, 63, 178, 568, 171, 427, 442, 929, 174, 901, 564, 959, 268, 83, 360, 61, 540, 435, 238, 572, 332, 700, 574, 873, 547, 756, 650, 623, 20, 304, 150, 367, 506, 337, 996, 107, 90, 814, 49, 143, 193, 478, 259, 765, 282, 277, 45, 961, 422, 46, 312, 937, 341, 294, 124, 25, 739, 331, 255, 539, 306, 660, 643, 602, 471, 187, 913, 187, 1000, 434, 408, 304, 792, 108, 973, 397, 183, 3, 776, 253, 68, 32, 558, 382, 155, 264, 377, 766, 632, 91, 523, 786, 78, 384, 615, 367, 270, 995, 448, 525, 755, 783, 613, 338, 126, 868, 775, 656, 996, 853, 822, 423};
	int list_length = sizeof(testlist)/sizeof(testlist[0]);

	std::cout << "\n\nThe unsorted test list is: ";

	for (int i = 0; i < list_length; i++) {
		std::cout << testlist[i] << ", ";
		tmpMedian.addValue(testlist[i]);
	}

	std::cout << "\n";
	tmpMedian.printList();
	std::cout << "Median is: " <<tmpMedian.GetMedian() << "\n\n\n";

	ASSERT_EQ(486.5, tmpMedian.GetMedian()) << "\n\nThis is check for simple text message\n";
}