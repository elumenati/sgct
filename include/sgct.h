/*
	sgct.h

	(c) 2012 Miroslav Andel, Alexander Fridlund
*/

#ifdef __WIN32__
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#define _CRT_SECURE_NO_DEPRECATE 1
#define _CRT_NONSTDC_NO_DEPRECATE 1
#endif

#ifndef _SGCT_H_
#define _SGCT_H_

#ifdef __WIN32__
    #include <windows.h> //must be declared before glfw
    #include <winsock2.h>
#endif

#include "sgct/ogl_headers.h"
#include "sgct/Engine.h"
#include "sgct/SharedData.h"
#include "sgct/TextureManager.h"
#include "sgct/FontManager.h"
#include "sgct/MessageHandler.h"
#include "sgct/ShaderManager.h"

#endif
