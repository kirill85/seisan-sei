#ifndef COMMON_H
#define	COMMON_H

#include <stdlib.h>
#define _WIN32_DCOM
#include "../contribs/lo-0.888/LightOPC/lightopc.h"
#include "../contribs/lo-0.888/unilog/unilog.h"

// {EC2B8677-A889-40D0-8AF3-2E204A31312A}
const GUID serverGuid= 
{ 0xec2b8677, 0xa889, 0x40d0, { 0x8a, 0xf3, 0x2e, 0x20, 0x4a, 0x31, 0x31, 0x2a }};

unilog* log;
const loVendorInfo VENDOR_INFO = {
        3, 2, 1, 0, 
        (LPSTR)"seisan-sei OPC Server"};

struct OPCFactory {
    
};

#endif	/* COMMON_H */

