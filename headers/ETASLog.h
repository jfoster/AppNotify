//
//  ETASLog.x
//  ETASoonCommon
//
//  Created by Jacob Foster <jacobfoster@pm.me> on 05/11/2015.
//

#ifndef ETASLogPrefix
#define ETASLogPrefix @"Remember to #define your ETASLogPrefix"
#endif

// ETASLog

#ifndef ETASLog
#define ETASLog(format, ...) NSLog(@"[%@] : %@", ETASLogPrefix, [NSString stringWithFormat:format, ##__VA_ARGS__])
#endif

// ETASLogPretty

#define ETASLogPrettyPriv ETASLogPrefix, __PRETTY_FUNCTION__, __FILE__, __LINE__

#ifndef ETASLogPretty0
#define ETASLogPretty0 NSLog(@"[%@] : %s in [%s:%d]", ETASLogPrettyPriv)
#endif

#ifndef ETASLogPretty
#define ETASLogPretty(format, ...) NSLog(@"[%@] - %s in [%s:%d] - %@", ETASLogPrettyPriv, [NSString stringWithFormat:format, ##__VA_ARGS__])
#endif

// ETASLogClass

#define ETASLogClassPriv ETASLogPrefix, NSStringFromClass([self class]), NSStringFromSelector(_cmd)

#ifndef ETASLogClass0
#define ETASLogClass0 NSLog(@"[%@] - %@:%@", ETASLogClassPriv)
#endif

#ifndef ETASLogClass
#define ETASLogClass(format, ...) NSLog(@"[%@] - %@:%@ - %@", ETASLogClassPriv, [NSString stringWithFormat:format, ##__VA_ARGS__])
#endif
