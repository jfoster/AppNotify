#import <BBBulletin.h>
#import <FBApplicationPlaceholder.h>
#import <SBBulletinBannerController.h>

%group Main

%hook SBApplicationPlaceholder

-(void)placeholderPercentCompleteDidChange:(id)arg1 {

}

%end

%hook FBApplicationPlaceholder

-(void)observeValueForKeyPath:(NSString*)arg1 ofObject:(id)arg2 change:(NSDictionary*)arg3 context:(void*)arg4
{
    // arg1 return a string that specifies the value which is being observed
    if ([arg1 isEqualToString:@"fractionCompleted"])
    {
        // arg3 is a NSDictionary, the "new" key specifies the value
        if ([arg3[@"new"] floatValue] == 1)
        {
            BBBulletin *bulletin = [%c(BBBulletin) new];
            bulletin.bulletinID = @"me.etasoon.appnotifier";
            bulletin.sectionID = @"com.apple.AppStore";
            bulletin.defaultAction = [%c(BBAction) actionWithLaunchBundleID:self.bundleIdentifier];

            bulletin.date = [NSDate date];
            bulletin.title = @"App Store";
            bulletin.message = [self.displayName stringByAppendingString:@" has finished downloading, tap to open."];

            [[%c(SBBulletinBannerController) sharedInstance] observer:nil addBulletin:bulletin forFeed:1];

            [bulletin release];
        }
    }
    %orig;
}

%end

%end

%ctor {
    @autoreleasepool {
        %init(Main);
    }
}
