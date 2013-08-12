#ifndef __DXCOMMON_DXCOMMON_H__
#define __DXCOMMON_DXCOMMON_H__


#ifdef DXCOMMON_EXPORTS
#define _dxcommon_ __declspec(dllexport)
#else
#define _dxcommon_ __declspec(dllimport)
#endif

class Tracer;

extern   _dxcommon_  Tracer  dxTracer;

#define  DX    dxTracer.trace



// This class is exported from the DxCommon.dll
class DXCOMMON_API CDxCommon {
public:
	CDxCommon(void);
	// TODO: add your methods here.
};

extern DXCOMMON_API int nDxCommon;

DXCOMMON_API int fnDxCommon(void);



#endif /* __DXCOMMON_DXCOMMON_H__ */