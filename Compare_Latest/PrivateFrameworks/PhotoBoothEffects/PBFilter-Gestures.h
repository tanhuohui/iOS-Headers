/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoBoothEffects/PBFilter.h>

@interface PBFilter (Gestures)
- (void)handleRotateGesture:(float)arg1 stateBegan:(_Bool)arg2 mirror:(_Bool)arg3;
- (void)handlePinchGesture:(float)arg1 stateBegan:(_Bool)arg2;
- (void)handlePanGesture:(struct CGPoint)arg1 viewSize:(struct CGSize)arg2 stateBegan:(_Bool)arg3 mirror:(_Bool)arg4;
- (void)handleGestureAtLocations:(struct CGPoint *)arg1 count:(int)arg2 translation:(struct CGPoint)arg3 viewSize:(struct CGSize)arg4 stateBegan:(_Bool)arg5 mirror:(_Bool)arg6;
- (void)handleTapGesture:(struct CGPoint)arg1 viewSize:(struct CGSize)arg2 mirror:(_Bool)arg3;
- (void)setPointValue:(struct CGPoint)arg1 forKeyIfSupported:(id)arg2;
- (struct CGPoint)pointValueForKeyIfSupported:(id)arg1;
- (void)setFloatValue:(float)arg1 forKeyIfSupported:(id)arg2;
- (float)floatValueForKeyIfSupported:(id)arg1;
@end
