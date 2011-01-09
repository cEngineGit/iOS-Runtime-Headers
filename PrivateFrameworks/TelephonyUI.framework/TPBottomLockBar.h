/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class UIView, NSArray, TPLockTextView, NSTimer, TPLockKnobView;



@interface TPBottomLockBar : TPBottomBar 
{
    NSArray *_labels;
    NSInteger _currentLabelIndex;
    NSTimer *_cycleLabelTimer;
    id _delegate;
    id _representedObject;
    TPLockKnobView *_knobView;
    UIView *_trackArrow;
    TPLockTextView *_labelView;
    float _knobTrackInsetLeft;
    float _fontSize;
}

+ (struct CGSize { float x1; float x2; })defaultSize;
+ (id)_backgroundImage;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 knobImage:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 knobColor:(NSInteger)arg2;
- (id)initForIncomingCallWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)knob;
- (void)startAnimating;
- (void)stopAnimating;
- (BOOL)isAnimating;
- (void)downInKnob;
- (void)upInKnob;
- (void)setLabel:(id)arg1;
- (void)_setLabel:(id)arg1;
- (void)startCyclingLabels;
- (void)stopCyclingLabels;
- (void)cycleToNextLabel;
- (NSInteger)currentLabelIndex;
- (void)finishedCyclingLabelOut;
- (void)cycleToLabelAtIndex:(NSInteger)arg1;
- (void)setLabels:(id)arg1;
- (id)labels;
- (void)setFontSize:(float)arg1;
- (float)fontSize;
- (void)knobDragged:(float)arg1;
- (void)slideBack:(BOOL)arg1;
- (void)relock;
- (void)freezeKnobInUnlockedPosition;
- (void)unlock;
- (void)setDelegate:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (float)knobTrackInsetLeft;

@end