/*
* Simd Library Tests.
*
* Copyright (c) 2011-2014 Yermalayeu Ihar.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/
#ifndef __TestConfig_h__
#define __TestConfig_h__

#ifdef NDEBUG
#define TEST_PERFORMANCE_TEST_ENABLE
#endif

#include <stdlib.h>

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <sstream>
#include <limits>
#include <iomanip>
#include <memory>

#define SIMD_STATIC
#include "Simd/SimdEnable.h"
#include "Simd/SimdBase.h"
#include "Simd/SimdSse2.h"
#include "Simd/SimdSsse3.h"
#include "Simd/SimdSse41.h"
#include "Simd/SimdSse42.h"
#include "Simd/SimdAvx2.h"
#include "Simd/SimdUtils.h"

#ifdef CUDA_TEST
#include "Cuda/CudaDefs.h"
#ifdef CUDA_ENABLE
#include "Cuda/CudaUtils.h"
#endif
#endif

namespace Test
{
	typedef Simd::View<Simd::Allocator> View;
    typedef Simd::Point<ptrdiff_t> Point;
	typedef uint32_t Histogram[Simd::HISTOGRAM_SIZE];
    typedef std::vector<uint32_t> Sums;

#ifdef CUDA_ENABLE
    typedef Cuda::DView DView;
    typedef Cuda::HView HView;
#endif

#ifdef NDEBUG
	const int W = 1920;
	const int H = 1080;
#else
    const int W = 128;
    const int H = 96;
#endif

	const double MINIMAL_TEST_EXECUTION_TIME = 0.1;
}

#endif//__TestConfig_h__
