// Viewport.cpp
// KlayGE Viewport class implement file
// Ver 4.0.0
// Copyright(C) Minmin Gong, 2011
// Homepage: http://www.klayge.org
//
// 4.0.0
// First release (2011.7.24)
//
// CHANGE LIST
//////////////////////////////////////////////////////////////////////////////////

#include <KlayGE/KlayGE.hpp>
#include <KFL/Util.hpp>
#include <KlayGE/Camera.hpp>

#include <KlayGE/Viewport.hpp>

namespace KlayGE
{
	Viewport::Viewport()
		: camera_(MakeSharedPtr<KlayGE::Camera>())
	{
	}

	Viewport::Viewport(int left, int top, int width, int height)
		: left_(left), top_(top),
			width_(width), height_(height),
			camera_(MakeSharedPtr<KlayGE::Camera>())
	{
	}
}
