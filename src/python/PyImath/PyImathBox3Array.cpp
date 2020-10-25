///////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 1998-2011, Industrial Light & Magic, a division of Lucas
// Digital Ltd. LLC
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
// *       Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
// *       Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
// *       Neither the name of Industrial Light & Magic nor the names of
// its contributors may be used to endorse or promote products derived
// from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
///////////////////////////////////////////////////////////////////////////

// clang-format off

#include "PyImathConfigInternal.h"

#include "PyImathBoxArrayImpl.h"
#include "PyImathExport.h"

namespace PyImath {
using namespace boost::python;

template PYIMATH_EXPORT class_<FixedArray<IMATH_NAMESPACE::Box3s> > register_BoxArray<IMATH_NAMESPACE::V3s>();
template PYIMATH_EXPORT class_<FixedArray<IMATH_NAMESPACE::Box3i> > register_BoxArray<IMATH_NAMESPACE::V3i>();
template PYIMATH_EXPORT class_<FixedArray<IMATH_NAMESPACE::Box3f> > register_BoxArray<IMATH_NAMESPACE::V3f>();
template PYIMATH_EXPORT class_<FixedArray<IMATH_NAMESPACE::Box3d> > register_BoxArray<IMATH_NAMESPACE::V3d>();

template<> PYIMATH_EXPORT IMATH_NAMESPACE::Box3s PyImath::FixedArrayDefaultValue<IMATH_NAMESPACE::Box3s>::value() { return IMATH_NAMESPACE::Box3s(); }
template<> PYIMATH_EXPORT IMATH_NAMESPACE::Box3i PyImath::FixedArrayDefaultValue<IMATH_NAMESPACE::Box3i>::value() { return IMATH_NAMESPACE::Box3i(); }
template<> PYIMATH_EXPORT IMATH_NAMESPACE::Box3f PyImath::FixedArrayDefaultValue<IMATH_NAMESPACE::Box3f>::value() { return IMATH_NAMESPACE::Box3f(); }
template<> PYIMATH_EXPORT IMATH_NAMESPACE::Box3d PyImath::FixedArrayDefaultValue<IMATH_NAMESPACE::Box3d>::value() { return IMATH_NAMESPACE::Box3d(); }
}