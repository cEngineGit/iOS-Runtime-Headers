/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADManagerInternal;



@interface ADManager : NSObject 
{
    ADManagerInternal *_internal;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)shouldLogResourceRetrievalTiming;
+ (BOOL)shouldLogProtocolBufferRequestsAndResponses;
+ (BOOL)downloadWebArchivesBeforeShowingBanner;
+ (id)sharedAdManager;
+ (BOOL)shouldDisableCaching;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)retain;
- (void)release;
- (NSUInteger)retainCount;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (id)autorelease;
- (void)remoteViewControllerDidDisappear:(id)arg1;
- (void)adSheetReadyToDisplay;
- (void)_dismissLandingPage;
- (void)_updateNetworkDefaults;
- (void)loadDataForBanner:(id)arg1 withSpecification:(id)arg2;
- (void)stopLoadingDataForBanner:(id)arg1 withSpecification:(id)arg2;
- (BOOL)isServerReachable;
- (void)setOverriddenAdServer:(id)arg1;
- (id)overriddenAdServer;
- (void)_considerLeavingApp;
- (void)_considerCalling;
- (void)closeAdSheetSession;
- (void)landingPageDidDismiss;
- (void)_landingPageDidAppear;
- (void)_dismissRemoteViewController:(BOOL)arg1;
- (void)remoteViewControllerDidAppear:(id)arg1;
- (void)didDismissStoryboard:(id)arg1 userInfo:(id)arg2;
- (void)storyboardMainWindowDestroyed:(id)arg1 userInfo:(id)arg2;
- (void)windowIsOnscreen:(id)arg1 userInfo:(id)arg2;
- (void)didCreateRemoteWindow:(id)arg1 userInfo:(id)arg2;
- (void)adSheetDidTerminate:(id)arg1;
- (void)videoPlayerWentFullScreen;
- (void)videoPlayerExitedFullScreen;
- (void)prepareForAdSheetSession;
- (void)sendStoryboardDataToHost;
- (void)_displayStoryboard;
- (void)presentLandingPageForBanner:(id)arg1;
- (id)currentTargetingDataForRequests;
- (id)propertiesRequest;
- (NSUInteger)currentSubscriberMultiplier;
- (void)_reachabilityChanged:(id)arg1;
- (id)requestHeaders;
- (id)serverURL;

@end