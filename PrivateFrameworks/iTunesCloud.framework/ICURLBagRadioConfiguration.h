/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICURLBagRadioConfiguration : NSObject {
    NSDictionary * _bagRadioDictionary;
}

@property (nonatomic, readonly, copy) NSURL *baseURL;
@property (nonatomic, readonly) long long getTracksDPInfoKBSyncCount;

- (void).cxx_destruct;
- (id)baseURL;
- (long long)getTracksDPInfoKBSyncCount;
- (id)initWithBagRadioDictionary:(id)arg1;
- (bool)shouldIncludeHTTPHeaderField:(id)arg1 forRequestURL:(id)arg2;
- (id)urlForBagRadioKey:(id)arg1;

@end
