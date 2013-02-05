/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureAudioChannelInternal;

@interface AVCaptureAudioChannel : NSObject {
    AVCaptureAudioChannelInternal *_internal;
}

@property(readonly) float averagePowerLevel;
@property(readonly) float peakHoldLevel;

- (float)averagePowerLevel;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (float)peakHoldLevel;

@end