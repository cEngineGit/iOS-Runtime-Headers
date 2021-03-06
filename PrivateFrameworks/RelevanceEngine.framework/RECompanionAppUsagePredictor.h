/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RECompanionAppUsagePredictor : REPredictor {
    NSDictionary * _predictions;
}

+ (double)updateInterval;

- (void).cxx_destruct;
- (void)_loadStoreIfNeeded;
- (void)collectLoggableState:(id /* block */)arg1;
- (void)dealloc;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (id)init;
- (void)update;

@end
