#import "FBBundleInfo.h"

@interface FBApplicationPlaceholder : FBBundleInfo
@property (getter=isCancellable, nonatomic, readonly) BOOL cancellable;
@property (nonatomic, readonly) unsigned int installPhase;
@property (nonatomic, readonly) unsigned int installState;
@property (nonatomic, readonly) unsigned int installType;
@property (getter=isNewsstand, nonatomic, readonly) BOOL newsstand;
@property (getter=isPausable, nonatomic, readonly) BOOL pausable;
@property (nonatomic, readonly) double percentComplete;
// @property (getter=_proxy, setter=_setProxy:, nonatomic, retain) LSApplicationProxy *proxy;
@property (getter=isRestricted, nonatomic, readonly) BOOL restricted;
@end