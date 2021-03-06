/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UISlider.h"

@class MPAVController, NSString, NSTimer, UIImageView, UILabel;

@interface MPVolumeSlider : UISlider
{
    NSTimer *_commitTimer;
    MPAVController *_avController;
    NSString *_volumeAudioCategory;
    int _style;
    UILabel *_routeNameLabel;
    UIImageView *_thumbImageView;
    UIImageView *_thumbMaskImageView;
}

@property(readonly, nonatomic) int style; // @synthesize style=_style;
- (void)_routeNameLabelAnimationDidEnd;
- (void)_layoutForAvailableRoutes;
- (void)_layoutMaskForThumb;
- (id)_maxTrackImageForStyle:(int)arg1;
- (id)_minTrackImageForStyle:(int)arg1;
- (id)_thumbImageForStyle:(int)arg1;
- (void)_commitVolumeChange;
- (void)_updateVolumeFromAVController;
- (void)_volumeDidChange:(id)arg1;
- (void)_systemVolumeDidChange:(id)arg1;
- (void)_systemMuteDidChange:(id)arg1;
- (void)_isAirPlayVideoActiveDidChangeNotification:(id)arg1;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
@property(copy, nonatomic) NSString *volumeAudioCategory;
@property(retain, nonatomic) MPAVController *MPAVController;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setAlpha:(float)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_endTracking;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createThumbView;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (float)maximumValue;
- (float)minimumValue;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

