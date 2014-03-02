//
//  SBGlobals.h
//  Mac Linux USB Loader
//
//  Created by SevenBits on 1/28/14.
//  Copyright (c) 2014 SevenBits. All rights reserved.
//

#ifndef Mac_Linux_USB_Loader_SBGlobals_h
#define Mac_Linux_USB_Loader_SBGlobals_h

#define SBLogObject(x) NSLog(@"%@", x)
#define SBLogBool(x) NSLog(x ? @"YES" : @"NO")
#define SBBool2NSString(x) (x ? @"YES" : @"NO")
#define SBCStr2NSString(x) [NSString initWithCString:x encoding:NSUTF8StringEncoding]
#define SBNSString2CStr(x) [x UTF8String]

#define SBBundledEnterpriseVersionNumber @"0.1.2"

#endif
