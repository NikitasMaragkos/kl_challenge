/*M///////////////////////////////////////////////////////////////////////////////////////
//
//  IMPORTANT: READ BEFORE DOWNLOADING, COPYING, INSTALLING OR USING.
//
//  By downloading, copying, installing or using the software you agree to this license.
//  If you do not agree to this license, do not download, install,
//  copy or use the software.
//
//
//                           License Agreement
//                For Open Source Computer Vision Library
//
// Copyright (C) 2000-2008, Intel Corporation, all rights reserved.
// Copyright (C) 2009-2010, Willow Garage Inc., all rights reserved.
// Third party copyrights are property of their respective owners.
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
//   * Redistribution's of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//
//   * Redistribution's in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//
//   * The name of the copyright holders may not be used to endorse or promote products
//     derived from this software without specific prior written permission.
//
// This software is provided by the copyright holders and contributors "as is" and
// any express or implied warranties, including, but not limited to, the implied
// warranties of merchantability and fitness for a particular purpose are disclaimed.
// In no event shall the Intel Corporation or contributors be liable for any direct,
// indirect, incidental, special, exemplary, or consequential damages
// (including, but not limited to, procurement of substitute goods or services;
// loss of use, data, or profits; or business interruption) however caused
// and on any theory of liability, whether in contract, strict liability,
// or tort (including negligence or otherwise) arising in any way out of
// the use of this software, even if advised of the possibility of such damage.
//
//M*/

#ifndef __OPENCV_ALL_HPP__
#define __OPENCV_ALL_HPP__

#include "../opencv2/opencv_modules.hpp"

#include "../opencv2/core/core_c.h"
#include "../opencv2/core/core.hpp"
#ifdef HAVE_OPENCV_FLANN
#include "opencv2/flann/miniflann.hpp"
#endif
#ifdef HAVE_OPENCV_IMGPROC
#include "../opencv2/imgproc/imgproc_c.h"
#include "../opencv2/imgproc/imgproc.hpp"
#endif
#ifdef HAVE_OPENCV_PHOTO
#include "opencv2/photo/photo.hpp"
#endif
#ifdef HAVE_OPENCV_VIDEO
#include "opencv2/video/video.hpp"
#endif
#ifdef HAVE_OPENCV_FEATURES2D
#include "opencv2/features2d/features2d.hpp"
#endif
#ifdef HAVE_OPENCV_OBJDETECT
#include "opencv2/objdetect/objdetect.hpp"
#endif
#ifdef HAVE_OPENCV_CALIB3D
#include "opencv2/calib3d/calib3d.hpp"
#endif
#ifdef HAVE_OPENCV_ML
#include "opencv2/ml/ml.hpp"
#endif
#ifdef HAVE_OPENCV_HIGHGUI
#include "../opencv2/highgui/highgui_c.h"
#include "../opencv2/highgui/highgui.hpp"
#endif
#ifdef HAVE_OPENCV_CONTRIB
#include "opencv2/contrib/contrib.hpp"
#endif

#endif
