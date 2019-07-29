@interface FBBundleInfo : NSObject
// @property (getter=_bundle, nonatomic, readonly, retain) BSCFBundle *bundle;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *bundleType;
@property (nonatomic, retain) NSURL *bundleURL;
@property (nonatomic, copy) NSString *bundleVersion;
// @property (nonatomic, retain) NSUUID *cacheGUID;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSDictionary *extendedInfo;
// @property (getter=_proxy, nonatomic, readonly, retain) LSApplicationProxy *proxy;
@property (nonatomic) unsigned int sequenceNumber;
@end