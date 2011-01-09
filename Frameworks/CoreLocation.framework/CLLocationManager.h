/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */



@interface CLLocationManager : NSObject 
{
    id _internal;
}

@property double headingFilter;
@property(readonly) BOOL headingAvailable;
@property BOOL privateMode;
@property NSString *purpose;
@property(readonly) __CLClient *internalClient;
@property(readonly) double bestAccuracy;
@property BOOL supportInfo;
@property(readonly) BOOL locationServicesApproved;
@property(readonly) BOOL locationServicesEnabled;
@property(readonly) BOOL locationServicesAvailable;
@property(readonly) CLLocation *location;
@property double desiredAccuracy;
@property double distanceFilter;
@property <CLLocationManagerDelegate> *delegate;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setDistanceFilter:(double)arg1;
- (double)distanceFilter;
- (void)setDesiredAccuracy:(double)arg1;
- (double)desiredAccuracy;
- (id)location;
- (BOOL)locationServicesAvailable;
- (BOOL)locationServicesEnabled;
- (BOOL)locationServicesApproved;
- (void)setSupportInfo:(BOOL)arg1;
- (BOOL)supportInfo;
- (double)bestAccuracy;
- (struct __CLClient { }*)internalClient;
- (void)setPrivateMode:(BOOL)arg1;
- (BOOL)privateMode;
- (void)setPurpose:(id)arg1;
- (id)purpose;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (BOOL)headingAvailable;
- (void)setHeadingFilter:(double)arg1;
- (double)headingFilter;
- (void)startUpdatingHeading;
- (void)stopUpdatingHeading;
- (void)dismissHeadingCalibrationDisplay;
- (NSInteger)findPlacemarkForLocation:(id)arg1 withLocale:(id)arg2;
- (void)cancelFindForPlacemark:(NSInteger)arg1;
- (void)onClientEvent:(NSInteger)arg1 supportInfo:(id)arg2;
- (void)onClientEventLocation:(id)arg1;
- (void)onClientEventHeading:(id)arg1;
- (void)onClientEventHeadingCalibration:(id)arg1;
- (void)onClientEventPlacemark:(id)arg1;
- (void)onClientEventRegistered:(id)arg1;
- (void)onClientEventError:(id)arg1;

@end