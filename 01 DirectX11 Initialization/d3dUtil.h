#ifndef D3DUTIL_H
#define D3DUTIL_H

#include <d3d11_1.h>			// �Ѱ���Windows.h
#include <DirectXCollision.h>	// �Ѱ���DirectXMath.h
#include <DirectXColors.h>
#include <d3dcompiler.h>
#include <wrl/client.h>
#include <filesystem>
#include <vector>
#include <string>
#include "dxerr.h"

// ��ֲ�����Ĵ����飬����Ŀ������ʹ��Unicode�ַ���
#if defined(DEBUG) | defined(_DEBUG)
#ifndef HR
#define HR(x)                                              \
{                                                          \
	HRESULT hr = (x);                                      \
	if(FAILED(hr))                                         \
	{                                                      \
		DXTrace(__FILEW__, (DWORD)__LINE__, hr, L#x, true);\
	}                                                      \
}
#endif
#else
#ifndef HR
#define HR(x) (x)
#endif 
#endif






#endif