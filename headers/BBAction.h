@interface BBAction : NSObject
@property (nonatomic) int actionType;
@property (nonatomic, copy) NSDictionary *activatePluginContext;
@property (nonatomic, copy) NSString *activatePluginName;
@property (nonatomic) unsigned int activationMode;
// @property (nonatomic, copy) BBAppearance *appearance;
@property (getter=isAuthenticationRequired, nonatomic) BOOL authenticationRequired;
@property (nonatomic) int behavior;
@property (nonatomic, copy) NSDictionary *behaviorParameters;
@property (nonatomic) BOOL canBypassPinLock;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) id /* block */ internalBlock;
@property (nonatomic, copy) NSString *launchBundleID;
@property (nonatomic) BOOL launchCanBypassPinLock;
@property (nonatomic, copy) NSURL *launchURL;
@property (nonatomic, copy) NSString *remoteServiceBundleIdentifier;
@property (nonatomic, copy) NSString *remoteViewControllerClassName;
@property (nonatomic) BOOL shouldDismissBulletin;

+ (id)action;
+ (id)actionWithActivatePluginName:(id)arg1 activationContext:(id)arg2;
+ (id)actionWithAppearance:(id)arg1;
+ (id)actionWithCallblock:(id /* block */)arg1;
+ (id)actionWithIdentifier:(id)arg1;
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2;
+ (id)actionWithLaunchBundleID:(id)arg1;
+ (id)actionWithLaunchBundleID:(id)arg1 callblock:(id /* block */)arg2;
+ (id)actionWithLaunchURL:(id)arg1;
+ (id)actionWithLaunchURL:(id)arg1 callblock:(id /* block */)arg2;
@end